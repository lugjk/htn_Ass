
#include "ai_watering.h"

void predict_unit1(union Entry* data, float* result) {
  unsigned int tmp;
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2214.000000000000455) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1384.000000000000227) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)66.50000000000001421) ) ) {
        result[0] += -0.006378202472674097;
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
          result[0] += -0.003229062257970856;
        } else {
          result[0] += 0.0003038521923146965;
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)82.85833333333333428) ) ) {
        if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.3999999999999985234) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.60833333333334139) ) ) {
            result[0] += 0.00429407872405136;
          } else {
            result[0] += -0.003368302550580767;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.14166666666669414) ) ) {
            result[0] += 0.002898778802715242;
          } else {
            result[0] += 0.01185732116125938;
          }
        }
      } else {
        result[0] += -0.0042223942538516385;
      }
    }
  } else {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4391.999989450000612) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)779.9999991500001215) ) ) {
        result[0] += 0.0016252143525828915;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.97500000000000853) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)2314.999999500000285) ) ) {
            result[0] += 0.024169000856578346;
          } else {
            result[0] += 0.011216577461122403;
          }
        } else {
          result[0] += 0.008840334246987883;
        }
      }
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)105733.0749608641927) ) ) {
        result[0] += 0.019392881133625736;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.49166666666668846) ) ) {
          result[0] += 0.037285622268915165;
        } else {
          result[0] += 0.024869832226208283;
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2214.000000000000455) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1384.000000000000227) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)393.0000000000000568) ) ) {
        result[0] += -0.0061924755404154635;
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)4485.000000000000909) ) ) {
            result[0] += -0.0033202006699246814;
          } else {
            result[0] += 0.0027939053961577327;
          }
        } else {
          result[0] += 0.0002962558758112469;
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.891666666666667052) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)38.01666666666667282) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)2.608333333333332948) ) ) {
            result[0] += 0.01966625919006765;
          } else {
            result[0] += 0.007393356123052183;
          }
        } else {
          result[0] += -0.0010732679758220912;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)2472.999999600000137) ) ) {
          result[0] += -0.001708953523934311;
        } else {
          result[0] += 0.007529686798944194;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4391.999989450000612) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)779.9999991500001215) ) ) {
        result[0] += 0.0015845839445301818;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.824999999999999734) ) ) {
          result[0] += 0.021713251605629924;
        } else {
          result[0] += 0.010063946531280071;
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3839.000000200000613) ) ) {
        result[0] += 0.01804097618090407;
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
          result[0] += 0.03374277152121067;
        } else {
          result[0] += 0.02210489861228887;
        }
      }
    }
  }
  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)28702.04171786833467) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1441.000000000000227) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)66.50000000000001421) ) ) {
        result[0] += -0.006063935492979729;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.87500000000001421) ) ) {
          result[0] += -0.003659514354685435;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)82.85833333333333428) ) ) {
            result[0] += 0.0007052928028572904;
          } else {
            result[0] += -0.0036160441610464376;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)82.85833333333333428) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.2750000000000199) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)3734.499999800000751) ) ) {
            result[0] += -0.005300501159081855;
          } else {
            result[0] += 0.004587491631973534;
          }
        } else {
          if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.3999999999999985234) ) ) {
            result[0] += 0.0027074590017055642;
          } else {
            result[0] += 0.012322030264344797;
          }
        }
      } else {
        result[0] += -0.0039570552844088525;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)1164.499999200000275) ) ) {
      result[0] += 0.002398218475924484;
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.95000000000000639) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)4324.999998900000719) ) ) {
          result[0] += 0.023429252287516227;
        } else {
          result[0] += 0.03537698274850846;
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)79.03333333333334565) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3752.499998900000264) ) ) {
            result[0] += 0.014981261996696863;
          } else {
            result[0] += 0.022010847099125385;
          }
        } else {
          result[0] += 0.004104645814746618;
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2214.000000000000455) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1384.000000000000227) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)393.0000000000000568) ) ) {
        result[0] += -0.00588742011221299;
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)4485.000000000000909) ) ) {
            result[0] += -0.003168715361580157;
          } else {
            result[0] += 0.002781970354083639;
          }
        } else {
          result[0] += 0.0003713801250116723;
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.891666666666667052) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)74.72500000000000853) ) ) {
          result[0] += -0.0037150944253573053;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)2.608333333333332948) ) ) {
            result[0] += 0.018882157098501925;
          } else {
            result[0] += 0.0085655763050398;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)79.37500000000001421) ) ) {
          result[0] += 0.0071593387293465;
        } else {
          result[0] += -0.001722995697742921;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4391.999989450000612) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)779.9999991500001215) ) ) {
        result[0] += 0.0014846457075327634;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.824999999999999734) ) ) {
          result[0] += 0.020819522798061374;
        } else {
          result[0] += 0.009562463198561928;
        }
      }
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)105733.0749608641927) ) ) {
        result[0] += 0.017956358915664546;
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1000000000000014072) ) ) {
          result[0] += 0.03364926320811112;
        } else {
          result[0] += 0.022173790310819945;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3382.999996400000327) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)553.999999910000156) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)222.4999995300000251) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.49166666666668846) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)70.14166666666667993) ) ) {
            result[0] += -0.006053970085126103;
          } else {
            result[0] += -0.002704175157569091;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)87.20833333333335702) ) ) {
            result[0] += 0.0022118573201199373;
          } else {
            result[0] += -0.0057871259313025;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[0] += -0.0059451305729130086;
        } else {
          result[0] += -0.002663626400319471;
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)74.75000000000001421) ) ) {
        result[0] += -0.0021158618503673513;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.725000000000000089) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)397.9999987400000236) ) ) {
            result[0] += 0.0060448954877658535;
          } else {
            result[0] += 0.013881219977304432;
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1499999999999985789) ) ) {
            result[0] += -0.0003608464844152574;
          } else {
            result[0] += 0.008960312402674132;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.46666666666666856) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)4324.999998900000719) ) ) {
        result[0] += 0.02235835700631142;
      } else {
        result[0] += 0.033794769704341886;
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)6802.500004100001206) ) ) {
        result[0] += 0.010971764337558011;
      } else {
        result[0] += 0.019171006284595934;
      }
    }
  }
  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)28702.04171786833467) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1441.000000000000227) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)393.0000000000000568) ) ) {
        result[0] += -0.0055958839349607515;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.49166666666668846) ) ) {
          result[0] += -0.003364458955408683;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)87.20833333333335702) ) ) {
            result[0] += 0.0001120329309133408;
          } else {
            result[0] += -0.004627172092182769;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.30833333333334423) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)14198.65005344499696) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)489.9999994800000991) ) ) {
            result[0] += 0.016010639436676032;
          } else {
            result[0] += 0.006386238393538139;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.53333333333333854) ) ) {
            result[0] += 0.0013227765251778894;
          } else {
            result[0] += 0.010000889994204046;
          }
        }
      } else {
        result[0] += -0.00017487797614625095;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)1164.499999200000275) ) ) {
      result[0] += 0.002240438923592968;
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.95000000000000639) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)4324.999998900000719) ) ) {
          result[0] += 0.02189001428966339;
        } else {
          result[0] += 0.032949901282787325;
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)6802.500004100001206) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)1710.499999450000132) ) ) {
            result[0] += 0.01877304334532131;
          } else {
            result[0] += 0.009613679879429666;
          }
        } else {
          result[0] += 0.018822292194447733;
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2214.000000000000455) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1384.000000000000227) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)66.50000000000001421) ) ) {
        result[0] += -0.005479533182911751;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)70.14166666666667993) ) ) {
          result[0] += -0.005577203153886579;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.70833333333333925) ) ) {
            result[0] += -0.002824954934747024;
          } else {
            result[0] += -0.00016033118604017157;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.891666666666667052) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.05833333333335133) ) ) {
          result[0] += -0.0027079534623771907;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1549.500000000000227) ) ) {
            result[0] += 0.0044628866435959934;
          } else {
            result[0] += 0.012620818498955272;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)2472.999999600000137) ) ) {
          result[0] += -0.0017485347035571148;
        } else {
          result[0] += 0.006663117086076562;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4391.999989450000612) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)779.9999991500001215) ) ) {
        result[0] += 0.0013897484452241942;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.824999999999999734) ) ) {
          result[0] += 0.019640914261341097;
        } else {
          result[0] += 0.008909489434413814;
        }
      }
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)105733.0749608641927) ) ) {
        result[0] += 0.016654316903380997;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.49166666666668846) ) ) {
          result[0] += 0.03263455978035926;
        } else {
          result[0] += 0.021166512625558038;
        }
      }
    }
  }
  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)28702.04171786833467) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.70833333333333925) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)7.999999866000000459) ) ) {
        result[0] += -0.002449726945916681;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)268.5000003199999696) ) ) {
          result[0] += -0.005210022698796987;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)2472.999999600000137) ) ) {
            result[0] += -0.004938054382801056;
          } else {
            result[0] += 0.007142365717445501;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.55833333333335133) ) ) {
        result[0] += -0.0027554718846429706;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.658333333333333215) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)388.4999978100000249) ) ) {
            result[0] += 0.0027884502905524446;
          } else {
            result[0] += 0.013907990874722598;
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1499999999999985789) ) ) {
            result[0] += -0.001312628319395612;
          } else {
            result[0] += 0.006587963294393072;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)1164.499999200000275) ) ) {
      result[0] += 0.0021182998843041474;
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.95000000000000639) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)4324.999998900000719) ) ) {
          result[0] += 0.020936057166411327;
        } else {
          result[0] += 0.03136763057112694;
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)6802.500004100001206) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)1710.499999450000132) ) ) {
            result[0] += 0.017941430197520692;
          } else {
            result[0] += 0.009067393979904328;
          }
        } else {
          result[0] += 0.017897775533298653;
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2214.000000000000455) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1384.000000000000227) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)393.0000000000000568) ) ) {
        result[0] += -0.005190811000634418;
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)4485.000000000000909) ) ) {
            result[0] += -0.0028335062832532763;
          } else {
            result[0] += 0.0028577327542006967;
          }
        } else {
          result[0] += 0.0006090644051853036;
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)82.85833333333333428) ) ) {
        if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.3999999999999985234) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)489.9999994800000991) ) ) {
            result[0] += -0.003129982209939044;
          } else {
            result[0] += 0.0029371721401933912;
          }
        } else {
          result[0] += 0.008604036609642207;
        }
      } else {
        result[0] += -0.00390776970773004;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3752.499998900000264) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)779.9999991500001215) ) ) {
        result[0] += 0.0013061317122940504;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)77.69166666666667709) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)2314.999999500000285) ) ) {
            result[0] += 0.020872149854898454;
          } else {
            result[0] += 0.012592874808317943;
          }
        } else {
          result[0] += 0.008205167989021746;
        }
      }
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)76.50000000000001421) ) ) {
          result[0] += 0.0344703403928063;
        } else {
          result[0] += 0.018494291216135026;
        }
      } else {
        result[0] += 0.017532748472359447;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2214.000000000000455) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1239.500000000000227) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)222.4999995300000251) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.00833333333333997) ) ) {
          result[0] += -0.00295919483801342;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)87.20833333333335702) ) ) {
            result[0] += 0.0017222634751255378;
          } else {
            result[0] += -0.004532042776984049;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[0] += -0.00529370864529887;
        } else {
          result[0] += -0.0023637722980608977;
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)83.03333333333334565) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.64166666666667993) ) ) {
          result[0] += -0.0033659033840032003;
        } else {
          if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.3999999999999985234) ) ) {
            result[0] += 0.0022722086584794207;
          } else {
            result[0] += 0.008988787566087451;
          }
        }
      } else {
        result[0] += -0.0038261736607468084;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3752.499998900000264) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)779.9999991500001215) ) ) {
        result[0] += 0.0012734784607198978;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.10833333333333428) ) ) {
          result[0] += 0.014289776913466907;
        } else {
          result[0] += 0.007566326437173067;
        }
      }
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)76.50000000000001421) ) ) {
          result[0] += 0.03360858178951522;
        } else {
          result[0] += 0.018031933739781382;
        }
      } else {
        result[0] += 0.01709442944990264;
      }
    }
  }
  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)28702.04171786833467) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.70833333333333925) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)7.999999866000000459) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.308333333333333126) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.49166666666668846) ) ) {
            result[0] += -0.002644150390487435;
          } else {
            result[0] += 0.0012215723747349516;
          }
        } else {
          result[0] += -0.00774905778859791;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)268.5000003199999696) ) ) {
          result[0] += -0.004848496245198956;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)2472.999999600000137) ) ) {
            result[0] += -0.004727412698451769;
          } else {
            result[0] += 0.00675126973015722;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.55833333333335133) ) ) {
        result[0] += -0.002624745168659377;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.658333333333333215) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)388.4999978100000249) ) ) {
            result[0] += 0.002645738207890342;
          } else {
            result[0] += 0.013197449590680338;
          }
        } else {
          result[0] += -0.00024162927596410225;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.95000000000000639) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)4324.999998900000719) ) ) {
        result[0] += 0.019613008682544415;
      } else {
        result[0] += 0.029457376435399057;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)1077.999999250000201) ) ) {
        result[0] += 0.001714032103107976;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.10833333333333428) ) ) {
          result[0] += 0.014191628273042357;
        } else {
          result[0] += 0.006679865311653842;
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2214.000000000000455) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1239.500000000000227) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)393.0000000000000568) ) ) {
        result[0] += -0.0048124541858456625;
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.791666666666666963) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)79.64166666666667993) ) ) {
            result[0] += -0.002677364932434532;
          } else {
            result[0] += 0.0005506598364029612;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.25000000000000711) ) ) {
            result[0] += -0.005062574753436543;
          } else {
            result[0] += 0.0032619418356228955;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)83.03333333333334565) ) ) {
        if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.3999999999999985234) ) ) {
          result[0] += 0.0010268922550268611;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)75.11666666666667425) ) ) {
            result[0] += -0.0007500446858731183;
          } else {
            result[0] += 0.008894690455322584;
          }
        }
      } else {
        result[0] += -0.003718430442607095;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3752.499998900000264) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)74.24166666666668846) ) ) {
        result[0] += 4.461294598877429e-05;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)77.69166666666667709) ) ) {
          result[0] += 0.01361275494272332;
        } else {
          result[0] += 0.0069795687959662515;
        }
      }
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)76.50000000000001421) ) ) {
          result[0] += 0.032272528166120695;
        } else {
          result[0] += 0.017150015965104105;
        }
      } else {
        result[0] += 0.01616108772655328;
      }
    }
  }
  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)28702.04171786833467) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.70833333333333925) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)7.999999866000000459) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.308333333333333126) ) ) {
          result[0] += -0.0017079433799606929;
        } else {
          result[0] += -0.0074730820483283;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)268.5000003199999696) ) ) {
          result[0] += -0.004612486967576781;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)2472.999999600000137) ) ) {
            result[0] += -0.004570373035120694;
          } else {
            result[0] += 0.006508200750395191;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.55833333333335133) ) ) {
        result[0] += -0.0025228996383511045;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)78.94166666666667709) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)1000.500000000000114) ) ) {
            result[0] += 0.01688331451670577;
          } else {
            result[0] += 0.0044872843519988236;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)4.225000000000000533) ) ) {
            result[0] += 0.0034946090118989116;
          } else {
            result[0] += -0.0013465665657713545;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.95000000000000639) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)4324.999998900000719) ) ) {
        result[0] += 0.01874592593083015;
      } else {
        result[0] += 0.028191134616732602;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)779.9999991500001215) ) ) {
        result[0] += 0.0007910629672308764;
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)6802.500004100001206) ) ) {
          result[0] += 0.009236594466337313;
        } else {
          result[0] += 0.015762662386352363;
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2214.000000000000455) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1176.500000000000227) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)222.4999995300000251) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)70.14166666666667993) ) ) {
          result[0] += -0.0050667630417627245;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)87.20833333333335702) ) ) {
            result[0] += -0.0010249930600008924;
          } else {
            result[0] += -0.004160484197753959;
          }
        }
      } else {
        result[0] += -0.004475776723025051;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)83.03333333333334565) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.87500000000001421) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)2133.499999250000201) ) ) {
            result[0] += -0.0031917496013920757;
          } else {
            result[0] += 0.0024762614980304186;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)79.49166666666668846) ) ) {
            result[0] += 0.010530718090390233;
          } else {
            result[0] += 0.0028942592690985366;
          }
        }
      } else {
        result[0] += -0.003626096129106979;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3752.499998900000264) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)779.9999991500001215) ) ) {
        result[0] += 0.0011332362664065192;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.10833333333333428) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.50833333333333997) ) ) {
            result[0] += 0.011415603889583271;
          } else {
            result[0] += 0.016945787751499346;
          }
        } else {
          result[0] += 0.006799091467425267;
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.39166666666667993) ) ) {
        result[0] += 0.02442148042842746;
      } else {
        result[0] += 0.016937911892714708;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2214.000000000000455) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1176.500000000000227) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)222.4999995300000251) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.49166666666668846) ) ) {
          result[0] += -0.002644772968079863;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)87.20833333333335702) ) ) {
            result[0] += 0.002021959198271515;
          } else {
            result[0] += -0.004056471964208092;
          }
        }
      } else {
        result[0] += -0.004363882391242452;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)83.03333333333334565) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.87500000000001421) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)2133.499999250000201) ) ) {
            result[0] += -0.0031119558215141297;
          } else {
            result[0] += 0.0024143548898148135;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)79.49166666666668846) ) ) {
            result[0] += 0.010267449962982053;
          } else {
            result[0] += 0.002821902844589204;
          }
        }
      } else {
        result[0] += -0.0035354437705863158;
      }
    }
  } else {
    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)96431.12501790835813) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)779.9999991500001215) ) ) {
        result[0] += 0.0011049054492087592;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.10833333333333428) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.50833333333333997) ) ) {
            result[0] += 0.010998181760369334;
          } else {
            result[0] += 0.01657743370927432;
          }
        } else {
          result[0] += 0.006427844298630953;
        }
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
        result[0] += 0.025851579974922868;
      } else {
        result[0] += 0.014138403350398655;
      }
    }
  }
  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)28702.04171786833467) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)32.32500000000000995) ) ) {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)268.5000003199999696) ) ) {
          result[0] += -0.003490443413643728;
        } else {
          result[0] += -0.00033514472733562196;
        }
      } else {
        result[0] += 0.0006803342829825301;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.55833333333335133) ) ) {
        result[0] += -0.0022076837032321186;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.658333333333333215) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)388.4999978100000249) ) ) {
            result[0] += 0.0031515150126069785;
          } else {
            result[0] += 0.012044549520437917;
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1499999999999985789) ) ) {
            result[0] += -0.0012902228013860087;
          } else {
            result[0] += 0.005708515996423861;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.95000000000000639) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
        result[0] += 0.02457549891051124;
      } else {
        result[0] += 0.015990008445162525;
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3880.999999300000582) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1617.500000999999884) ) ) {
          result[0] += 0.008301320766452059;
        } else {
          result[0] += 0.0005013644916471094;
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)6.708333333333333925) ) ) {
          result[0] += 0.01654455871067264;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3581.00000135000073) ) ) {
            result[0] += 0.006865420532657912;
          } else {
            result[0] += 0.013301955253670093;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2214.000000000000455) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1176.500000000000227) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)222.4999995300000251) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)70.14166666666667993) ) ) {
          result[0] += -0.004813029675057069;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)87.20833333333335702) ) ) {
            result[0] += -0.0009041515270694242;
          } else {
            result[0] += -0.003893635070814593;
          }
        }
      } else {
        result[0] += -0.0041691185599220205;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)83.03333333333334565) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.87500000000001421) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)2133.499999250000201) ) ) {
            result[0] += -0.0030130639523849824;
          } else {
            result[0] += 0.0023382325639697507;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.725000000000000089) ) ) {
            result[0] += 0.00915770350003408;
          } else {
            result[0] += 0.002048992573347112;
          }
        }
      } else {
        result[0] += -0.0034242390121234528;
      }
    }
  } else {
    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)96431.12501790835813) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)779.9999991500001215) ) ) {
        result[0] += 0.0010111675216328531;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.10833333333333428) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.50833333333333997) ) ) {
            result[0] += 0.010428056048889023;
          } else {
            result[0] += 0.015914296152837137;
          }
        } else {
          result[0] += 0.006125188368931413;
        }
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
        result[0] += 0.024724962078034877;
      } else {
        result[0] += 0.013409415341558912;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1549.500000000000227) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)393.0000000000000568) ) ) {
      result[0] += -0.004167377232274315;
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.39166666666669414) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)70.39166666666667993) ) ) {
          result[0] += -0.004580784196926591;
        } else {
          result[0] += -0.0021944259599003253;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)82.85833333333333428) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)2.041666666666666519) ) ) {
            result[0] += 0.00579987066633561;
          } else {
            result[0] += 0.0007213572901947534;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.55833333333334423) ) ) {
            result[0] += -0.00434723791417551;
          } else {
            result[0] += 0.0001501329082318328;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1872.000003700000207) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)82.30000000000002558) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)74.84166666666668277) ) ) {
          result[0] += -0.0010502221275653157;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.325000000000000622) ) ) {
            result[0] += 0.013865598905831576;
          } else {
            result[0] += 0.004963037448580421;
          }
        }
      } else {
        result[0] += -0.0029337070767130507;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.46666666666666856) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)76.10833333333334849) ) ) {
          result[0] += 0.015522207311458059;
        } else {
          result[0] += 0.02381679028272629;
        }
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)96431.12501790835813) ) ) {
          result[0] += 0.009223031092387361;
        } else {
          result[0] += 0.014957010161131622;
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2214.000000000000455) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1176.500000000000227) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)222.4999995300000251) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.49166666666668846) ) ) {
          result[0] += -0.002403846931761692;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)1.908333333333332993) ) ) {
            result[0] += 0.004780745394527913;
          } else {
            result[0] += -0.0017028965050676131;
          }
        }
      } else {
        result[0] += -0.003976856423592963;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)83.03333333333334565) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.87500000000001421) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)2133.499999250000201) ) ) {
            result[0] += -0.002903390946885338;
          } else {
            result[0] += 0.0022225775183715786;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.725000000000000089) ) ) {
            result[0] += 0.008771618457511067;
          } else {
            result[0] += 0.0019080933088711886;
          }
        }
      } else {
        result[0] += -0.003300528563841275;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.95000000000000639) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)4324.999998900000719) ) ) {
        result[0] += 0.016008003179145896;
      } else {
        result[0] += 0.024937876001000406;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.34166666666668277) ) ) {
        result[0] += 0;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3298.000004400000307) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.691666666666666874) ) ) {
            result[0] += 0.014709408640861513;
          } else {
            result[0] += 0.006515344576501664;
          }
        } else {
          result[0] += 0.013903423890923009;
        }
      }
    }
  }
  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)28702.04171786833467) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1549.500000000000227) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)393.0000000000000568) ) ) {
        result[0] += -0.003964144252421147;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.49166666666668846) ) ) {
          result[0] += -0.0024834709596774883;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.308333333333333126) ) ) {
            result[0] += 0.001860302031045544;
          } else {
            result[0] += -0.0023648156759579885;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)4.191666666666667318) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.55833333333335133) ) ) {
          result[0] += -0.002277945807935404;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)973.9999997500001427) ) ) {
            result[0] += 0.014633610173213211;
          } else {
            result[0] += 0.0031815683600657126;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)2133.499999250000201) ) ) {
          result[0] += -0.0028153772757818496;
        } else {
          result[0] += 0.003044516465937098;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.95000000000000639) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
        result[0] += 0.022681438432020303;
      } else {
        result[0] += 0.014461671376698897;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)779.9999991500001215) ) ) {
        result[0] += 0.0005890130488357196;
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.20833333333334281) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)3581.00000135000073) ) ) {
            result[0] += 0.0068222143781921755;
          } else {
            result[0] += 0.01224641893857292;
          }
        } else {
          result[0] += 0.017298996768891812;
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2214.000000000000455) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1176.500000000000227) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)222.4999995300000251) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)79.64166666666667993) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1.899999999999998801) ) ) {
            result[0] += -0.002578393853474579;
          } else {
            result[0] += 0.002152942443266511;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)1.908333333333332993) ) ) {
            result[0] += 0.004327527217566967;
          } else {
            result[0] += -0.0017651844589062127;
          }
        }
      } else {
        result[0] += -0.003788752002683768;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)83.03333333333334565) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)74.67500000000002558) ) ) {
          result[0] += -0.0009148269535557545;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)2.608333333333332948) ) ) {
            result[0] += 0.014495132569223643;
          } else {
            result[0] += 0.003602560004633334;
          }
        }
      } else {
        result[0] += -0.0031563539774806214;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.95000000000000639) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
        result[0] += 0.02295855788247926;
      } else {
        result[0] += 0.014009556950707186;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)779.9999991500001215) ) ) {
        result[0] += 0.0009116274167207026;
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)6802.500004100001206) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.824999999999999734) ) ) {
            result[0] += 0.013635036744177343;
          } else {
            result[0] += 0.006564239010847402;
          }
        } else {
          result[0] += 0.012869034522410595;
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2214.000000000000455) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1176.500000000000227) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)9.000000000000001776) ) ) {
        result[0] += -0.003831171285161756;
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.508333333333333304) ) ) {
            result[0] += -0.0015979672494861469;
          } else {
            result[0] += -0.003863371948584575;
          }
        } else {
          result[0] += 0.0011127827738204763;
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)83.03333333333334565) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.87500000000001421) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.04166666666666785) ) ) {
            result[0] += 0.004278370230691507;
          } else {
            result[0] += -0.0016037127241240038;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)79.49166666666668846) ) ) {
            result[0] += 0.008962244180886932;
          } else {
            result[0] += 0.0022234944160356043;
          }
        }
      } else {
        result[0] += -0.0030774451605975633;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.95000000000000639) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
        result[0] += 0.022384594050901277;
      } else {
        result[0] += 0.013659317960080348;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.34166666666668277) ) ) {
        result[0] += 0;
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)6802.500004100001206) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.691666666666666874) ) ) {
            result[0] += 0.013867206968367102;
          } else {
            result[0] += 0.005995792411188833;
          }
        } else {
          result[0] += 0.013441606233677557;
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1549.500000000000227) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)763.5000000000001137) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)296.9999993700000118) ) ) {
        result[0] += -0.001904045331090068;
      } else {
        result[0] += -0.0037985277418115418;
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.39166666666669414) ) ) {
        if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.2499999999999999167) ) ) {
          result[0] += -0.002852760836249217;
        } else {
          result[0] += -0.0002888544501763755;
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.791666666666666963) ) ) {
          result[0] += 0.0027221537863032054;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)2710.999999050000497) ) ) {
            result[0] += -0.0021550297746156803;
          } else {
            result[0] += 0.003143837052312764;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4391.999989450000612) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)82.30000000000002558) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)74.84166666666668277) ) ) {
          result[0] += -0.0009799419466539154;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.325000000000000622) ) ) {
            result[0] += 0.013371694748504803;
          } else {
            result[0] += 0.004459644537894756;
          }
        }
      } else {
        result[0] += -0.0026864631200748446;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)4556.500000000000909) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)105733.0749608641927) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)4002.500000000000455) ) ) {
            result[0] += 0.011983350542623823;
          } else {
            result[0] += 0.004873128807745301;
          }
        } else {
          result[0] += 0.016273365478743525;
        }
      } else {
        result[0] += 0.0217040811275894;
      }
    }
  }
  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)28702.04171786833467) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1549.500000000000227) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)763.5000000000001137) ) ) {
        result[0] += -0.0033126624119160265;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.49166666666668846) ) ) {
          result[0] += -0.0021928740669335187;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.791666666666666963) ) ) {
            result[0] += 0.0026541000086018037;
          } else {
            result[0] += -0.0014622465591248755;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)11055.19999164300134) ) ) {
        result[0] += 0.012571814343333246;
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)6.325000000000000178) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)2.808333333333333126) ) ) {
            result[0] += -0.003034572220192506;
          } else {
            result[0] += 0.003967798343219329;
          }
        } else {
          result[0] += -0.004474833983927965;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.95000000000000639) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)4324.999998900000719) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)4524.49999845000093) ) ) {
          result[0] += 0.019418511822819704;
        } else {
          result[0] += 0.011332506863400342;
        }
      } else {
        result[0] += 0.022462771929800514;
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3880.999999300000582) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1617.500000999999884) ) ) {
          result[0] += 0.007115217219267427;
        } else {
          result[0] += 0;
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)6.708333333333333925) ) ) {
          result[0] += 0.014106303504086102;
        } else {
          result[0] += 0.00798095016590148;
        }
      }
    }
  }
  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)28702.04171786833467) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)101.4999993609998938) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)7.999999866000000459) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)87.20833333333335702) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.49166666666668846) ) ) {
            result[0] += -0.0019657434097430466;
          } else {
            result[0] += 0.0020832271724665428;
          }
        } else {
          result[0] += -0.004478728835306624;
        }
      } else {
        result[0] += -0.0035431658940821386;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.2750000000000199) ) ) {
        result[0] += -0.0016653891902312574;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.725000000000000089) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)81.5250000000000199) ) ) {
            result[0] += 0.00936163337612556;
          } else {
            result[0] += 0.0021682334526187995;
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1499999999999985789) ) ) {
            result[0] += -0.0011043901103309905;
          } else {
            result[0] += 0.005214219900468986;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)1077.999999250000201) ) ) {
      result[0] += 0.001026683420142425;
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.67500000000001137) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)96431.12501790835813) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)2724.999998000000687) ) ) {
            result[0] += 0.015123899946920575;
          } else {
            result[0] += 0.008499552725756076;
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.199999999999995709) ) ) {
            result[0] += 0.021984621303922994;
          } else {
            result[0] += 0.011263446247107105;
          }
        }
      } else {
        result[0] += 0.005623455258566097;
      }
    }
  }
}

