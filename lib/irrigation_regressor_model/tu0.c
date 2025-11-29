
#include "ai_watering.h"

void predict_unit0(union Entry* data, float* result) {
  unsigned int tmp;
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3382.999996400000327) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1384.000000000000227) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)393.0000000000000568) ) ) {
        result[0] += 0.47834763360626076;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.67500000000002558) ) ) {
          result[0] += 0.4834415635270104;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)87.20833333333335702) ) ) {
            result[0] += 0.4877909036802941;
          } else {
            result[0] += 0.48194674769799417;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.30833333333334423) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)83.7916666666666714) ) ) {
          if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.3999999999999985234) ) ) {
            result[0] += 0.5001234398179673;
          } else {
            result[0] += 0.5113232618688878;
          }
        } else {
          result[0] += 0.48951817660174224;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)80.79166666666668561) ) ) {
          result[0] += 0.48974894564039634;
        } else {
          result[0] += 0.4958753196668805;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3839.000000200000613) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)77.84166666666668277) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.05833333333333357) ) ) {
          result[0] += 0.5312534701452564;
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
            result[0] += 0.5261703500839479;
          } else {
            result[0] += 0.5170459545285316;
          }
        }
      } else {
        result[0] += 0.5083515104764844;
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
        result[0] += 0.5527056760056959;
      } else {
        result[0] += 0.5341946469664601;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3382.999996400000327) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1384.000000000000227) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)393.0000000000000568) ) ) {
        result[0] += -0.011629233366499346;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.67500000000002558) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1.899999999999998801) ) ) {
            result[0] += -0.00704293560517695;
          } else {
            result[0] += -0.0009922889899462463;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)87.20833333333335702) ) ) {
            result[0] += -0.0024220452091751874;
          } else {
            result[0] += -0.00812009704018396;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.30833333333334423) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)83.7916666666666714) ) ) {
          if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.3999999999999985234) ) ) {
            result[0] += 0.009602177358526542;
          } else {
            result[0] += 0.020522003842486165;
          }
        } else {
          result[0] += -0.0007379540465772153;
        }
      } else {
        result[0] += 0.0015360041550981501;
      }
    }
  } else {
    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)96431.12501790835813) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.20000000000001705) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.05833333333333357) ) ) {
          result[0] += 0.04046866301447153;
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2499999999999999722) ) ) {
            result[0] += 0.03244622580707073;
          } else {
            result[0] += 0.022567916834218937;
          }
        }
      } else {
        result[0] += 0.015777643229812385;
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
        result[0] += 0.059626254803604554;
      } else {
        result[0] += 0.04063845279670897;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3382.999996400000327) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)553.999999910000156) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)222.4999995300000251) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.00833333333333997) ) ) {
          result[0] += -0.006300180208604407;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)87.20833333333335702) ) ) {
            result[0] += 0.00045840961788239516;
          } else {
            result[0] += -0.009137332849204542;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[0] += -0.011186138237551657;
        } else {
          result[0] += -0.005508209317227576;
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)74.24166666666668846) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)414.4999996800000304) ) ) {
          result[0] += -0.005601116643451593;
        } else {
          result[0] += 0.0013860913205684887;
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.891666666666667052) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)296.9999993700000118) ) ) {
            result[0] += 0.007827375392895191;
          } else {
            result[0] += 0.02170565290859452;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)82.0666666666666913) ) ) {
            result[0] += 0.008620331093010589;
          } else {
            result[0] += -0.005238296063890791;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3839.000000200000613) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)77.84166666666668277) ) ) {
        result[0] += 0.03291277534488975;
      } else {
        result[0] += 0.017124127797782423;
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
        result[0] += 0.05942167177796364;
      } else {
        result[0] += 0.041805641651153566;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3382.999996400000327) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1384.000000000000227) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)393.0000000000000568) ) ) {
        result[0] += -0.011066502813654122;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.87500000000001421) ) ) {
          result[0] += -0.006201829605632921;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)87.20833333333335702) ) ) {
            result[0] += -0.0017813078703742627;
          } else {
            result[0] += -0.007713165335830241;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.30833333333334423) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)82.30000000000002558) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.2750000000000199) ) ) {
            result[0] += 0.0014451524996283382;
          } else {
            result[0] += 0.017299922130525457;
          }
        } else {
          result[0] += -0.0008309303261339666;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)80.79166666666668561) ) ) {
          result[0] += -0.0006148627793001465;
        } else {
          result[0] += 0.005309944813405829;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)96431.12501790835813) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.20000000000001705) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.05833333333333357) ) ) {
          result[0] += 0.038634127415716646;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.50833333333333997) ) ) {
            result[0] += 0.024745978618351122;
          } else {
            result[0] += 0.03354268594582876;
          }
        }
      } else {
        result[0] += 0.014889313050856194;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.49166666666668846) ) ) {
        result[0] += 0.05399970285594463;
      } else {
        result[0] += 0.042117720220399946;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3382.999996400000327) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1384.000000000000227) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)393.0000000000000568) ) ) {
        result[0] += -0.010789840397489973;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.67500000000002558) ) ) {
          result[0] += -0.006185150914600179;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)87.20833333333335702) ) ) {
            result[0] += -0.0022274867203668693;
          } else {
            result[0] += -0.007520336109908327;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.30833333333334423) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)4.841666666666667673) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.2750000000000199) ) ) {
            result[0] += 0.0008313182988204063;
          } else {
            result[0] += 0.019170733763907963;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)2383.999999000000116) ) ) {
            result[0] += -0.002769071805075957;
          } else {
            result[0] += 0.012478064497638691;
          }
        }
      } else {
        result[0] += 0.0013806827604421416;
      }
    }
  } else {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)6956.500002500001756) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.20000000000001705) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.05833333333333357) ) ) {
          result[0] += 0.0374182729323705;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.58333333333335702) ) ) {
            result[0] += 0.021765547681716266;
          } else {
            result[0] += 0.031767050365606946;
          }
        }
      } else {
        result[0] += 0.014517080398897332;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.30833333333333712) ) ) {
        result[0] += 0.05154777972321761;
      } else {
        result[0] += 0.03771582402031998;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3382.999996400000327) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1384.000000000000227) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)393.0000000000000568) ) ) {
        result[0] += -0.010520094365040346;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)4485.000000000000909) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
            result[0] += -0.005397747450700048;
          } else {
            result[0] += -0.0010190212786463755;
          }
        } else {
          result[0] += 0.002298687806066412;
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.30833333333334423) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.858333333333333837) ) ) {
          if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.5499999999999970468) ) ) {
            result[0] += 0.0068328605443239215;
          } else {
            result[0] += 0.01966157087143891;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1284.0000035999999) ) ) {
            result[0] += 0.0040061563476920135;
          } else {
            result[0] += 0.01862674646652662;
          }
        }
      } else {
        if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.2499999999999999167) ) ) {
          result[0] += -0.0011131464662718247;
        } else {
          result[0] += 0.004444584285029797;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3839.000000200000613) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.05833333333333357) ) ) {
        result[0] += 0.0361740484307794;
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4391.999989450000612) ) ) {
          result[0] += 0.017469178484869192;
        } else {
          result[0] += 0.028809574863149057;
        }
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
        result[0] += 0.05565083049237728;
      } else {
        result[0] += 0.03842146435204674;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3382.999996400000327) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1384.000000000000227) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)393.0000000000000568) ) ) {
        result[0] += -0.010257091854713397;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.87500000000001421) ) ) {
          result[0] += -0.00578700839395068;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)87.20833333333335702) ) ) {
            result[0] += -0.0015543032688642476;
          } else {
            result[0] += -0.007204334361567383;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.30833333333334423) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)82.30000000000002558) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.14166666666669414) ) ) {
            result[0] += 0.005973290389714142;
          } else {
            result[0] += 0.01716695436238222;
          }
        } else {
          result[0] += -0.0010290603190660477;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)80.79166666666668561) ) ) {
          result[0] += -0.0006667446277219241;
        } else {
          result[0] += 0.005104344439459965;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3752.499998900000264) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)77.84166666666668277) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.05833333333333357) ) ) {
          result[0] += 0.03557846530278524;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.53333333333333854) ) ) {
            result[0] += 0.02320095493302991;
          } else {
            result[0] += 0.03201421756010789;
          }
        }
      } else {
        result[0] += 0.015216745058385035;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)4324.999998900000719) ) ) {
        result[0] += 0.04050580971770817;
      } else {
        result[0] += 0.05211215421557426;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3382.999996400000327) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1384.000000000000227) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)393.0000000000000568) ) ) {
        result[0] += -0.010000664481221763;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.87500000000001421) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1.899999999999998801) ) ) {
            result[0] += -0.005959486808735304;
          } else {
            result[0] += -0.00033233668305911125;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)1.908333333333332993) ) ) {
            result[0] += 0.0025821709394868875;
          } else {
            result[0] += -0.004370116285394345;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)82.85833333333333428) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)74.84166666666668277) ) ) {
          result[0] += -0.0009391833585285548;
        } else {
          if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.3999999999999985234) ) ) {
            result[0] += 0.005982617838593548;
          } else {
            result[0] += 0.01790717794644255;
          }
        }
      } else {
        result[0] += -0.004456352493725717;
      }
    }
  } else {
    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)96431.12501790835813) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)77.84166666666668277) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2723.000000000000455) ) ) {
          result[0] += 0.03535566980640093;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)76.29166666666668561) ) ) {
            result[0] += 0.022423507706507254;
          } else {
            result[0] += 0.030238488344919115;
          }
        }
      } else {
        result[0] += 0.014836326895902556;
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
        result[0] += 0.052130256129635705;
      } else {
        result[0] += 0.03435132038025629;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3382.999996400000327) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1384.000000000000227) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)66.50000000000001421) ) ) {
        result[0] += -0.009792048414521963;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.67500000000002558) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1.899999999999998801) ) ) {
            result[0] += -0.0060053792728230046;
          } else {
            result[0] += -0.0003240282088518143;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)87.20833333333335702) ) ) {
            result[0] += -0.001934047097203422;
          } else {
            result[0] += -0.0069149731841707035;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.30833333333334423) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)82.30000000000002558) ) ) {
          if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.3999999999999985234) ) ) {
            result[0] += 0.007799009577812333;
          } else {
            result[0] += 0.017550046624205375;
          }
        } else {
          result[0] += -0.001003742501139641;
        }
      } else {
        result[0] += 0.0011774832473408121;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3839.000000200000613) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)77.84166666666668277) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.05833333333333357) ) ) {
          result[0] += 0.03354790652499479;
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
            result[0] += 0.02964634642004967;
          } else {
            result[0] += 0.021169630109022064;
          }
        }
      } else {
        result[0] += 0.01446541849151254;
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
        result[0] += 0.051869054920971394;
      } else {
        result[0] += 0.03548708991092794;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3382.999996400000327) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1384.000000000000227) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)393.0000000000000568) ) ) {
        result[0] += -0.009507709038146059;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)4485.000000000000909) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
            result[0] += -0.004916310934673271;
          } else {
            result[0] += -0.00067924850021622;
          }
        } else {
          result[0] += 0.002561937429440709;
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.30833333333334423) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.858333333333333837) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)75.11666666666667425) ) ) {
            result[0] += 0.004577365274141942;
          } else {
            result[0] += 0.019554613086498446;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1284.0000035999999) ) ) {
            result[0] += 0.0032837781906127936;
          } else {
            result[0] += 0.017096945345401765;
          }
        }
      } else {
        result[0] += 0.0011480461846707234;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3839.000000200000613) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)77.84166666666668277) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.05833333333333357) ) ) {
          result[0] += 0.03270920948070638;
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
            result[0] += 0.028905188318179998;
          } else {
            result[0] += 0.020640389253385367;
          }
        }
      } else {
        result[0] += 0.014103783154239258;
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
        result[0] += 0.05057232867926359;
      } else {
        result[0] += 0.03459991342881146;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3382.999996400000327) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1384.000000000000227) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)66.50000000000001421) ) ) {
        result[0] += -0.009309554047567229;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.49166666666668846) ) ) {
          result[0] += -0.005228955023035053;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)1.908333333333332993) ) ) {
            result[0] += 0.0042171872034668925;
          } else {
            result[0] += -0.003987566485791605;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.30833333333334423) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.858333333333333837) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.47500000000000853) ) ) {
            result[0] += 0.00023005539923906328;
          } else {
            result[0] += 0.018737533366193576;
          }
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)31022.08345963000102) ) ) {
            result[0] += 0.0032016837261617187;
          } else {
            result[0] += 0.016669521412024133;
          }
        }
      } else {
        result[0] += 0.0011193450582407726;
      }
    }
  } else {
    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)96431.12501790835813) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.20000000000001705) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.05833333333333357) ) ) {
          result[0] += 0.032459134459495546;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.50833333333333997) ) ) {
            result[0] += 0.02031798528196911;
          } else {
            result[0] += 0.028591016868750253;
          }
        }
      } else {
        result[0] += 0.012049686198873437;
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
        result[0] += 0.048448839485645295;
      } else {
        result[0] += 0.031845911372275576;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3382.999996400000327) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1384.000000000000227) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)393.0000000000000568) ) ) {
        result[0] += -0.009038979768565344;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)4485.000000000000909) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
            result[0] += -0.004689264375828552;
          } else {
            result[0] += -0.0005374548122996376;
          }
        } else {
          result[0] += 0.0026214510589264908;
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.30833333333334423) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)4.841666666666667673) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.2750000000000199) ) ) {
            result[0] += 0;
          } else {
            result[0] += 0.01639577758425954;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)2383.999999000000116) ) ) {
            result[0] += -0.003240464888513088;
          } else {
            result[0] += 0.010593430846929552;
          }
        }
      } else {
        result[0] += 0.0010913614290038822;
      }
    }
  } else {
    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)96431.12501790835813) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.20000000000001705) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.05833333333333357) ) ) {
          result[0] += 0.031647658199071886;
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2499999999999999722) ) ) {
            result[0] += 0.025408227683178016;
          } else {
            result[0] += 0.016559464132243937;
          }
        }
      } else {
        result[0] += 0.011748443680893011;
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
        result[0] += 0.04723761796951294;
      } else {
        result[0] += 0.03104976319131397;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3304.000004100000751) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1384.000000000000227) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)66.50000000000001421) ) ) {
        result[0] += -0.008850841133407955;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.49166666666668846) ) ) {
          result[0] += -0.004998110012645472;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)1.908333333333332993) ) ) {
            result[0] += 0.004228989089440023;
          } else {
            result[0] += -0.0037781601187018075;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.30833333333334423) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)4.841666666666667673) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.2750000000000199) ) ) {
            result[0] += 0;
          } else {
            result[0] += 0.0159298012495492;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)2383.999999000000116) ) ) {
            result[0] += -0.0031594532355666153;
          } else {
            result[0] += 0.009656547318924878;
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)80.79166666666668561) ) ) {
          result[0] += -0.0007986565568410841;
        } else {
          result[0] += 0.00472447075947587;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3752.499998900000264) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.40833333333333499) ) ) {
        result[0] += 0.03061067595084508;
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3880.999999300000582) ) ) {
          result[0] += 0.011954722405027818;
        } else {
          result[0] += 0.022394083551107308;
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)4324.999998900000719) ) ) {
        result[0] += 0.0346656655492606;
      } else {
        result[0] += 0.04558945154150327;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3304.000004100000751) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1384.000000000000227) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)393.0000000000000568) ) ) {
        result[0] += -0.008593345623853249;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)4485.000000000000909) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.87500000000000355) ) ) {
            result[0] += -0.004790275734507264;
          } else {
            result[0] += -0.002113608126450951;
          }
        } else {
          result[0] += 0.0026738292208084696;
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.30833333333334423) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)4.841666666666667673) ) ) {
          if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.3999999999999985234) ) ) {
            result[0] += 0.007388419320976194;
          } else {
            result[0] += 0.015953308462362308;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)2383.999999000000116) ) ) {
            result[0] += -0.0030804667793787434;
          } else {
            result[0] += 0.009415133617380087;
          }
        }
      } else {
        result[0] += 0.0010956493829790061;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3752.499998900000264) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.40833333333333499) ) ) {
        result[0] += 0.029845408936341602;
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3880.999999300000582) ) ) {
          result[0] += 0.011655854211353206;
        } else {
          result[0] += 0.021834231584500045;
        }
      }
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.45833333333333925) ) ) {
          result[0] += 0.05124660140275953;
        } else {
          result[0] += 0.03456752928820524;
        }
      } else {
        result[0] += 0.030597854024834104;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3304.000004100000751) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1384.000000000000227) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)66.50000000000001421) ) ) {
        result[0] += -0.008414736324994584;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.49166666666668846) ) ) {
          result[0] += -0.004770840447741326;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)1.908333333333332993) ) ) {
            result[0] += 0.004243020994056549;
          } else {
            result[0] += -0.0035932281868912546;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.30833333333334423) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)4.841666666666667673) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.2750000000000199) ) ) {
            result[0] += 0;
          } else {
            result[0] += 0.01518625402831276;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1876.500000000000227) ) ) {
            result[0] += -0.00413961826264858;
          } else {
            result[0] += 0.007920355211943389;
          }
        }
      } else {
        result[0] += 0.0010682581044769042;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3752.499998900000264) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.60833333333334849) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3500000000000014766) ) ) {
          result[0] += 0.02498403676374014;
        } else {
          result[0] += 0.016027096340225803;
        }
      } else {
        result[0] += 0.00971302105486393;
      }
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)76.50000000000001421) ) ) {
          result[0] += 0.05040601118044418;
        } else {
          result[0] += 0.03159249818325043;
        }
      } else {
        result[0] += 0.029832908378707036;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3382.999996400000327) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)553.999999910000156) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)222.4999995300000251) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.49166666666668846) ) ) {
          result[0] += -0.0045419050685636935;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)87.20833333333335702) ) ) {
            result[0] += 0.001672957412994061;
          } else {
            result[0] += -0.007315898025428598;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[0] += -0.008245772214981522;
        } else {
          result[0] += -0.0038956628285640327;
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)74.24166666666668846) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)414.4999996800000304) ) ) {
          result[0] += -0.004528445608790636;
        } else {
          result[0] += 0.0008473158538927911;
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.891666666666667052) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)296.9999993700000118) ) ) {
            result[0] += 0.005313876321539283;
          } else {
            result[0] += 0.016852734662006024;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)79.37500000000001421) ) ) {
            result[0] += 0.011047790435701609;
          } else {
            result[0] += -0.0010799313205947627;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3839.000000200000613) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)77.84166666666668277) ) ) {
        result[0] += 0.02365898151849878;
      } else {
        result[0] += 0.01180438800652822;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.49166666666668846) ) ) {
        result[0] += 0.04256748918692271;
      } else {
        result[0] += 0.03154910508129332;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3382.999996400000327) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1384.000000000000227) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)393.0000000000000568) ) ) {
        result[0] += -0.007969482307459495;
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)4485.000000000000909) ) ) {
            result[0] += -0.00417962165075854;
          } else {
            result[0] += 0.0026542546721891715;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)2.875000000000000444) ) ) {
            result[0] += -0.0017024414072511719;
          } else {
            result[0] += 0.004781622441019863;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)82.85833333333333428) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)74.24166666666668846) ) ) {
          result[0] += -0.0006823547782316324;
        } else {
          if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.3999999999999985234) ) ) {
            result[0] += 0.004457734821991501;
          } else {
            result[0] += 0.014864187110654093;
          }
        }
      } else {
        result[0] += -0.0044029452755219405;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3839.000000200000613) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)77.5250000000000199) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)76.29166666666668561) ) ) {
          result[0] += 0.020502473851987002;
        } else {
          result[0] += 0.02715343258033196;
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)6.708333333333333925) ) ) {
          result[0] += 0.00764675887674093;
        } else {
          result[0] += 0.018283286601305012;
        }
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
        result[0] += 0.04294625142589212;
      } else {
        result[0] += 0.028770371167098775;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3382.999996400000327) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)553.999999910000156) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)222.4999995300000251) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.49166666666668846) ) ) {
          result[0] += -0.004331289530307801;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)87.20833333333335702) ) ) {
            result[0] += 0.0017274282172990915;
          } else {
            result[0] += -0.007040956574750858;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[0] += -0.00785531532096987;
        } else {
          result[0] += -0.0036909751985361103;
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)74.24166666666668846) ) ) {
        result[0] += -0.002017867852605452;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.891666666666667052) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)296.9999993700000118) ) ) {
            result[0] += 0.005028531508520246;
          } else {
            result[0] += 0.016113642660762977;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)79.37500000000001421) ) ) {
            result[0] += 0.010561498392000795;
          } else {
            result[0] += -0.0011135666886059594;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3839.000000200000613) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)77.5250000000000199) ) ) {
        result[0] += 0.022973543044249967;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)6.708333333333333925) ) ) {
          result[0] += 0.007455589756369588;
        } else {
          result[0] += 0.01782620391249657;
        }
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
        result[0] += 0.04187259556725621;
      } else {
        result[0] += 0.02805111175074297;
      }
    }
  }
  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)28702.04171786833467) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1441.000000000000227) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)393.0000000000000568) ) ) {
        result[0] += -0.007579571203393646;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.87500000000001421) ) ) {
          result[0] += -0.004412285436334534;
        } else {
          result[0] += -0.0021806015976391824;
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)4.008333333333333748) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.55833333333335133) ) ) {
          result[0] += -0.001997221246128902;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.508333333333333304) ) ) {
            result[0] += 0.017666021617750324;
          } else {
            result[0] += 0.008904134925066805;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)82.0666666666666913) ) ) {
          result[0] += 0.003084240264983641;
        } else {
          result[0] += -0.0042728803176820904;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3752.499998900000264) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)74.89166666666669414) ) ) {
        result[0] += 0.0003122987480395857;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)79.03333333333334565) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.95000000000000639) ) ) {
            result[0] += 0.026859486839350535;
          } else {
            result[0] += 0.018438446587572495;
          }
        } else {
          result[0] += 0.006459457610733807;
        }
      }
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)76.50000000000001421) ) ) {
          result[0] += 0.04618318953297353;
        } else {
          result[0] += 0.028291761040687563;
        }
      } else {
        result[0] += 0.026784888025787143;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2214.000000000000455) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1384.000000000000227) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)393.0000000000000568) ) ) {
        result[0] += -0.007390082071773535;
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)4485.000000000000909) ) ) {
            result[0] += -0.0039013366600880147;
          } else {
            result[0] += 0.002640131365937682;
          }
        } else {
          result[0] += 0;
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.30833333333334423) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)2.608333333333332948) ) ) {
          result[0] += 0.02226162935048342;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)82.30000000000002558) ) ) {
            result[0] += 0.007742004110628077;
          } else {
            result[0] += -0.0014849911946803332;
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)80.79166666666668561) ) ) {
          result[0] += -0.0030844562159230314;
        } else {
          result[0] += 0.0035850878278998765;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3752.499998900000264) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)779.9999991500001215) ) ) {
        result[0] += 0.0018920159431373967;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.10833333333333428) ) ) {
          result[0] += 0.020337298749576488;
        } else {
          result[0] += 0.011456643929360091;
        }
      }
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)76.50000000000001421) ) ) {
          result[0] += 0.04502860854972491;
        } else {
          result[0] += 0.027584467142820358;
        }
      } else {
        result[0] += 0.026115265604522493;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3382.999996400000327) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1384.000000000000227) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)393.0000000000000568) ) ) {
        result[0] += -0.007205330024880824;
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)4485.000000000000909) ) ) {
            result[0] += -0.003803803160478344;
          } else {
            result[0] += 0.0025741281070245;
          }
        } else {
          result[0] += 0;
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.30833333333334423) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.858333333333333837) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)74.96666666666668277) ) ) {
            result[0] += 0.0016858699976000935;
          } else {
            result[0] += 0.015063743012699674;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1284.0000035999999) ) ) {
            result[0] += 0.001978833750954696;
          } else {
            result[0] += 0.01379414703983527;
          }
        }
      } else {
        result[0] += 0.0007597846364563641;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3839.000000200000613) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)77.5250000000000199) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)76.7750000000000199) ) ) {
          result[0] += 0.019476702726446093;
        } else {
          result[0] += 0.02690713009008995;
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)6.708333333333333925) ) ) {
          result[0] += 0.0067392008975148176;
        } else {
          result[0] += 0.01644379271566868;
        }
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
        result[0] += 0.038876756504178045;
      } else {
        result[0] += 0.026027329651748435;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3382.999996400000327) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1384.000000000000227) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)66.50000000000001421) ) ) {
        result[0] += -0.007055771381806905;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.87500000000001421) ) ) {
          result[0] += -0.004139569966707923;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)1.908333333333332993) ) ) {
            result[0] += 0.003097262477709188;
          } else {
            result[0] += -0.003084725434858807;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)82.85833333333333428) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)74.84166666666668277) ) ) {
          result[0] += -0.0012595535569888507;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.716666666666666341) ) ) {
            result[0] += 0.014318983521381463;
          } else {
            result[0] += 0.005292748160180495;
          }
        }
      } else {
        result[0] += -0.004260156437327775;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3839.000000200000613) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)77.5250000000000199) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)76.29166666666668561) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.20833333333335702) ) ) {
            result[0] += 0.020567548090690058;
          } else {
            result[0] += 0.012643070280551911;
          }
        } else {
          result[0] += 0.02420521548638741;
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)6.708333333333333925) ) ) {
          result[0] += 0.00657072080671787;
        } else {
          result[0] += 0.0160326981395483;
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.49166666666668846) ) ) {
        result[0] += 0.03724495583772659;
      } else {
        result[0] += 0.026622558832168575;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3382.999996400000327) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)553.999999910000156) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)222.4999995300000251) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.49166666666668846) ) ) {
          result[0] += -0.003847100609559071;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)87.20833333333335702) ) ) {
            result[0] += 0.0019470853449251408;
          } else {
            result[0] += -0.006551372536426546;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[0] += -0.006986673319026725;
        } else {
          result[0] += -0.003210678768080117;
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)74.84166666666668277) ) ) {
        result[0] += -0.0022032746519627315;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.891666666666667052) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)388.4999978100000249) ) ) {
            result[0] += 0.006949025380114714;
          } else {
            result[0] += 0.01496535496674478;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)82.0666666666666913) ) ) {
            result[0] += 0.004755624594525077;
          } else {
            result[0] += -0.004312927490348503;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3839.000000200000613) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)77.5250000000000199) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)76.7750000000000199) ) ) {
          result[0] += 0.018500115469563753;
        } else {
          result[0] += 0.025629321932792666;
        }
      } else {
        result[0] += 0.011144166711717845;
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
        result[0] += 0.03712309099733829;
      } else {
        result[0] += 0.024586113182937398;
      }
    }
  }
  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)28702.04171786833467) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1441.000000000000227) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)393.0000000000000568) ) ) {
        result[0] += -0.006680562878226097;
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.87500000000000355) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)87.67499999999999716) ) ) {
            result[0] += -0.0031118776788935064;
          } else {
            result[0] += -0.007256707194345919;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)70.91666666666668561) ) ) {
            result[0] += -0.005444682642444969;
          } else {
            result[0] += -0.0003198365646861859;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.30833333333334423) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)14198.65005344499696) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)489.9999994800000991) ) ) {
            result[0] += 0.018248556146198615;
          } else {
            result[0] += 0.007915829272173784;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.53333333333333854) ) ) {
            result[0] += 0.002130157262242089;
          } else {
            result[0] += 0.011017928779125215;
          }
        }
      } else {
        result[0] += -9.805385495143893e-05;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)1164.499999200000275) ) ) {
      result[0] += 0.002677710761172107;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3839.000000200000613) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)78.17500000000002558) ) ) {
          result[0] += 0.01920670520710318;
        } else {
          result[0] += 0.007429902444283168;
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
          result[0] += 0.036195014361292126;
        } else {
          result[0] += 0.02397146018112407;
        }
      }
    }
  }
  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)28702.04171786833467) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1441.000000000000227) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)393.0000000000000568) ) ) {
        result[0] += -0.006513548469632981;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.49166666666668846) ) ) {
          result[0] += -0.0038245083054181993;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)87.20833333333335702) ) ) {
            result[0] += -9.524997484033416e-05;
          } else {
            result[0] += -0.005177747823024495;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.30833333333334423) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)14198.65005344499696) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)489.9999994800000991) ) ) {
            result[0] += 0.017792342199245467;
          } else {
            result[0] += 0.0077179334997473405;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.80833333333335133) ) ) {
            result[0] += -0.0020865719037299808;
          } else {
            result[0] += 0.006004160486693894;
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)80.79166666666668561) ) ) {
          result[0] += -0.0028182653949150576;
        } else {
          result[0] += 0.003912480552836011;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)1164.499999200000275) ) ) {
      result[0] += 0.002610768010550789;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3839.000000200000613) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.10833333333333428) ) ) {
          result[0] += 0.018848141313491152;
        } else {
          result[0] += 0.009683057211339476;
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
          result[0] += 0.035290138740092514;
        } else {
          result[0] += 0.023372173957964953;
        }
      }
    }
  }
}

