import time
import pandas as pd
import sys

# --- CONFIGURATION ---
MOCK_MODE = False  # <--- SET TO TRUE for testing without ESP32
CSV_FILE = 'mcu_simulation_raw_input.csv' # Make sure this matches your file name
SERIAL_PORT = '/dev/ttyACM0' # Doesn't matter in Mock Mode
BAUD_RATE = 115200

# --- THE MOCK SERIAL CLASS ---
# This pretends to be the ESP32 when MOCK_MODE is True
class MockSerial:
    def __init__(self):
        self.in_waiting = 1 # Always pretend data is ready
        self._sent_req = False

    def readline(self):
        # Simulate ESP32 sending "REQ_DATA" every second
        time.sleep(1.0) 
        return b"REQ_DATA\n"

    def write(self, data):
        # Simulate ESP32 receiving the data
        print(f"   📝 [VIRTUAL ESP32] Received payload: {data.decode().strip()}")
        
    def close(self):
        print("   🔌 [VIRTUAL ESP32] Connection closed.")

# Import real serial only if not mocking
if not MOCK_MODE:
    import serial
else:
    serial = None # Placeholder

# --- THE MAPPING ---
EXPECTED_ORDER = [
    'PipeGrow', 'WC_slab1', 'WC_slab2', 'HumDef', 'Tair', 
    'Iglob', 'Tot_PAR', 'RadSum', 'PARout'
]

def main():
    print(f"📂 Loading {CSV_FILE}...")
    try:
        df = pd.read_csv(CSV_FILE)
    except Exception as e:
        print(f"❌ Error reading CSV: {e}")
        return

    # 2. Open Serial (Real or Mock)
    try:
        if MOCK_MODE:
            print("⚠️ RUNNING IN MOCK MODE (No Hardware Required)")
            ser = MockSerial()
        else:
            ser = serial.Serial(SERIAL_PORT, BAUD_RATE, timeout=1)
            print(f"🔌 Connected to {SERIAL_PORT}")
    except Exception as e:
        print(f"❌ Could not open port: {e}")
        return

    print("🚀 Waiting for ESP32 request...")

    row_index = 0
    while row_index < len(df):
        try:
            # Read whatever is there (all bytes)
            if ser.in_waiting > 0:
                # Read raw line
                raw_line = ser.readline()
                
                try:
                    # Try to decode
                    line = raw_line.decode('utf-8', errors='ignore').strip()
                except:
                    line = ""

                # 1. HANDLE REQUEST
                if "REQ_DATA" in line:
                    row = df.iloc[row_index]
                    values = [str(row[col]) for col in EXPECTED_ORDER]
                    data_str = ",".join(values)
                    
                    # Send and FLUSH immediately
                    ser.write((data_str + '\n').encode('utf-8'))
                    ser.flush() 
                    
                    print(f"📤 Sent Row {row_index+1}: {data_str}")
                    row_index += 1
                
                # 2. PRINT EVERYTHING ELSE (The AI Logs)
                elif line:
                    print(f"🔹 ESP32 SAYS: {line}")
                    sys.stdout.flush() # Force terminal to update

        except KeyboardInterrupt:
            break
        except Exception as e:
            print(f"❌ Error: {e}")
            break
        

if __name__ == "__main__":
    main()