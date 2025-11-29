#include "mainserver.h"
#include "global.h"

// --- HÀM TRẢ VỀ GIAO DIỆN HTML (Dùng cho task_webserver) ---
String getHTML_MainPage()
{
  String l1 = led1_state ? "ON" : "OFF";
  String l2 = led2_state ? "ON" : "OFF";
  
  return R"rawliteral(
<!DOCTYPE html><html lang="vi"><head><meta charset="UTF-8"><meta name="viewport" content="width=device-width, initial-scale=1.0"><title>Yolo Uno Dashboard</title>
<style>body{font-family:sans-serif;background:#f0f2f5;text-align:center;display:flex;justify-content:center;align-items:center;height:100vh;margin:0;}
.card{background:white;padding:30px;border-radius:15px;box-shadow:0 4px 10px rgba(0,0,0,0.1);max-width:400px;width:90%;}
.btn{margin:10px;padding:12px 24px;border:none;border-radius:50px;cursor:pointer;color:white;font-weight:bold;font-size:16px;}
.btn-on{background:#007bff;}.btn-set{background:#28a745;text-decoration:none;display:inline-block;}</style></head>
<body><div class="card"><h1>🚀 Yolo Uno Control</h1>
<div style="font-size:1.2em;margin:15px 0;">🌡️ Temp: <span id="temp">)rawliteral" + String(glob_temperature) + R"rawliteral(</span>°C<br>💧 Hum: <span id="hum">)rawliteral" + String(glob_humidity) + R"rawliteral(</span>%</div><hr>
<button class="btn btn-on" onclick="tg(1)">LED 1: <span id="l1">)rawliteral" + l1 + R"rawliteral(</span></button>
<button class="btn btn-on" onclick="tg(2)">LED 2: <span id="l2">)rawliteral" + l2 + R"rawliteral(</span></button><br><br>
<a href="/settings" class="btn btn-set">⚙️ Cài đặt Wifi</a></div>
<script>
function tg(i){fetch('/toggle?led='+i).then(r=>r.json()).then(j=>{document.getElementById('l1').innerText=j.led1;document.getElementById('l2').innerText=j.led2;});}
setInterval(()=>{fetch('/sensors').then(r=>r.json()).then(d=>{document.getElementById('temp').innerText=d.temp;document.getElementById('hum').innerText=d.hum;});},3000);
</script></body></html>)rawliteral";
}

String getHTML_SettingsPage()
{
  return R"rawliteral(
<!DOCTYPE html><html lang="vi"><head><meta charset="UTF-8"><meta name="viewport" content="width=device-width, initial-scale=1.0"><title>Wifi Config</title>
<style>body{font-family:sans-serif;background:#f0f2f5;display:flex;justify-content:center;align-items:center;height:100vh;margin:0;}
.card{background:white;padding:30px;border-radius:15px;box-shadow:0 4px 10px rgba(0,0,0,0.1);width:300px;text-align:center;}
input{width:100%;padding:10px;margin:10px 0;border:1px solid #ccc;border-radius:5px;box-sizing:border-box;}
button{width:100%;padding:12px;background:#28a745;color:white;border:none;border-radius:5px;cursor:pointer;margin-top:10px;font-weight:bold;}</style></head>
<body><div class="card"><h1>⚙️ Cấu hình Wifi</h1><form id="f">
<input type="text" id="s" placeholder="Tên Wifi (SSID)" required><input type="password" id="p" placeholder="Mật khẩu">
<button type="submit">Kết nối</button><button type="button" style="background:#6c757d" onclick="window.location='/'">Quay lại</button></form>
<div id="m" style="margin-top:15px;color:#007bff;font-weight:bold;"></div></div>
<script>document.getElementById('f').onsubmit=function(e){e.preventDefault();document.getElementById('m').innerText="Đang gửi thông tin...";
fetch('/connect?ssid='+encodeURIComponent(document.getElementById('s').value)+'&pass='+encodeURIComponent(document.getElementById('p').value)).then(r=>r.text()).then(t=>{document.getElementById('m').innerText=t;});};</script></body></html>)rawliteral";
}

// --- TASK CŨ (Vô hiệu hóa để không chạy song song) ---
void main_server_task(void *pvParameters)
{
    // Task này không làm gì cả và tự hủy ngay lập tức
    // Vì chức năng Server đã được chuyển sang task_webserver.cpp
    vTaskDelete(NULL); 
}