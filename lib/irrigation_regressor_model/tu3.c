
#include "ai_watering.h"

void predict_unit3(union Entry* data, float* result) {
  unsigned int tmp;
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2214.000000000000455) ) ) {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1499999999999985789) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1176.500000000000227) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)23.99999985000000535) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)70.14166666666667993) ) ) {
            result[0] += -0.003433577013202012;
          } else {
            result[0] += -0.00039579831857364706;
          }
        } else {
          result[0] += -0.0019755713410480537;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)3191.999999100000878) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)4.800000000000001599) ) ) {
            result[0] += 0.0006615706896261511;
          } else {
            result[0] += -0.0031791393982397546;
          }
        } else {
          if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.8500000000000013101) ) ) {
            result[0] += 0.000997229412566715;
          } else {
            result[0] += 0.009491285750642418;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.47500000000000853) ) ) {
        result[0] += 0;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)1077.999999250000201) ) ) {
          result[0] += 0.008377392930223753;
        } else {
          result[0] += -0.0006337996958754958;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)4556.500000000000909) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)779.9999991500001215) ) ) {
        result[0] += 0.00011076817599435647;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.67500000000001137) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.50833333333333997) ) ) {
            result[0] += 0.005087972146232473;
          } else {
            result[0] += 0.013143678050488234;
          }
        } else {
          result[0] += 0.0023659727486914825;
        }
      }
    } else {
      result[0] += 0.013159433958882636;
    }
  }
  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)31022.08345963000102) ) ) {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1499999999999985789) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)32.32500000000000995) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1061.500000000000227) ) ) {
          result[0] += -0.0019275179842185833;
        } else {
          result[0] += -0.0009028925232871969;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)1000.500000000000114) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)733.4999993500001665) ) ) {
            result[0] += -0.00010226937133568126;
          } else {
            result[0] += 0.00855916787954894;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)4.891666666666666607) ) ) {
            result[0] += 0.0004462571094433468;
          } else {
            result[0] += -0.003718609334900975;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.55833333333335133) ) ) {
        result[0] += -0.00020415145116636443;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.275000000000000355) ) ) {
          result[0] += 0.009607290996407922;
        } else {
          result[0] += 0.003211304334153493;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.95000000000000639) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
        result[0] += 0.012222059810095852;
      } else {
        result[0] += 0.0061910290976888264;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.00833333333333997) ) ) {
        result[0] += 3.5030674748122686e-05;
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6000000000000015321) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)82.0250000000000199) ) ) {
            result[0] += 0.005968181993812324;
          } else {
            result[0] += 0.0004128261418505149;
          }
        } else {
          result[0] += 0.00038886995412982427;
        }
      }
    }
  }
  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1791.000005700000429) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)101.4999993609998938) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)5.499999932500000632) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)87.20833333333335702) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.49166666666668846) ) ) {
            result[0] += -0.0010171431124292535;
          } else {
            result[0] += 0.0021622542422542823;
          }
        } else {
          result[0] += -0.0030428522222620603;
        }
      } else {
        result[0] += -0.0018912566026200108;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.14166666666669414) ) ) {
        result[0] += -0.0007356886116737899;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.725000000000000089) ) ) {
          result[0] += 0.004909950188022257;
        } else {
          if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6999999999999956257) ) ) {
            result[0] += 0.004498358805140015;
          } else {
            result[0] += -0.0005908667429990013;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.46666666666666856) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.94166666666667709) ) ) {
        result[0] += 0.0056521429084241395;
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7591.999997500000063) ) ) {
          result[0] += 0.007222955288831142;
        } else {
          result[0] += 0.015146782718598845;
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.00833333333333997) ) ) {
        result[0] += -0.0005069225132465362;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.60833333333334849) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)6.616666666666668029) ) ) {
            result[0] += 0.011325297488520543;
          } else {
            result[0] += 0.0035354013762844264;
          }
        } else {
          result[0] += 0.0002795713245868683;
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1549.500000000000227) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)369.4999996300000475) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)70.39166666666667993) ) ) {
        result[0] += -0.0027338303566663245;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)87.20833333333335702) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.49166666666668846) ) ) {
            result[0] += -0.0007355442421238235;
          } else {
            result[0] += 0.0018325392050688627;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.55833333333334423) ) ) {
            result[0] += -0.0030668202106441775;
          } else {
            result[0] += 0.0007067854132933113;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)93.25833333333335418) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)2613.000000000000455) ) ) {
          result[0] += -0.002282404264723117;
        } else {
          result[0] += -0.0010406471719632672;
        }
      } else {
        result[0] += 0.0021182253807783126;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.95000000000000639) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.49166666666668846) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.67500000000002558) ) ) {
          result[0] += 0.006280857670353725;
        } else {
          result[0] += 0.015688063040375712;
        }
      } else {
        result[0] += 0.004338531491812319;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.60833333333333428) ) ) {
        result[0] += -0.0012255792543519198;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.249999999999999556) ) ) {
          result[0] += 0.00932720475519697;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2182.499996700000338) ) ) {
            result[0] += 0.001266260269262335;
          } else {
            result[0] += 0.0055900997048593136;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2214.000000000000455) ) ) {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1499999999999985789) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1176.500000000000227) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)23.99999985000000535) ) ) {
          result[0] += -0.000670662623633563;
        } else {
          result[0] += -0.0018034993645930073;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)3734.499999800000751) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)4.800000000000001599) ) ) {
            result[0] += 0.0005667468091437162;
          } else {
            result[0] += -0.0030714073379498885;
          }
        } else {
          if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.8999999999999984679) ) ) {
            result[0] += 0.0015534068451129963;
          } else {
            result[0] += 0.008307956794829806;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)78.47500000000000853) ) ) {
        result[0] += 0.0006371617546354078;
      } else {
        result[0] += 0.005016652716847603;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)4556.500000000000909) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3752.499998900000264) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2644.500000000000455) ) ) {
          if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.3500000000000013656) ) ) {
            result[0] += 0.001005808921181597;
          } else {
            result[0] += 0.006912066386347371;
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6000000000000015321) ) ) {
            result[0] += 0.0029050014814129103;
          } else {
            result[0] += -0.0027813460637948345;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)5833.499998800000867) ) ) {
          result[0] += 0.009524213038384917;
        } else {
          result[0] += 0.0033784149029913047;
        }
      }
    } else {
      result[0] += 0.012265446429902859;
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2214.000000000000455) ) ) {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1499999999999985789) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)74.5250000000000199) ) ) {
        result[0] += -0.0017615215827099747;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)82.85833333333333428) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)80.64166666666667993) ) ) {
            result[0] += -0.0003624980797438625;
          } else {
            result[0] += 0.0034791749693104074;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)1.824999999999999512) ) ) {
            result[0] += 0.0024213765907500472;
          } else {
            result[0] += -0.001986618957564454;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.47500000000000853) ) ) {
        result[0] += 0;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)583.5000032200000533) ) ) {
          result[0] += 0.006854416848574247;
        } else {
          result[0] += 0.0010834921574198895;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)4556.500000000000909) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3752.499998900000264) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2644.500000000000455) ) ) {
          if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.3500000000000013656) ) ) {
            result[0] += 0.0009806637035217136;
          } else {
            result[0] += 0.006739264561661653;
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6000000000000015321) ) ) {
            result[0] += 0.0028323764040154254;
          } else {
            result[0] += -0.0027118123495685205;
          }
        }
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
          result[0] += 0.008672214063020269;
        } else {
          result[0] += 0.0040306268626203135;
        }
      }
    } else {
      result[0] += 0.011958810300989586;
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1549.500000000000227) ) ) {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)93.39166666666669414) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)369.4999996300000475) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)70.39166666666667993) ) ) {
          result[0] += -0.0026183558972932555;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)87.20833333333335702) ) ) {
            result[0] += 8.251550311266427e-05;
          } else {
            result[0] += -0.002077045320310508;
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)4.991666666666668029) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)281.0000017099999354) ) ) {
            result[0] += -0.0016015347085888748;
          } else {
            result[0] += 0.0017666857516659158;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)2613.000000000000455) ) ) {
            result[0] += -0.004884915434970306;
          } else {
            result[0] += 0;
          }
        }
      }
    } else {
      result[0] += 0.003522466778755188;
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.95000000000000639) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.49166666666668846) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.67500000000002558) ) ) {
          result[0] += 0.005841082671540788;
        } else {
          result[0] += 0.014966504130512476;
        }
      } else {
        result[0] += 0.0039593982986676005;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.60833333333333428) ) ) {
        result[0] += -0.0012748457568629485;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.249999999999999556) ) ) {
          result[0] += 0.009000138009174003;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2182.499996700000338) ) ) {
            result[0] += 0.0011659789188250252;
          } else {
            result[0] += 0.00520601258254222;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)31022.08345963000102) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)32.27500000000001279) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1061.500000000000227) ) ) {
        result[0] += -0.0016467156449687622;
      } else {
        result[0] += -0.0006436998667087233;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.32500000000001705) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)77.20833333333335702) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)2.550000000000000266) ) ) {
            result[0] += -0.001263513498803756;
          } else {
            result[0] += 0.0025703519588822256;
          }
        } else {
          result[0] += -0.0043927781831007455;
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.658333333333333215) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)81.5250000000000199) ) ) {
            result[0] += 0.006522835010041793;
          } else {
            result[0] += 0.0012474718119989594;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)80.64166666666667993) ) ) {
            result[0] += -0.0039266794081777336;
          } else {
            result[0] += 0.0005757303232246119;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.95000000000000639) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)76.10833333333334849) ) ) {
        result[0] += 0.005463081417117446;
      } else {
        result[0] += 0.01135722996449719;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.00833333333333997) ) ) {
        result[0] += 0;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)77.44166666666667709) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)6.058333333333334458) ) ) {
            result[0] += 0.009443181588259691;
          } else {
            result[0] += 0.0031050227601982414;
          }
        } else {
          result[0] += 0.0019180239604688004;
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2214.000000000000455) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1549.500000000000227) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)369.4999996300000475) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)71.18333333333335133) ) ) {
          result[0] += -0.0018977855050059805;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)90.2750000000000199) ) ) {
            result[0] += 9.231784138269064e-05;
          } else {
            result[0] += -0.0018423787596508522;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)94.37500000000001421) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)2613.000000000000455) ) ) {
            result[0] += -0.00208692649455858;
          } else {
            result[0] += -0.0008855741293399075;
          }
        } else {
          result[0] += 0.002083193700760603;
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1041.000004850000323) ) ) {
        result[0] += 0.007416003536432982;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)3333.499997400000666) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)1147.999999600000365) ) ) {
            result[0] += 0.001031782026713093;
          } else {
            result[0] += -0.0025058268269532603;
          }
        } else {
          result[0] += 0.004536042741674465;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)4556.500000000000909) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)75.20000000000001705) ) ) {
        result[0] += 0.0005554124083498429;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3935.99999920000073) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.691666666666666874) ) ) {
            result[0] += 0.008911444413475692;
          } else {
            result[0] += 0.002782077816800778;
          }
        } else {
          result[0] += 0.0079129647238082;
        }
      }
    } else {
      result[0] += 0.011343358818187634;
    }
  }
  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1791.000005700000429) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1549.500000000000227) ) ) {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1499999999999985789) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)32.42500000000000426) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)4.991666666666668029) ) ) {
            result[0] += -0.0011145569486621972;
          } else {
            result[0] += -0.0031544889450397986;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.69166666666667709) ) ) {
            result[0] += 0.0009496312304067292;
          } else {
            result[0] += -0.0011059472304473202;
          }
        }
      } else {
        result[0] += 0.0009343284299140986;
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)6.325000000000000178) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1614.500000000000227) ) ) {
          result[0] += 0.007259180838242173;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)5.825000000000000178) ) ) {
            result[0] += 0.0011421227359572998;
          } else {
            result[0] += 0.006463303830474615;
          }
        }
      } else {
        result[0] += -0.004068429978707662;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)4556.500000000000909) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.46666666666666856) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)4524.49999845000093) ) ) {
          result[0] += 0.010676739005804327;
        } else {
          result[0] += 0.0027793951414059846;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3752.499998900000264) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)3760.000000000000455) ) ) {
            result[0] += 0.0031911821642349805;
          } else {
            result[0] += -0.0015168495662510398;
          }
        } else {
          result[0] += 0.005872263432894317;
        }
      }
    } else {
      result[0] += 0.011059775093612686;
    }
  }
  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)31022.08345963000102) ) ) {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1499999999999985789) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)74.5250000000000199) ) ) {
        result[0] += -0.0016166120513371426;
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.791666666666666963) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)257.9999973700000169) ) ) {
            result[0] += -0.00031050622829103045;
          } else {
            result[0] += 0.004174094543221498;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[0] += -0.0037092239441923226;
          } else {
            result[0] += -0.000536576664894895;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.55833333333335133) ) ) {
        result[0] += -0.00017222434182518297;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.275000000000000355) ) ) {
          result[0] += 0.008508818786252629;
        } else {
          result[0] += 0.002765037932818254;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.95000000000000639) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)76.10833333333334849) ) ) {
        result[0] += 0.00504869970703675;
      } else {
        result[0] += 0.010774074609080952;
      }
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6000000000000015321) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)75.60833333333334849) ) ) {
          result[0] += 0.0003783821500837803;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)79.03333333333334565) ) ) {
            result[0] += 0.005657781109569923;
          } else {
            result[0] += 0.0006300392199088547;
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2644.500000000000455) ) ) {
          result[0] += 0.003557784663513301;
        } else {
          result[0] += -0.0021213428741868805;
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2214.000000000000455) ) ) {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1499999999999985789) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)74.5250000000000199) ) ) {
        result[0] += -0.0015761967278085647;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)4360.499999950000529) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.791666666666666963) ) ) {
            result[0] += 7.374432992138382e-05;
          } else {
            result[0] += -0.001970622001311415;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.87500000000001421) ) ) {
            result[0] += 0.0005179704450780437;
          } else {
            result[0] += 0.006801412393423644;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.47500000000000853) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.80833333333333357) ) ) {
          result[0] += 0.0010024200664833188;
        } else {
          result[0] += -0.0012391268708463188;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)1077.999999250000201) ) ) {
          result[0] += 0.007368652319112841;
        } else {
          result[0] += -0.0010922350585460664;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)4556.500000000000909) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)75.20000000000001705) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2644.500000000000455) ) ) {
          result[0] += 0.0026227400675415983;
        } else {
          result[0] += -0.0005880042966945392;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3935.99999920000073) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.691666666666666874) ) ) {
            result[0] += 0.008499800114601384;
          } else {
            result[0] += 0.0025656063663255842;
          }
        } else {
          result[0] += 0.007401576777429958;
        }
      }
    } else {
      result[0] += 0.010651397858746352;
    }
  }
  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1791.000005700000429) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1549.500000000000227) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)93.39166666666669414) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)369.4999996300000475) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)70.39166666666667993) ) ) {
            result[0] += -0.002404789126059991;
          } else {
            result[0] += -0.00012174903434094822;
          }
        } else {
          result[0] += -0.0014755766237743342;
        }
      } else {
        result[0] += 0.0034555879458785057;
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)6.325000000000000178) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.47500000000000853) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)77.20833333333335702) ) ) {
            result[0] += 0.0010811840708341168;
          } else {
            result[0] += -0.0029589161268350752;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)77.95000000000000284) ) ) {
            result[0] += 0.009886423356520634;
          } else {
            result[0] += 0.0014703534551490857;
          }
        }
      } else {
        result[0] += -0.003934672033557525;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)4556.500000000000909) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.46666666666666856) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)4524.49999845000093) ) ) {
          result[0] += 0.010149219538351253;
        } else {
          result[0] += 0.0024209971853997557;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.00833333333333997) ) ) {
          result[0] += -0.0008881646199151874;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)6.058333333333334458) ) ) {
            result[0] += 0.0075089181053141765;
          } else {
            result[0] += 0.0018879677179372972;
          }
        }
      }
    } else {
      result[0] += 0.010385113128206948;
    }
  }
  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)31022.08345963000102) ) ) {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1499999999999985789) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1061.500000000000227) ) ) {
        result[0] += -0.0013461624487696824;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)2670.999998750000486) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)4.800000000000001599) ) ) {
            result[0] += -0.0003736928704081419;
          } else {
            result[0] += -0.002921365679986775;
          }
        } else {
          result[0] += 0.0017948791551062578;
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)2.875000000000000444) ) ) {
        result[0] += 0.00021603363571515263;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.325000000000000622) ) ) {
          result[0] += 0.007956770425662398;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)80.0416666666666714) ) ) {
            result[0] += -0.0015701336203128445;
          } else {
            result[0] += 0.00433306484343484;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)4556.500000000000909) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)1077.999999250000201) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)37819.50001449666888) ) ) {
          result[0] += 0.002320962004363536;
        } else {
          result[0] += -0.0025520804369201264;
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)2383.999999000000116) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1000000000000014072) ) ) {
            result[0] += 0.003458352576602588;
          } else {
            result[0] += 0.010250188898295166;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3752.499998900000264) ) ) {
            result[0] += 0.0017116659894924275;
          } else {
            result[0] += 0.005518727407818943;
          }
        }
      }
    } else {
      result[0] += 0.01012548544698141;
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1549.500000000000227) ) ) {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)93.39166666666669414) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)369.4999996300000475) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)70.39166666666667993) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)1.766666666666666385) ) ) {
            result[0] += -0.00034833302832252926;
          } else {
            result[0] += -0.0037366843737462276;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)87.20833333333335702) ) ) {
            result[0] += 0.00015302510403921742;
          } else {
            result[0] += -0.0018505314006166452;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)2613.000000000000455) ) ) {
          result[0] += -0.0019199026306939608;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.62500000000001421) ) ) {
            result[0] += -0.0012505532835410645;
          } else {
            result[0] += 0.0031899274735608034;
          }
        }
      }
    } else {
      result[0] += 0.003378394231200218;
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3935.99999920000073) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)82.30000000000002558) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.64166666666667993) ) ) {
          result[0] += -0.0012861606381833553;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.325000000000000622) ) ) {
            result[0] += 0.006867083808476175;
          } else {
            result[0] += 0.002194643628104039;
          }
        }
      } else {
        result[0] += -0.0019812232699539314;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.94166666666667709) ) ) {
        result[0] += 0.0020887517873197786;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.19166666666667709) ) ) {
          result[0] += 0.012106227729469536;
        } else {
          result[0] += 0.006286246240139007;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3595.999985200000538) ) ) {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1499999999999985789) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)74.5250000000000199) ) ) {
        result[0] += -0.0014851046507720408;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)82.85833333333333428) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)80.64166666666667993) ) ) {
            result[0] += -0.00021404882701135913;
          } else {
            result[0] += 0.0032264892044942834;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)1.824999999999999512) ) ) {
            result[0] += 0.002486802467278072;
          } else {
            result[0] += -0.0016923771223990747;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.47500000000000853) ) ) {
        result[0] += 0.00011071819298028371;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.358333333333333837) ) ) {
          result[0] += 0.00858141043363139;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)4.741666666666668029) ) ) {
            result[0] += 0.00038774870277848085;
          } else {
            result[0] += 0.006410668853437528;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.10833333333333428) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)75.80833333333335133) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3581.00000135000073) ) ) {
          result[0] += -0.0005822438846987027;
        } else {
          result[0] += 0.0039924172766041014;
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)6.616666666666668029) ) ) {
          result[0] += 0.013815747994231062;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)8.06666666666666643) ) ) {
            result[0] += 0.00018441418738802896;
          } else {
            result[0] += 0.007224715017424575;
          }
        }
      }
    } else {
      result[0] += -0.00021885217788318795;
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2214.000000000000455) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.18333333333334423) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)72.75000000000001421) ) ) {
        result[0] += -0.0016637301643292988;
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1061.500000000000227) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)600.5000000000001137) ) ) {
            result[0] += -0.0010332214050346388;
          } else {
            result[0] += -0.0038411457512689674;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)82.20833333333334281) ) ) {
            result[0] += 0.00021310011793395996;
          } else {
            result[0] += -0.005014857978870472;
          }
        }
      }
    } else {
      if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.1499999999999985234) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)4.825000000000001066) ) ) {
          result[0] += 0.00018889703643347683;
        } else {
          result[0] += -0.002328054729649531;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.69166666666667709) ) ) {
          result[0] += -0.0012320954237427368;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.941666666666666874) ) ) {
            result[0] += 0.0067687559212473315;
          } else {
            result[0] += 0.001344632060311543;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)4556.500000000000909) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)75.20000000000001705) ) ) {
        result[0] += 0.0002775073032183894;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)78.44166666666667709) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
            result[0] += 0.0059517403158714025;
          } else {
            result[0] += 0.0026256676262980984;
          }
        } else {
          result[0] += 0.0009261218957602978;
        }
      }
    } else {
      result[0] += 0.00962574349377643;
    }
  }
  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1791.000005700000429) ) ) {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.87500000000001421) ) ) {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2.049999999999997602) ) ) {
        result[0] += -0.0012117988222745525;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)72.32500000000001705) ) ) {
          result[0] += 0.004720361609011887;
        } else {
          result[0] += -0.0004047572370618582;
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)82.85833333333333428) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)82.55833333333335133) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)4076.999999100000423) ) ) {
            result[0] += 0.0005174730895569821;
          } else {
            result[0] += 0.005196406650356949;
          }
        } else {
          result[0] += 0.005650021814202009;
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)1.824999999999999512) ) ) {
          result[0] += 0.0024575730546244554;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.55833333333334423) ) ) {
            result[0] += -0.002360489548556507;
          } else {
            result[0] += 0.00020527290879187405;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6999999999999956257) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)77.07500000000003126) ) ) {
        result[0] += -0.0015277773980051275;
      } else {
        result[0] += 0.0030665457379072903;
      }
    } else {
      if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.4500000000000027867) ) ) {
        result[0] += 0.01145571240068724;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)5.475000000000000533) ) ) {
          result[0] += 0.009914772365242243;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.20833333333335702) ) ) {
            result[0] += 0.0040505957208255205;
          } else {
            result[0] += 0.00043912030091243135;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1549.500000000000227) ) ) {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)93.39166666666669414) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)369.4999996300000475) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)70.39166666666667993) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)1.766666666666666385) ) ) {
            result[0] += -0.0002631223207295296;
          } else {
            result[0] += -0.003562446861261768;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)87.20833333333335702) ) ) {
            result[0] += 0.00018097565149975903;
          } else {
            result[0] += -0.00169018628586934;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)2613.000000000000455) ) ) {
          result[0] += -0.001812200629860876;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.62500000000001421) ) ) {
            result[0] += -0.0011355394025990143;
          } else {
            result[0] += 0.0030132068649011976;
          }
        }
      }
    } else {
      result[0] += 0.003313436940312385;
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3935.99999920000073) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)82.30000000000002558) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.64166666666667993) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9500000000000029532) ) ) {
            result[0] += -0.0038384963538159013;
          } else {
            result[0] += 0.0005974580360842604;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.325000000000000622) ) ) {
            result[0] += 0.006530739485665605;
          } else {
            result[0] += 0.0019670557980639484;
          }
        }
      } else {
        result[0] += -0.0019160259099628187;
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
        result[0] += 0.011115669868528268;
      } else {
        result[0] += 0.0027218560169122237;
      }
    }
  }
  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)31022.08345963000102) ) ) {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1499999999999985789) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.87500000000001421) ) ) {
        result[0] += -0.0011945515853377558;
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.791666666666666963) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1061.500000000000227) ) ) {
            result[0] += -0.00047530265905273457;
          } else {
            result[0] += 0.0024226896441541614;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)2437.499999100000423) ) ) {
            result[0] += -0.001986853399274885;
          } else {
            result[0] += 0.0033020873412561535;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.47500000000000853) ) ) {
        result[0] += 5.113458840594608e-05;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)1077.999999250000201) ) ) {
          result[0] += 0.006704822610144649;
        } else {
          result[0] += 0;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)4556.500000000000909) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)1077.999999250000201) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)37819.50001449666888) ) ) {
          result[0] += 0.0021986318528652185;
        } else {
          result[0] += -0.0025099029135890304;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.67500000000001137) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)4360.499999950000529) ) ) {
            result[0] += 0.00613124048159878;
          } else {
            result[0] += 0.0022495321950409563;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)2710.999999050000497) ) ) {
            result[0] += 0.002888271163295333;
          } else {
            result[0] += -0.0006971169693861158;
          }
        }
      }
    } else {
      result[0] += 0.00917068431069228;
    }
  }
  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)31022.08345963000102) ) ) {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1499999999999985789) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)74.5250000000000199) ) ) {
        result[0] += -0.0013237144615122817;
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.791666666666666963) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)257.9999973700000169) ) ) {
            result[0] += -0.00019496521572897533;
          } else {
            result[0] += 0.0037386717947740715;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1.000000101050000145) ) ) {
            result[0] += -0.003470597575069406;
          } else {
            result[0] += -0.0004337887630207138;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.55833333333335133) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3.000000218050000722) ) ) {
          result[0] += 0.0012818929692730307;
        } else {
          result[0] += -0.001862871454330161;
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.275000000000000355) ) ) {
          result[0] += 0.007398414522070776;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)83.05000000000001137) ) ) {
            result[0] += 0.00014087204413954166;
          } else {
            result[0] += 0.005121788272168488;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)4556.500000000000909) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)75.20000000000001705) ) ) {
        result[0] += 0.00018836813559755682;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)79.03333333333334565) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
            result[0] += 0.0056082559126532745;
          } else {
            result[0] += 0.0022633008722498615;
          }
        } else {
          result[0] += 2.3882730226767684e-05;
        }
      }
    } else {
      result[0] += 0.00894141687122597;
    }
  }
  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)31022.08345963000102) ) ) {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1499999999999985789) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.87500000000001421) ) ) {
        if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.9500000000000027311) ) ) {
          result[0] += 0.0011550711560145525;
        } else {
          result[0] += -0.0012083760536121123;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)4360.499999950000529) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.791666666666666963) ) ) {
            result[0] += 0.0005476055235950032;
          } else {
            result[0] += -0.0016838650752428555;
          }
        } else {
          result[0] += 0.005877318758517504;
        }
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.47500000000000853) ) ) {
        result[0] += 3.9162095659887606e-05;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)1077.999999250000201) ) ) {
          result[0] += 0.006426948722647992;
        } else {
          result[0] += 0;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.95000000000000639) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
        result[0] += 0.008859939598752297;
      } else {
        result[0] += 0.0036379404808394612;
      }
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6000000000000015321) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)75.60833333333334849) ) ) {
          result[0] += 0;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.20833333333334281) ) ) {
            result[0] += 0.0025570393761405164;
          } else {
            result[0] += 0.008591311559081077;
          }
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)39113.6832915883424) ) ) {
          result[0] += 0.002305353268980979;
        } else {
          result[0] += -0.001979026693631621;
        }
      }
    }
  }
  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)31022.08345963000102) ) ) {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1499999999999985789) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.18333333333334423) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)4.991666666666668029) ) ) {
          result[0] += -0.0008001160242430568;
        } else {
          result[0] += -0.0025171371422584347;
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.81666666666667709) ) ) {
          result[0] += 0.0015095874499381772;
        } else {
          result[0] += -0.0006318668049464171;
        }
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.55833333333335133) ) ) {
        result[0] += -0.00015167876227115771;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.275000000000000355) ) ) {
          result[0] += 0.007140064649283885;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)83.05000000000001137) ) ) {
            result[0] += 8.695606826222499e-05;
          } else {
            result[0] += 0.00484913744404912;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.95000000000000639) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
        result[0] += 0.008638441266272875;
      } else {
        result[0] += 0.0035469918506906223;
      }
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6000000000000015321) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3595.999985200000538) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1486.500002150000228) ) ) {
            result[0] += 0.0032624957842441885;
          } else {
            result[0] += -0.0014648347454411645;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)6.708333333333333925) ) ) {
            result[0] += 0.006246805762383156;
          } else {
            result[0] += 0.0016144069610869117;
          }
        }
      } else {
        result[0] += -0.0002898212536065667;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1549.500000000000227) ) ) {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)93.39166666666669414) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)4.991666666666668029) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.49166666666668846) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1.899999999999998801) ) ) {
            result[0] += -0.0010824132437373443;
          } else {
            result[0] += 0.0014843111386632218;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1061.500000000000227) ) ) {
            result[0] += -0.0007646799238108967;
          } else {
            result[0] += 0.001321218615895746;
          }
        }
      } else {
        result[0] += -0.0021774457243077883;
      }
    } else {
      result[0] += 0.0032360235080122948;
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.95000000000000639) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.49166666666668846) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
          result[0] += 0.011899685031519485;
        } else {
          result[0] += 0.0023118322242337923;
        }
      } else {
        result[0] += 0.0020273882924364164;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.00833333333333997) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)72.9000000000000199) ) ) {
          result[0] += 0;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.34166666666668277) ) ) {
            result[0] += -0.004467218907860416;
          } else {
            result[0] += -2.1427980920467961e-07;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.249999999999999556) ) ) {
          result[0] += 0.0072230121244986865;
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)53338.92491405583132) ) ) {
            result[0] += 0.0007125832914310621;
          } else {
            result[0] += 0.003499384651437615;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2214.000000000000455) ) ) {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.87500000000001421) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)76.20833333333335702) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)72.90833333333334565) ) ) {
          if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6499999999999984679) ) ) {
            result[0] += -0.0036613251707133124;
          } else {
            result[0] += -0.0010337056754435717;
          }
        } else {
          result[0] += 0.0002888949095116307;
        }
      } else {
        result[0] += -0.0017895876603282017;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)4485.000000000000909) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)973.9999997500001427) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)77.47500000000000853) ) ) {
            result[0] += 0.008985705845057965;
          } else {
            result[0] += 0.00022733006532943902;
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)620.0000025750001669) ) ) {
            result[0] += -0.0006763669648697894;
          } else {
            result[0] += -0.003039072983575842;
          }
        }
      } else {
        result[0] += 0.006318582377650522;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)4556.500000000000909) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)75.20000000000001705) ) ) {
        result[0] += 1.852593778086633e-05;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)78.44166666666667709) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)4360.499999950000529) ) ) {
            result[0] += 0.005710751254241803;
          } else {
            result[0] += 0.001546936731184508;
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)33940.07494326417509) ) ) {
            result[0] += 0.002981731640174984;
          } else {
            result[0] += -0.0013910019834740804;
          }
        }
      }
    } else {
      result[0] += 0.008407036914828827;
    }
  }
}

