#include "./out.0.1.types.h"

// function 6
int foo6(unsigned x0) {
  unsigned i0 = 0;
  unsigned i1 = 0;
  unsigned i2 = 0;
  unsigned i3 = 0;
  unsigned i4 = 0;
  unsigned i5 = 0;
  unsigned i6 = 0;
  unsigned i7 = 0;
  unsigned i8 = 0;
  unsigned i9 = 0;
  unsigned i10 = 0;
  unsigned i11 = 0;
  T15 v0 = 1388065185149071272ULL;
  T27 v1 = {2ULL,49ULL,76ULL,16ULL,86ULL,10ULL};
  T25 v2 = {84ULL,48ULL,41ULL,45ULL,94ULL,50ULL,78ULL,36ULL,9ULL,28ULL,37ULL,73ULL};
  T34 v3 = {27ULL,17ULL,4ULL,27ULL,60ULL,1ULL,5ULL,45ULL,6ULL};
  T18 v4 = 17290468010907669492ULL;
  T35 v5 = {9587ULL,1994ULL,7800ULL};
  T20 v6 = 2433449167857352013ULL;
  T27 v7 = {1ULL,98ULL,22ULL,68ULL,66ULL,54ULL};
  T34 v8 = {85ULL,85ULL,85ULL,51ULL,68ULL,64ULL,35ULL,36ULL,65ULL};
  T11 v9 = 14642709854059866860ULL;
  T30 v10 = {0ULL,39ULL,58ULL,21ULL,11ULL,25ULL,1ULL,12ULL,33ULL,36ULL};
  T23 v11 = 168883335709926437ULL;
  T15 v12 = 17338157631605718359ULL;
  T23 v13 = 4762682752462533499ULL;
  T23 v14 = 932278201023774252ULL;
  for(i4 = 1; i4 < 12; i4 += 1) {
    for(i7 = 2; i7 < 9; i7 += 1) {
      for(i8 = 2; i8 < 10; i8 += 1) {
        g0 =  ( ( (g7 * g0)  -  ( (g5 | v13)  & v8[i7]) )  + v2[i4]) ;
        v11 =  ( ( (g0 *  ( (v2[i4] | v8[i7])  & v13) )  - g7)  + v10[i8]) ;
      }
    }
  }
  for(i3 = 0; i3 < 6; i3 += 3) {
    for(i7 = 2; i7 < 9; i7 += 1) {
      for(i8 = 2; i8 < 10; i8 += 1) {
        g7 =  ( ( (g2 *  (v9 &  ( ( (v4 + g4)  ^  (v10[i8] -  (g2 * v9) ) )  | v4) ) )  - g4)  + v10[i8]) ;
        v8[i7] =  ( (v9 -  (g2 *  ( (v4 | v10[i8])  & g4) ) )  + v9) ;
        v1[i3] =  ( ( (v10[i8] *  (v9 & g4) )  - g2)  +  (v4 | v10[i8]) ) ;
      }
    }
  }
  for(i3 = 0; i3 < 6; i3 += 3) {
    for(i1 = 2; i1 < 12; i1 += 3) {
      for(i7 = 2; i7 < 9; i7 += 1) {
        v9 =  ( (g8[i1] -  ( ( (g4 | i0)  & i6)  * v11) )  +  (i5 ^ i5) ) ;
        v12 =  ( ( ( (i7 & i5)  * g8[i1])  -  ( (g4 ^ i0)  | v11) )  + i5) ;
        g6 =  ( ( (g8[i1] *  ( ( (g4 ^ i0)  | i6)  & i5) )  - i5)  +  (v11 +  (i7 - g8[i1]) ) ) ;
        v1[i3] =  ( ( (g4 * i5)  -  (i6 & g8[i1]) )  +  ( (v11 ^  (i0 + i5) )  | i7) ) ;
        v8[i7] =  (i5 +  ( ( (v11 & i7)  * i6)  -  ( ( (i0 +  ( (g8[i1] * g4)  - i5) )  ^ i5)  | v11) ) ) ;
      }
    }
  }
  for(i10 = 0; i10 < 23; i10 += 2) {
    v4 =  (v4 +  ( ( (g1 & v0)  *  ( (v11 ^ v9)  |  (i1 + v4) ) )  - g1) ) ;
    v9 =  ( (g1 -  ( ( (v0 | i1)  & v11)  *  (v9 ^ v4) ) )  +  (g1 + v0) ) ;
    i3 = 5;
    i6 = 5;
    i8 = 8;
    // BACKEDGE CALL from foo6 to foo17
    if (ccall_check_6_17-- > 0)
      foo17( ( (g2 -  (g5 *  ( ( ( (i6 + v10[i8])  ^ g2)  | v7[i6])  & i1) ) )  + v1[i3]) );
    i4 = 4;
    i0 = 4;
    i8 = 7;
    i3 = 2;
    i2 = 0;
    if( ( ( (v11 * i2)  -  ( ( ( (v0 + v10[i8])  ^ v0)  | v2[i4])  & g3[i0]) )  + v11) ) {
      for(i5 = 0; i5 < 9; i5 += 2) {
        for(i6 = 2; i6 < 6; i6 += 3) {
          g5 =  (v7[i6] +  (g2 -  ( (g10 & g10)  *  ( (v13 ^ g0)  | v0) ) ) ) ;
          v11 =  ( (g0 -  ( (g10 & v13)  *  (v7[i6] | g2) ) )  + v0) ;
          v3[i5] =  ( ( (v0 * g0)  -  (g10 & g10) )  +  (g2 |  (v13 ^ v7[i6]) ) ) ;
        }
      }
    }
    else {
      for(i4 = 1; i4 < 12; i4 += 1) {
        for(i0 = 0; i0 < 10; i0 += 3) {
          for(i5 = 0; i5 < 9; i5 += 2) {
            for(i8 = 2; i8 < 10; i8 += 1) {
              v3[i5] =  ( ( (v10[i8] * g3[i0])  - v4)  +  ( ( ( (g10 +  ( (i5 * i0)  -  (v2[i4] & v10[i8]) ) )  ^ g3[i0])  | v4)  & g10) ) ;
              g1 =  ( (g3[i0] -  ( ( ( ( ( (i5 - v10[i8])  + g10)  ^ v2[i4])  | v4)  &  (i0 * g3[i0]) )  *  (i5 & v10[i8]) ) )  + g10) ;
            }
          }
        }
      }
    }
    i3 = 1;
    if( ( ( ( (v1[i3] &  ( (i5 ^ v9)  |  (v12 + g4) ) )  * v11)  - g4)  + v1[i3]) ) {
      continue;
    }
    for(i4 = 1; i4 < 12; i4 += 1) {
      for(i1 = 2; i1 < 12; i1 += 3) {
        for(i2 = 0; i2 < 15; i2 += 2) {
          g9[i2] =  ( (v13 -  (g6 * v12) )  +  (v6 &  ( (v9 ^  (i7 + g6) )  | g8[i1]) ) ) ;
          g9[i2] =  ( (v12 -  ( ( (v9 | g6)  &  (v6 ^  (g8[i1] + g6) ) )  *  (i7 - v13) ) )  + v12) ;
          g10 =  (v6 +  ( ( ( (g6 |  ( (g6 +  (v13 - g8[i1]) )  ^ v9) )  &  ( (i7 & v12)  * v6) )  * g6)  - g6) ) ;
          v2[i4] =  ( (g6 - v9)  +  ( ( (g6 | v12)  & v13)  *  (i7 ^ g8[i1]) ) ) ;
          g1 =  ( ( (v6 *  ( ( (v12 ^ v13)  | g8[i1])  & v9) )  -  ( (g6 - i7)  + g6) )  +  (v6 * v12) ) ;
        }
      }
    }
    for(i5 = 0; i5 < 9; i5 += 2) {
      v5.s1 =  ( ( (i3 * i4)  -  (v12 &  (v3[i5] |  (i6 ^ i3) ) ) )  + i4) ;
      v4 =  (i4 +  ( (i6 *  ( (i3 |  (v12 ^ v3[i5]) )  &  ( (i4 - i6)  +  (i3 * v12) ) ) )  - v3[i5]) ) ;
      v9 =  ( (i6 - i3)  +  ( ( (v12 | v3[i5])  & i4)  * i6) ) ;
      v12 =  ( (v3[i5] -  ( (i6 & i4)  *  (v12 |  ( (i3 + v3[i5])  ^ i6) ) ) )  +  (i4 -  (v12 * i3) ) ) ;
    }
    for(i11 = 0; i11 < 32; i11 += 3) {
      for(i3 = 0; i3 < 6; i3 += 3) {
        for(i4 = 1; i4 < 12; i4 += 1) {
          for(i0 = 0; i0 < 10; i0 += 3) {
            for(i5 = 0; i5 < 9; i5 += 2) {
              for(i6 = 2; i6 < 6; i6 += 3) {
                for(i7 = 2; i7 < 9; i7 += 1) {
                  v3[i5] =  (v5.s0 +  ( ( (v2[i4] & v0)  *  (g6 | v4) )  - i0) ) ;
                  v4 =  ( (i5 -  ( ( (g6 | i0)  &  ( (v0 + v8[i7])  ^ v5.s0) )  * v2[i4]) )  +  (g3[i0] -  ( (v4 & i5)  * g6) ) ) ;
                  v7[i6] =  (i0 +  (v0 -  (v5.s0 *  ( (v4 | g6)  &  (v2[i4] ^  (v8[i7] +  (g3[i0] - i5) ) ) ) ) ) ) ;
                  v1[i3] =  (g3[i0] +  ( (i5 *  (v5.s0 &  ( (v2[i4] ^ i0)  |  (v4 +  (g6 - v8[i7]) ) ) ) )  - v0) ) ;
                }
              }
            }
          }
        }
      }
      for(i3 = 0; i3 < 6; i3 += 3) {
        for(i1 = 2; i1 < 12; i1 += 3) {
          for(i7 = 2; i7 < 9; i7 += 1) {
            for(i2 = 0; i2 < 15; i2 += 2) {
              g9[i2] =  ( (g8[i1] -  ( (g6 &  ( ( (g7 + g9[i2])  ^ v11)  | v8[i7]) )  * g5) )  +  (i3 -  ( (g8[i1] & g6)  * g7) ) ) ;
              v8[i7] =  ( ( (i3 *  ( ( (g9[i2] ^ g6)  |  (g7 + g5) )  & v8[i7]) )  - v11)  +  (g8[i1] - i3) ) ;
              g5 =  (v11 +  (g7 -  ( (g6 &  (i3 |  (v8[i7] ^ g8[i1]) ) )  * g9[i2]) ) ) ;
              v1[i3] =  ( (g5 - g7)  +  ( (i3 &  (g9[i2] | g8[i1]) )  *  ( ( (g6 - v8[i7])  + v11)  ^  (g5 * g7) ) ) ) ;
              v9 =  (g5 +  ( ( ( (i3 |  (g9[i2] ^  (v8[i7] + g8[i1]) ) )  &  (g7 - g6) )  *  ( (v11 & g5)  * i3) )  - g9[i2]) ) ;
            }
          }
        }
      }
    }
    v13 =  (v13 +  ( (v13 *  ( (g2 |  (i6 ^ v6) )  & i4) )  - v13) ) ;
    v6 =  ( ( (i4 * g2)  -  ( ( (v6 ^ i6)  | v13)  & v13) )  +  (i4 +  (g2 - v6) ) ) ;
    g10 =  ( (v6 - v13)  +  ( (v13 & i6)  *  (i4 | g2) ) ) ;
    g6 =  (v13 +  ( ( ( (g2 | v13)  &  (i6 ^  (i4 + v6) ) )  * v13)  - g2) ) ;
  }
  for(i0 = 0; i0 < 10; i0 += 3) {
    for(i1 = 2; i1 < 12; i1 += 3) {
      for(i2 = 0; i2 < 15; i2 += 2) {
        g2 =  ( (v5.s2 -  (g3[i0] *  (g8[i1] & i3) ) )  +  ( (v6 ^  (v9 + g1) )  | g9[i2]) ) ;
        g5 =  ( ( ( (v6 & v5.s2)  * v5.s0)  - i3)  +  (g1 | g9[i2]) ) ;
      }
    }
  }
  for(i9 = 2; i9 < 70; i9 += 1) {
    for(i3 = 0; i3 < 6; i3 += 3) {
      for(i4 = 1; i4 < 12; i4 += 1) {
        for(i0 = 0; i0 < 10; i0 += 3) {
          for(i5 = 0; i5 < 9; i5 += 2) {
            v2[i4] =  ( (i3 -  (g10 *  (g10 & g6) ) )  +  ( (v5.s0 ^  ( (v5.s2 - v3[i5])  + v1[i3]) )  |  (i3 * g10) ) ) ;
            g3[i0] =  ( (v5.s2 -  (g10 *  ( (g6 | v1[i3])  & i3) ) )  +  (v5.s0 ^ v3[i5]) ) ;
          }
        }
      }
    }
    for(i4 = 1; i4 < 12; i4 += 1) {
      for(i7 = 2; i7 < 9; i7 += 1) {
        g0 =  ( ( ( (g10 &  (g7 |  ( (g10 + v8[i7])  ^ i3) ) )  * i0)  -  (v2[i4] -  (g10 * g7) ) )  + g10) ;
        g4 =  ( (v2[i4] -  (g7 *  ( ( ( (i3 + i0)  ^  ( (v8[i7] *  (g10 & g10) )  - v2[i4]) )  | g7)  & i3) ) )  + i0) ;
        g10 =  (g10 +  ( ( (i3 & v2[i4])  * g10)  -  (i0 |  ( ( (v8[i7] -  (g7 *  (g10 & i3) ) )  + v2[i4])  ^ g10) ) ) ) ;
        v6 =  ( ( ( (g10 &  (g7 |  (g10 ^ v2[i4]) ) )  *  (i0 +  (v8[i7] - i3) ) )  - g10)  +  (g7 * g10) ) ;
        g7 =  ( (g10 -  ( ( (g10 | i0)  &  (i3 ^  (v2[i4] + g7) ) )  *  (v8[i7] -  (g10 *  (g10 & i0) ) ) ) )  + i3) ;
      }
    }
  }
  for(i5 = 0; i5 < 9; i5 += 2) {
    for(i6 = 2; i6 < 6; i6 += 3) {
      g4 =  (v5.s0 +  ( (i2 *  (i7 &  (i0 | v3[i5]) ) )  - v5.s0) ) ;
      v7[i6] =  ( ( (i2 * v3[i5])  - i0)  +  ( (v5.s0 | i7)  & i2) ) ;
      v12 =  ( (i0 -  (v3[i5] * i2) )  +  ( (v5.s0 | i7)  & i0) ) ;
    }
  }
  i3 = 2;
  i1 = 11;
  i7 = 4;
  return  ( (i7 -  (v11 *  (i5 &  ( (g8[i1] ^  (i0 + g4) )  | i6) ) ) )  + i5) ;
}

// function 12
int foo12(unsigned x0) {
  unsigned i0 = 0;
  unsigned i1 = 0;
  unsigned i2 = 0;
  unsigned i3 = 0;
  unsigned i4 = 0;
  unsigned i5 = 0;
  unsigned i6 = 0;
  unsigned i7 = 0;
  unsigned i8 = 0;
  T2 v0 = 2576248553145653111ULL;
  T4 v1 = 11092931803649242993ULL;
  T31 v2 = {51ULL,14ULL,54ULL,21ULL,72ULL,60ULL,20ULL};
  T10 v3 = 7358628210804874136ULL;
  T5 v4 = 1834482257974795516ULL;
  T34 v5 = {100ULL,95ULL,5ULL,56ULL,57ULL,5ULL,72ULL,2ULL,64ULL};
  T0 v6 = 16881445832883705102ULL;
  T14 v7 = 15550954899554255404ULL;
  T26 v8 = {9755ULL,1132ULL,8898ULL,348ULL,8301ULL};
  T3 v9 = 5158272484576755903ULL;
  T6 v10 = 8330517745986600652ULL;
  T12 v11 = 8520603476924544476ULL;
  T7 v12 = 9580489587415916523ULL;
  for(i0 = 0; i0 < 10; i0 += 3) {
    for(i4 = 2; i4 < 9; i4 += 2) {
      v5[i4] =  ( ( ( (v8.s3 & v8.s0)  * i2)  -  (g10 |  (v8.s3 ^  (v8.s1 + v5[i4]) ) ) )  + v8.s3) ;
      v4 =  ( ( (v8.s1 *  (v8.s0 &  (i2 | v8.s3) ) )  - g10)  + v5[i4]) ;
      g0 =  ( (v8.s0 - i2)  +  (v5[i4] *  ( ( (v8.s1 ^  (v8.s3 + v8.s3) )  | g10)  &  ( (v8.s0 * i2)  - v5[i4]) ) ) ) ;
      g3[i0] =  (v8.s1 +  (v8.s3 -  ( (i2 & v8.s3)  *  (v5[i4] |  (g10 ^ v8.s0) ) ) ) ) ;
      v11 =  (v5[i4] +  ( ( ( (v8.s3 | v8.s3)  & i2)  * v8.s0)  -  (v8.s1 ^ g10) ) ) ;
    }
  }
  for(i0 = 0; i0 < 10; i0 += 3) {
    g2 =  ( ( ( ( (g5 | v10)  & g2)  * g7)  -  ( (v0 + g5)  ^ v10) )  + g2) ;
    g1 =  ( ( ( ( ( (g2 ^ g7)  | v10)  &  (g5 +  (v0 - g2) ) )  * g7)  - v10)  + g5) ;
    g10 =  (g2 +  ( ( ( (v0 | v10)  & g7)  *  ( (g5 + g2)  ^ v0) )  - v10) ) ;
    v6 =  ( ( (g7 *  ( (g2 | g5)  & v0) )  -  (v10 ^  (g7 +  (g2 - g5) ) ) )  + v0) ;
    g3[i0] =  (v0 +  ( (g2 *  (v10 &  (g5 | g7) ) )  - v0) ) ;
  }
  for(i5 = 2; i5 < 60; i5 += 3) {
    for(i4 = 2; i4 < 9; i4 += 2) {
      for(i2 = 0; i2 < 15; i2 += 2) {
        g5 =  (g5 +  (g0 -  ( ( (v5[i4] | v0)  & v1)  * i2) ) ) ;
        g0 =  ( (v8.s4 - v1)  +  ( (i2 &  (v10 | v0) )  *  (v1 ^ v5[i4]) ) ) ;
        g9[i2] =  ( ( ( ( ( (v8.s4 ^ v1)  | i2)  & g0)  *  (v1 + v8.s0) )  -  (v0 - v5[i4]) )  +  (g5 * v10) ) ;
        g6 =  ( ( ( (v5[i4] & v8.s4)  *  (v1 |  (v1 ^ i2) ) )  -  (g0 + v8.s0) )  +  (v10 - v0) ) ;
      }
    }
    for(i0 = 0; i0 < 10; i0 += 3) {
      g7 =  (v11 +  (g4 -  ( ( ( (i0 ^ g10)  |  (g2 + g0) )  &  ( ( (v3 & g3[i0])  * v11)  - g4) )  * i0) ) ) ;
      v11 =  ( (g3[i0] - g4)  +  ( (v11 &  (g2 | v3) )  * g0) ) ;
      v0 =  ( (v3 -  ( (g0 &  (i0 |  (g2 ^  (g4 +  (g10 - g3[i0]) ) ) ) )  * v11) )  + v3) ;
      v9 =  (g10 +  (v11 -  ( (g2 &  (v3 | g0) )  *  (g4 ^  (i0 + g3[i0]) ) ) ) ) ;
    }
    for(i6 = 2; i6 < 30; i6 += 2) {
      g0 =  (g7 +  ( (v1 *  (g6 & v6) )  -  ( (v8.s0 ^ v8.s1)  |  (g6 + v9) ) ) ) ;
      g2 =  ( (g6 -  (g7 *  ( ( ( ( (v9 - v6)  + g6)  ^ v1)  | v8.s0)  & v8.s1) ) )  + g6) ;
      g0 =  ( ( ( (g6 & v1)  * g7)  -  (v8.s1 | v9) )  + v6) ;
      for(i3 = 1; i3 < 7; i3 += 2) {
        v10 =  ( (v8.s0 -  (v2[i3] *  ( (i0 | v1)  &  ( (v4 +  (v8.s2 - v8.s0) )  ^ v2[i3]) ) ) )  +  (i0 * v1) ) ;
        g2 =  ( (v8.s2 - v4)  +  ( ( (v2[i3] | v8.s0)  & i0)  * v1) ) ;
        g1 =  ( (i0 -  (v8.s2 * v8.s0) )  +  (v1 &  ( (v2[i3] ^ v4)  |  (i0 + v8.s2) ) ) ) ;
        g10 =  ( (v2[i3] -  (v4 *  (v1 &  (i0 | v8.s0) ) ) )  +  (v8.s2 ^ v2[i3]) ) ;
      }
      for(i0 = 0; i0 < 10; i0 += 3) {
        for(i4 = 2; i4 < 9; i4 += 2) {
          v8.s0 =  ( (i2 - g6)  +  ( ( (v5[i4] | g1)  & v3)  * v8.s0) ) ;
          v8.s3 =  (v7 +  (v3 -  ( ( ( ( (i2 + g3[i0])  ^ g6)  | g0)  & v8.s0)  * g1) ) ) ;
          v8.s4 =  ( ( ( ( (g0 | v5[i4])  &  (g3[i0] ^  (g1 +  (i2 - v7) ) ) )  * v3)  - g6)  +  ( (v8.s0 & g0)  * v5[i4]) ) ;
          v11 =  ( ( ( (g1 & g0)  * v7)  -  ( (v5[i4] ^  (v3 + i2) )  | g3[i0]) )  + g6) ;
          g6 =  (g0 +  ( ( ( (v5[i4] |  (v3 ^ v7) )  &  ( ( (g6 * g1)  - i2)  + v8.s0) )  * g3[i0])  - g0) ) ;
        }
      }
      for(i7 = 0; i7 < 42; i7 += 2) {
        for(i3 = 1; i3 < 7; i3 += 2) {
          for(i0 = 0; i0 < 10; i0 += 3) {
            for(i4 = 2; i4 < 9; i4 += 2) {
              g3[i0] =  ( (v9 -  (v0 *  (v3 & i2) ) )  +  (v4 | v5[i4]) ) ;
              g2 =  ( ( ( (v4 & g2)  * v2[i3])  - g0)  +  ( (i2 ^  (v3 + v9) )  |  (v0 - v5[i4]) ) ) ;
              v3 =  (g0 +  ( ( (v2[i3] &  (g2 | v3) )  * v9)  -  ( (i2 +  (v0 - v4) )  ^  ( (v5[i4] & g0)  * v2[i3]) ) ) ) ;
            }
          }
        }
        for(i3 = 1; i3 < 7; i3 += 2) {
          for(i0 = 0; i0 < 10; i0 += 3) {
            v4 =  ( ( ( ( (g0 | g6)  & g1)  * g4)  -  ( (g2 + g3[i0])  ^ g0) )  + g6) ;
            v2[i3] =  ( ( ( (g3[i0] &  (g6 | g1) )  * g0)  - g2)  + g4) ;
          }
        }
      }
      for(i0 = 0; i0 < 10; i0 += 3) {
        g10 =  ( ( ( ( (g3[i0] | v11)  & g2)  * v4)  - g6)  +  (g3[i0] ^ v11) ) ;
        v9 =  (v4 +  ( (g3[i0] *  (g6 & v11) )  -  (g2 | v4) ) ) ;
        v3 =  ( (v11 -  (v4 * g3[i0]) )  +  (g2 &  (g6 |  (v11 ^  ( (v4 - g3[i0])  +  (g2 * g6) ) ) ) ) ) ;
        g5 =  (v11 +  (g6 -  ( ( (g3[i0] | v4)  &  (g2 ^  (v11 +  (g6 - g3[i0]) ) ) )  *  (v4 *  (g2 & v11) ) ) ) ) ;
      }
    }
    for(i1 = 2; i1 < 12; i1 += 3) {
      v4 =  ( ( ( ( (v4 |  ( (g4 + g8[i1])  ^  (g5 - i3) ) )  &  (v4 * g4) )  * g8[i1])  - g5)  +  (i3 & v4) ) ;
      g6 =  ( ( (v4 *  ( (i3 |  (g4 ^ g5) )  & g8[i1]) )  - v4)  + i3) ;
      v9 =  ( (g8[i1] -  (v4 *  ( (g5 |  ( (i3 + g4)  ^ g8[i1]) )  & v4) ) )  + g5) ;
    }
    i0 = 8;
    i4 = 4;
    i1 = 4;
    // BACKEDGE CALL from foo12 to foo5
    if (ccall_check_12_5-- > 0)
      foo5( ( ( ( ( (g3[i0] |  (g10 ^  (v5[i4] + i3) ) )  &  (g4 - v10) )  * g3[i0])  - g10)  + v5[i4]) );
    for(i8 = 1; i8 < 89; i8 += 3) {
      for(i2 = 0; i2 < 15; i2 += 2) {
        g0 =  ( (g9[i2] - g4)  +  ( ( ( (i3 ^  (i2 + g4) )  | v3)  & g9[i2])  * g4) ) ;
        g5 =  ( (i3 -  ( (v3 & g4)  *  ( (i2 ^  (g4 + g9[i2]) )  | i3) ) )  +  ( (v3 * g4)  - i2) ) ;
      }
      for(i0 = 0; i0 < 10; i0 += 3) {
        v9 =  ( ( (v10 * v7)  - v11)  +  (g5 &  (g3[i0] | v7) ) ) ;
        v9 =  ( ( (v11 *  ( ( (v7 ^ g5)  | g10)  & g3[i0]) )  -  ( (v7 - v10)  + v11) )  + v7) ;
        v1 =  ( (v11 - v10)  +  ( ( (v7 | v7)  & g5)  * g10) ) ;
        v4 =  (v7 +  ( ( (g10 & g5)  *  ( (g3[i0] ^ v10)  | v7) )  - v11) ) ;
      }
    }
    v7 =  (g2 +  ( ( (g0 & v1)  * i0)  -  (v8.s4 |  (v4 ^  (v8.s3 +  (g2 - g0) ) ) ) ) ) ;
    v6 =  ( (v4 - v8.s4)  +  (i0 *  ( (g0 | v8.s3)  & v1) ) ) ;
    i2 = 10;
    // BACKEDGE CALL from foo12 to foo1
    if (ccall_check_12_1-- > 0)
      foo1( (g9[i2] +  ( ( ( (v9 | v11)  &  ( (v0 +  ( (g0 *  (v7 & g9[i2]) )  - v9) )  ^ v11) )  * v0)  - g0) ) );
  }
  for(i3 = 1; i3 < 7; i3 += 2) {
    for(i0 = 0; i0 < 10; i0 += 3) {
      for(i1 = 2; i1 < 12; i1 += 3) {
        g8[i1] =  ( ( (v1 *  ( ( (g4 ^  (i0 + g1) )  | i1)  & v2[i3]) )  - i1)  + v9) ;
        g3[i0] =  ( ( ( ( (i1 | g1)  &  ( ( (v9 - g8[i1])  + v1)  ^ i1) )  *  ( (v2[i3] & g4)  * i0) )  - i1)  + g1) ;
        v9 =  ( (g8[i1] -  ( ( (v2[i3] | i1)  &  ( (v1 + g1)  ^ i0) )  *  (v9 - g4) ) )  + i1) ;
      }
    }
  }
  i0 = 3;
  return  (g7 +  ( (v0 *  (v10 & g5) )  -  (g2 |  (g7 ^  ( (v0 -  (v10 * g5) )  + g2) ) ) ) ) ;
}

// function 19
int foo19(unsigned x0) {
  unsigned i0 = 0;
  unsigned i1 = 0;
  unsigned i2 = 0;
  unsigned i3 = 0;
  unsigned i4 = 0;
  unsigned i5 = 0;
  unsigned i6 = 0;
  unsigned i7 = 0;
  T20 v0 = 17230356839167092066ULL;
  T27 v1 = {92ULL,30ULL,14ULL,62ULL,82ULL,16ULL};
  T9 v2 = 12198435916146429273ULL;
  T26 v3 = {298ULL,4360ULL,5486ULL,8016ULL,454ULL};
  T5 v4 = 7367284061974012503ULL;
  T10 v5 = 16841422735588259350ULL;
  T30 v6 = {82ULL,31ULL,13ULL,10ULL,49ULL,7ULL,30ULL,51ULL,20ULL,0ULL};
  T18 v7 = 5543643508966496642ULL;
  T35 v8 = {1580ULL,1910ULL,4063ULL};
  T26 v9 = {2468ULL,8475ULL,2671ULL,2714ULL,4259ULL};
  T10 v10 = 17529464943040492138ULL;
  T26 v11 = {2961ULL,2617ULL,4781ULL,2350ULL,7586ULL};
  T13 v12 = 18415005296640048138ULL;
  T6 v13 = 16658969321208761695ULL;
  for(i0 = 0; i0 < 10; i0 += 3) {
    for(i2 = 0; i2 < 15; i2 += 2) {
      g1 =  ( (g3[i0] - g1)  +  ( (v12 &  ( ( (g0 + g5)  ^ v0)  | v8.s1) )  * v8.s2) ) ;
      g9[i2] =  ( (v8.s2 -  (v0 * v8.s0) )  +  (g5 &  (g2 | g1) ) ) ;
      v10 =  (v8.s1 +  ( (g2 *  (g0 &  (v0 |  (v12 ^  ( ( (g5 * g1)  - v8.s0)  +  (g3[i0] & v8.s2) ) ) ) ) )  - v8.s1) ) ;
      g5 =  (g5 +  ( ( (v8.s2 &  (g0 | g1) )  *  (v8.s0 ^  (v8.s1 + g2) ) )  - v0) ) ;
    }
  }
  for(i2 = 0; i2 < 15; i2 += 2) {
    v12 =  ( ( (g1 *  ( (g7 | v2)  & v7) )  - g9[i2])  +  (g1 ^ g7) ) ;
    g10 =  ( ( ( (v2 &  (g7 |  ( (v7 + g9[i2])  ^ g1) ) )  * v2)  - g7)  + v7) ;
    g2 =  ( (v7 -  (v2 * g1) )  +  (g9[i2] &  (g7 | v7) ) ) ;
  }
  for(i5 = 1; i5 < 35; i5 += 1) {
    for(i0 = 0; i0 < 10; i0 += 3) {
      for(i4 = 2; i4 < 10; i4 += 2) {
        g0 =  ( ( (v2 *  ( (g5 |  (g5 ^ v3.s0) )  & v6[i4]) )  -  ( (v5 - g3[i0])  + v3.s4) )  + g5) ;
        g10 =  ( (v3.s4 - g3[i0])  +  ( ( ( (g5 ^ v3.s0)  | v6[i4])  &  (g5 + g5) )  * v2) ) ;
        v5 =  (g5 +  ( ( (v2 & v6[i4])  *  (g5 | v5) )  - v3.s4) ) ;
        g3[i0] =  (g5 +  ( (g5 *  ( ( ( (v5 + v3.s4)  ^ v3.s0)  |  (g5 - g3[i0]) )  & v6[i4]) )  - v2) ) ;
      }
    }
    for(i3 = 1; i3 < 6; i3 += 3) {
      for(i4 = 2; i4 < 10; i4 += 2) {
        v8.s0 =  (v6[i4] +  ( ( (i1 &  (v2 |  (g7 ^  ( (i0 - v1[i3])  + v6[i4]) ) ) )  *  (i1 * v2) )  - g7) ) ;
        v8.s1 =  ( (v1[i3] -  (v2 *  (i1 &  (g7 |  (v6[i4] ^  ( (i0 -  (v1[i3] * v2) )  + i1) ) ) ) ) )  +  (g7 & v6[i4]) ) ;
        v8.s2 =  ( ( ( ( (g7 | v6[i4])  & i1)  *  ( (v1[i3] +  (i0 - v2) )  ^ g7) )  -  (v6[i4] * i1) )  + v1[i3]) ;
        v12 =  ( ( (i1 * i0)  -  (v1[i3] &  (v2 | v6[i4]) ) )  + g7) ;
        v7 =  ( ( ( ( (i0 | g7)  & v6[i4])  * i1)  -  (v1[i3] ^  ( (v2 - i0)  + g7) ) )  +  (v6[i4] *  (i1 & v1[i3]) ) ) ;
        v7 =  ( (v1[i3] - i0)  +  ( ( ( (v6[i4] ^  (v2 + i1) )  |  (g7 - v1[i3]) )  &  (i0 * v6[i4]) )  * v2) ) ;
      }
    }
    for(i6 = 1; i6 < 81; i6 += 3) {
      for(i4 = 2; i4 < 10; i4 += 2) {
        for(i1 = 2; i1 < 12; i1 += 3) {
          for(i2 = 0; i2 < 15; i2 += 2) {
            v12 =  ( (g2 -  ( (g5 &  (v6[i4] | g8[i1]) )  * v12) )  + g9[i2]) ;
            g4 =  ( (g8[i1] -  (v8.s2 *  ( (g7 |  (g5 ^  (g9[i2] + v12) ) )  & g2) ) )  + v6[i4]) ;
          }
        }
      }
      v0 =  (v8.s2 +  ( ( ( ( (v3.s1 ^ v2)  | v8.s0)  & i1)  *  ( (g2 - v8.s2)  + v3.s1) )  -  (v2 * v8.s0) ) ) ;
      g5 =  ( (i1 -  ( (v8.s2 & g2)  *  ( ( (v3.s1 +  ( (v2 * v8.s0)  - i1) )  ^ v8.s2)  | g2) ) )  + v3.s1) ;
      g7 =  ( ( (g2 * v3.s1)  - i1)  +  (v8.s0 &  (v8.s2 |  ( (v2 + g2)  ^  (v3.s1 -  ( (i1 & v8.s0)  * v8.s2) ) ) ) ) ) ;
    }
    for(i0 = 0; i0 < 10; i0 += 3) {
      for(i4 = 2; i4 < 10; i4 += 2) {
        v9.s0 =  ( (v5 -  ( (i1 &  (v11.s3 | v11.s0) )  *  (g5 ^  (v11.s2 + i3) ) ) )  +  (g6 -  (g3[i0] *  (v6[i4] & v11.s4) ) ) ) ;
        v9.s1 =  (v6[i4] +  ( ( (v11.s1 & v11.s2)  *  (g3[i0] | v11.s4) )  - v5) ) ;
        v9.s3 =  (v11.s2 +  ( (v11.s3 *  (v5 &  (i1 | v11.s4) ) )  - g5) ) ;
        v8.s1 =  ( ( ( ( ( (v5 ^  ( (g5 - i3)  +  (v11.s0 * v11.s2) ) )  | g6)  & v11.s1)  * v11.s3)  - g3[i0])  + v6[i4]) ;
        v9.s0 =  (v11.s2 +  ( (v11.s4 *  ( ( (g3[i0] ^ i3)  |  ( (i1 - g6)  +  (v11.s1 * g5) ) )  & v6[i4]) )  - v11.s0) ) ;
        v9.s1 =  ( ( ( ( ( (v11.s0 ^ g3[i0])  |  ( (g5 - g6)  + v11.s1) )  & v11.s2)  * v11.s3)  -  (v5 * v6[i4]) )  + i1) ;
        v9.s3 =  (v11.s2 +  ( ( ( ( ( (v5 + g5)  ^ i1)  | g6)  & g3[i0])  *  (v11.s4 - v11.s0) )  - v11.s3) ) ;
        v9.s4 =  ( (v11.s3 -  ( (v6[i4] &  (g5 |  (v11.s0 ^ g6) ) )  * i1) )  +  (g3[i0] +  (v5 -  ( (v11.s1 & v11.s4)  * v11.s2) ) ) ) ;
      }
    }
    for(i4 = 2; i4 < 10; i4 += 2) {
      for(i1 = 2; i1 < 12; i1 += 3) {
        for(i2 = 0; i2 < 15; i2 += 2) {
          v6[i4] =  ( (v8.s2 -  ( ( (g9[i2] | g6)  &  (g8[i1] ^  (v4 +  ( (v8.s2 *  (g9[i2] & g6) )  - g8[i1]) ) ) )  * v4) )  + v8.s2) ;
          v2 =  (g6 +  ( (v8.s2 *  (g9[i2] & g8[i1]) )  -  ( (v4 ^ g6)  | v8.s2) ) ) ;
          g0 =  (g6 +  ( (v4 * g8[i1])  -  (g9[i2] &  (v8.s2 |  (g6 ^  ( (v4 - g8[i1])  + g9[i2]) ) ) ) ) ) ;
        }
      }
    }
    for(i3 = 1; i3 < 6; i3 += 3) {
      for(i4 = 2; i4 < 10; i4 += 2) {
        for(i1 = 2; i1 < 12; i1 += 3) {
          v2 =  ( ( ( ( ( (v6[i4] ^ i3)  | v1[i3])  &  (v6[i4] + g8[i1]) )  * i3)  - g8[i1])  + v6[i4]) ;
          g8[i1] =  ( (i3 - v6[i4])  +  (g8[i1] *  ( (g8[i1] | v6[i4])  &  ( ( (v1[i3] - i3)  + i3)  ^ v6[i4]) ) ) ) ;
        }
      }
    }
    i3 = 1;
    i2 = 8;
    i2 = 9;
    if( ( ( ( (g7 &  (i6 |  (v1[i3] ^ g9[i2]) ) )  * g2)  -  (g0 + g4) )  + g7) ) {
      for(i0 = 0; i0 < 10; i0 += 3) {
        for(i4 = 2; i4 < 10; i4 += 2) {
          for(i2 = 0; i2 < 15; i2 += 2) {
            g9[i2] =  (v6[i4] +  ( ( (g5 & v5)  *  ( ( ( ( (g5 * g0)  - g10)  + g1)  ^ g3[i0])  | g6) )  -  (v6[i4] & g5) ) ) ;
            v6[i4] =  ( ( ( (g10 & g1)  *  (g5 |  (g6 ^ v5) ) )  - g5)  +  (v6[i4] + g0) ) ;
          }
        }
      }
    }
    else if( (v8.s0 +  ( (i3 * i3)  -  ( ( ( ( ( (i0 * v8.s1)  - i1)  + i2)  ^ v8.s0)  | i3)  & i3) ) ) ) {
      for(i3 = 1; i3 < 6; i3 += 3) {
        for(i0 = 0; i0 < 10; i0 += 3) {
          g0 =  ( ( ( ( ( ( (i2 + v11.s1)  ^  (v5 - v10) )  | g3[i0])  & g2)  * v1[i3])  - v7)  + i2) ;
          v8.s0 =  ( ( ( (g2 & v10)  *  (v11.s1 |  (i2 ^ v1[i3]) ) )  - g3[i0])  +  (v5 + v7) ) ;
          v8.s1 =  (g2 +  ( ( ( (v11.s1 | v7)  &  ( (v10 + i2)  ^  (g3[i0] -  (v5 * v1[i3]) ) ) )  *  (g2 & v11.s1) )  - v7) ) ;
          v11.s2 =  (v5 +  (v1[i3] -  ( (v11.s1 & g3[i0])  *  (v7 |  ( ( (i2 - g2)  + v10)  ^ v5) ) ) ) ) ;
          v11.s3 =  ( (v5 -  ( (v7 &  (i2 | g3[i0]) )  * v11.s1) )  +  (g2 ^ v10) ) ;
          v11.s4 =  ( (v7 -  (i2 *  (g3[i0] &  ( (v10 ^  (v11.s1 + v5) )  |  ( ( (g2 & v1[i3])  * v7)  - i2) ) ) ) )  + g3[i0]) ;
          g2 =  (g3[i0] +  ( ( (v10 & v7)  *  (v11.s1 | i2) )  -  (v5 ^ v1[i3]) ) ) ;
        }
      }
    }
    else {
      for(i1 = 2; i1 < 12; i1 += 3) {
        g10 =  ( ( (v11.s2 * i3)  - g8[i1])  +  ( (i2 | g1)  & i0) ) ;
        v12 =  ( ( ( (i3 &  (v11.s3 |  (v11.s2 ^ v2) ) )  * v0)  - i2)  + i0) ;
      }
    }
    for(i0 = 0; i0 < 10; i0 += 3) {
      for(i2 = 0; i2 < 15; i2 += 2) {
        g3[i0] =  ( ( (v11.s0 *  (i1 &  ( ( (g3[i0] + v4)  ^ g7)  |  (v12 - g9[i2]) ) ) )  - g0)  + v11.s3) ;
        g7 =  (g7 +  ( ( ( (v8.s0 | g3[i0])  &  (g0 ^ v11.s0) )  * v12)  - g9[i2]) ) ;
        g9[i2] =  ( (i1 - v11.s3)  +  (g3[i0] *  (v12 &  (v8.s0 | v4) ) ) ) ;
        v8.s0 =  (v8.s0 +  (v11.s0 -  ( (v4 & g9[i2])  *  (v11.s3 |  (g3[i0] ^  ( ( (g0 * i1)  - v12)  + g7) ) ) ) ) ) ;
        v8.s1 =  (g0 +  (v11.s3 -  ( ( (g3[i0] | v11.s0)  & g7)  *  (v8.s0 ^  (v12 +  ( (g9[i2] *  (i1 & v4) )  - g0) ) ) ) ) ) ;
      }
    }
  }
  for(i3 = 1; i3 < 6; i3 += 3) {
    for(i4 = 2; i4 < 10; i4 += 2) {
      v6[i4] =  (g6 +  ( (v10 * i3)  -  ( (v1[i3] |  ( ( ( (g6 * v10)  - g10)  + g0)  ^ v2) )  &  (g6 & v10) ) ) ) ;
      v6[i4] =  ( ( (g10 *  (v1[i3] &  ( (v10 ^ v2)  | i3) ) )  -  ( (v10 - g0)  + g6) )  + g6) ;
    }
  }
  for(i0 = 0; i0 < 10; i0 += 3) {
    v11.s3 =  (v9.s0 +  ( (g0 * g7)  -  (g4 &  (g2 | v8.s2) ) ) ) ;
    v11.s4 =  ( ( ( (v8.s2 & g0)  *  (v9.s2 |  ( ( (g4 -  (i3 * g2) )  + i1)  ^ v9.s0) ) )  -  (g7 & g7) )  + v8.s1) ;
    g3[i0] =  ( ( ( (g7 & g2)  *  (i3 |  ( (v8.s1 +  ( (i1 *  (v8.s2 & v9.s0) )  - g0) )  ^ g7) ) )  - g4)  + v9.s2) ;
    g6 =  ( ( (v9.s0 *  ( ( (i3 ^  (v9.s2 +  (g7 - v8.s2) ) )  | g4)  & g0) )  - g7)  + i1) ;
  }
  for(i7 = 2; i7 < 85; i7 += 3) {
    for(i4 = 2; i4 < 10; i4 += 2) {
      for(i1 = 2; i1 < 12; i1 += 3) {
        g5 =  (v3.s3 +  ( (v3.s2 *  (i0 &  (v3.s4 | v8.s1) ) )  -  ( (i0 + v12)  ^  (v8.s2 - v3.s3) ) ) ) ;
        g8[i1] =  ( (i0 -  ( (v3.s3 & v12)  * i0) )  +  ( ( (v3.s4 +  (v3.s2 - v8.s2) )  ^ v8.s1)  |  ( (i0 & v3.s3)  * v12) ) ) ;
        g5 =  ( ( (i0 *  (v8.s1 &  ( (v12 ^ v3.s4)  | v3.s2) ) )  -  (v8.s2 +  (v3.s3 - i0) ) )  +  (i0 * v8.s1) ) ;
        v6[i4] =  ( ( ( (v8.s2 &  (v3.s3 | v3.s2) )  * v12)  - i0)  + v8.s1) ;
      }
    }
    for(i3 = 1; i3 < 6; i3 += 3) {
      for(i1 = 2; i1 < 12; i1 += 3) {
        v11.s0 =  ( (v3.s0 - v3.s1)  +  (v5 *  (g8[i1] &  ( (v3.s3 ^  (v3.s4 +  (v3.s2 - v2) ) )  | v3.s2) ) ) ) ;
        v11.s4 =  ( ( ( (v5 & v3.s0)  * v3.s0)  -  (v1[i3] | v3.s1) )  +  (v3.s2 ^  ( (v2 - v3.s3)  + v3.s4) ) ) ;
        g4 =  ( ( ( ( (v3.s0 |  (v3.s1 ^ g8[i1]) )  & v3.s2)  * v3.s2)  -  (v1[i3] +  (v3.s0 -  ( (v2 & v5)  * v3.s4) ) ) )  + v3.s3) ;
      }
    }
  }
  for(i0 = 0; i0 < 10; i0 += 3) {
    for(i2 = 0; i2 < 15; i2 += 2) {
      g9[i2] =  (g0 +  ( (v5 *  ( (g3[i0] | g1)  &  (g3[i0] ^ g4) ) )  - v4) ) ;
      g7 =  (g4 +  ( ( (g3[i0] &  (v5 | g7) )  * g1)  -  (g3[i0] ^  ( (g0 -  ( (v4 & g4)  * g3[i0]) )  + v5) ) ) ) ;
    }
  }
  i2 = 1;
  return  ( ( (g9[i2] *  ( ( (v7 ^ g1)  | g7)  &  (v2 + g9[i2]) ) )  - v7)  + g1) ;
}

// function 15
int foo15(unsigned x0) {
  unsigned i0 = 0;
  unsigned i1 = 0;
  unsigned i2 = 0;
  unsigned i3 = 0;
  unsigned i4 = 0;
  unsigned i5 = 0;
  unsigned i6 = 0;
  unsigned i7 = 0;
  T23 v0 = 10396142876806601485ULL;
  T15 v1 = 11581987411050069956ULL;
  T4 v2 = 6047397007491459120ULL;
  T22 v3 = 3230843478479203962ULL;
  T18 v4 = 16583364091470805281ULL;
  T23 v5 = 7645430621463643131ULL;
  T32 v6 = {2ULL,87ULL,33ULL,54ULL,37ULL,17ULL,61ULL,31ULL,69ULL,64ULL,81ULL,71ULL,98ULL,53ULL,66ULL};
  T8 v7 = 15134024057065586333ULL;
  T17 v8 = 13527410823034192675ULL;
  T30 v9 = {40ULL,72ULL,82ULL,84ULL,5ULL,67ULL,97ULL,0ULL,57ULL,83ULL};
  T11 v10 = 161519105385934776ULL;
  i3 = 10;
  if( ( ( (v5 *  (v8 & v1) )  -  (g2 |  ( (v6[i3] + v5)  ^ v5) ) )  +  (v8 - v1) ) ) {
    return  (g2 +  ( ( (v8 & v1)  *  (v5 |  (v5 ^ v6[i3]) ) )  - g2) ) ;
  }
  for(i4 = 2; i4 < 10; i4 += 2) {
    v7 =  (v0 +  (v3 -  (v9[i4] *  ( (g4 | v4)  &  ( ( (v0 - v3)  +  (v9[i4] * g4) )  ^ v4) ) ) ) ) ;
    v3 =  ( (v3 -  ( (v0 &  ( ( (v9[i4] + v4)  ^  (g4 - v3) )  | v0) )  * v9[i4]) )  + v4) ;
    v7 =  ( (v4 -  (v3 * v9[i4]) )  +  ( (v0 | g4)  & v4) ) ;
    g7 =  (v3 +  ( (g4 * v9[i4])  -  (v0 &  (v4 |  (v3 ^ g4) ) ) ) ) ;
    g0 =  (v3 +  ( ( ( (v9[i4] |  (g4 ^ v4) )  & v0)  * v3)  - v9[i4]) ) ;
  }
  for(i6 = 1; i6 < 51; i6 += 3) {
    v2 =  ( (i1 -  ( ( (v1 | v7)  & g0)  *  ( (v8 +  (v0 - i3) )  ^ v7) ) )  +  (i1 * v1) ) ;
    g10 =  ( ( (g0 *  (v7 & v8) )  - v7)  +  ( ( (i3 + i1)  ^  (v1 -  (v0 * g0) ) )  | v7) ) ;
    g10 =  (i1 +  (v1 -  ( (v0 & v7)  *  (v7 | g0) ) ) ) ;
    g6 =  (v7 +  ( ( ( ( (i1 ^  (v8 + v1) )  | g0)  &  (v0 - i3) )  *  (v7 * v7) )  - i1) ) ;
    v3 =  ( ( (g7 * v4)  -  (g0 & i2) )  +  (g1 |  ( (g1 +  (g7 -  (v4 * g0) ) )  ^ i2) ) ) ;
    g7 =  (g1 +  (g0 -  (g1 *  (v4 &  ( (g7 ^ i2)  |  (g1 + g0) ) ) ) ) ) ;
    g5 =  ( ( (v4 * i2)  - g1)  +  ( (g0 | g7)  &  ( ( (g1 -  (v4 * i2) )  + g1)  ^  (g0 & g7) ) ) ) ;
  }
  for(i3 = 0; i3 < 15; i3 += 1) {
    g5 =  ( (v7 -  ( ( (v5 | v6[i3])  &  (g4 ^ g6) )  *  ( (v0 - v0)  + v5) ) )  + v7) ;
    v2 =  ( (v5 - g4)  +  ( ( ( (v5 ^ v0)  |  ( ( (g6 * v0)  -  (v7 & v6[i3]) )  + v5) )  & g4)  * v5) ) ;
  }
  i3 = 2;
  i1 = 9;
  //  CALL from foo15 to foo21
  foo21( ( (g6 - i0)  +  ( ( (g8[i1] |  ( (g6 + v7)  ^ v6[i3]) )  &  ( (g2 * g0)  - g7) )  * g6) ) );
  for(i5 = 1; i5 < 77; i5 += 1) {
    for(i0 = 0; i0 < 10; i0 += 3) {
      for(i4 = 2; i4 < 10; i4 += 2) {
        g7 =  (v9[i4] +  ( ( ( (g4 |  (i0 ^ g7) )  & g7)  * g3[i0])  - g0) ) ;
        v9[i4] =  (i0 +  (g3[i0] -  (g4 *  ( (v9[i4] | g0)  & i2) ) ) ) ;
      }
    }
    for(i1 = 2; i1 < 12; i1 += 3) {
      for(i4 = 2; i4 < 10; i4 += 2) {
        g2 =  ( ( (g8[i1] * v3)  - g4)  +  ( (i2 |  (g6 ^ g5) )  &  ( (v9[i4] - v2)  + v4) ) ) ;
        v9[i4] =  (v3 +  ( (i2 * v9[i4])  -  ( (v2 |  (v4 ^ g6) )  & g5) ) ) ;
        v3 =  (i2 +  (g5 -  (g8[i1] *  (v3 &  ( ( ( (v4 - g6)  + g4)  ^ v9[i4])  | v2) ) ) ) ) ;
        g6 =  ( ( (v3 * g4)  -  (g8[i1] &  ( ( (v4 + v2)  ^ i2)  | g5) ) )  + g6) ;
      }
    }
    i0 = 7;
    i4 = 8;
    i3 = 5;
    i4 = 9;
    if( ( (g0 - i1)  +  ( (g3[i0] & v2)  *  (v2 | i3) ) ) ) {
      for(i3 = 0; i3 < 15; i3 += 1) {
        for(i1 = 2; i1 < 12; i1 += 3) {
          for(i4 = 2; i4 < 10; i4 += 2) {
            v6[i3] =  ( ( ( (v2 &  (v9[i4] |  (i0 ^ i1) ) )  *  (g4 + g10) )  - i3)  + v2) ;
            g8[i1] =  ( ( (v9[i4] *  ( (i3 | i1)  &  (v2 ^ g4) ) )  - g10)  +  (i0 + v9[i4]) ) ;
            g0 =  ( ( ( (i1 & g10)  *  (g4 | i3) )  - v2)  +  (i0 ^  (v9[i4] + i1) ) ) ;
            g8[i1] =  ( (g10 -  ( (g4 & i1)  *  (v2 |  ( (i0 + i3)  ^ v9[i4]) ) ) )  +  (g10 - g4) ) ;
          }
        }
      }
    }
    else {
      for(i0 = 0; i0 < 10; i0 += 3) {
        v4 =  (g3[i0] +  ( ( (i0 & g2)  *  (g7 | g2) )  -  (g3[i0] ^ i0) ) ) ;
        g7 =  ( ( (i0 * g2)  - g3[i0])  +  ( (g2 | g7)  & i0) ) ;
        v1 =  (g3[i0] +  ( (g2 *  (g7 &  (i0 |  (g2 ^ g3[i0]) ) ) )  - g2) ) ;
        g2 =  ( (g2 -  ( ( (g7 |  (g2 ^ g3[i0]) )  &  (i0 + g2) )  * g7) )  +  (g2 - g3[i0]) ) ;
      }
    }
    for(i1 = 2; i1 < 12; i1 += 3) {
      for(i2 = 0; i2 < 15; i2 += 2) {
        for(i4 = 2; i4 < 10; i4 += 2) {
          g7 =  ( ( (g7 *  ( (v1 |  (g8[i1] ^ g8[i1]) )  & i1) )  - g2)  + v9[i4]) ;
          g9[i2] =  ( (g0 -  ( ( ( (i1 ^  ( (g2 - v9[i4])  + g7) )  |  (g8[i1] * g8[i1]) )  &  (v1 & g0) )  * i1) )  + g2) ;
          g1 =  (v1 +  ( ( (g8[i1] & i1)  *  (v9[i4] | g0) )  - g7) ) ;
          v0 =  ( ( (g8[i1] * g7)  -  ( ( (g2 ^ v9[i4])  | g0)  &  (g8[i1] + v1) ) )  +  ( (i1 * g8[i1])  - g7) ) ;
          v3 =  ( ( ( (g2 &  (i1 |  (v9[i4] ^  (g8[i1] + g0) ) ) )  * g7)  -  (v1 - g8[i1]) )  +  (g2 * i1) ) ;
        }
      }
    }
    for(i0 = 0; i0 < 10; i0 += 3) {
      for(i4 = 2; i4 < 10; i4 += 2) {
        g2 =  ( ( (i2 *  (v1 & v2) )  -  ( (g4 ^ g0)  |  (g2 + v9[i4]) ) )  +  (g0 - i1) ) ;
        g5 =  (i2 +  ( (v9[i4] *  (v1 &  (g4 | g0) ) )  - g2) ) ;
        g3[i0] =  ( ( ( (v1 & g0)  * i1)  - g2)  +  (i2 | g0) ) ;
      }
    }
    for(i7 = 2; i7 < 32; i7 += 3) {
      for(i3 = 0; i3 < 15; i3 += 1) {
        for(i2 = 0; i2 < 15; i2 += 2) {
          v5 =  (g9[i2] +  ( (v8 *  (v4 & i1) )  -  (v2 |  (g9[i2] ^  (v8 +  (v4 -  (i1 * v2) ) ) ) ) ) ) ;
          v6[i3] =  ( ( (g9[i2] * v4)  -  (i1 & v8) )  +  (v2 |  ( (g9[i2] +  (v4 - i1) )  ^ v8) ) ) ;
          v2 =  ( ( ( ( (v4 | v2)  & i1)  *  (v8 ^  (g9[i2] + v4) ) )  -  (v2 -  ( (i1 & v8)  * g9[i2]) ) )  + v4) ;
          v1 =  ( ( ( (v2 &  (i1 | v4) )  *  (g9[i2] ^ v8) )  - v2)  +  (i1 +  (v4 - g9[i2]) ) ) ;
        }
      }
      i3 = 10;
      i4 = 4;
      if( ( ( (i2 * i0)  -  ( (g7 |  ( ( (g4 - v7)  + g1)  ^ i1) )  & v4) )  + v9[i4]) ) {
        continue;
      }
    }
    for(i0 = 0; i0 < 10; i0 += 3) {
      for(i4 = 2; i4 < 10; i4 += 2) {
        g3[i0] =  ( (g4 -  ( ( ( (g7 ^ v1)  | i1)  & i2)  *  ( (g4 -  (g7 * v1) )  + i1) ) )  +  (i2 & g4) ) ;
        v9[i4] =  (i2 +  ( (i1 *  (v1 &  (g4 | g7) ) )  - i2) ) ;
        g2 =  ( (i2 -  (g4 * v1) )  +  ( ( (g7 ^  (i1 + i2) )  |  (g4 - v1) )  & g7) ) ;
        v5 =  ( (v1 - g7)  +  ( (i2 & i1)  *  ( (g4 ^  (v1 + g7) )  | i2) ) ) ;
      }
    }
    for(i0 = 0; i0 < 10; i0 += 3) {
      g10 =  (v2 +  ( (g4 *  (v5 & g2) )  -  (g4 | v2) ) ) ;
      v2 =  (g4 +  (v5 -  ( ( (g4 |  (v2 ^ g2) )  & g4)  *  ( (v5 - g4)  + v2) ) ) ) ;
      g3[i0] =  ( (v5 - v2)  +  ( (g2 &  ( (g4 ^  (g4 +  ( (v5 * v2)  - g2) ) )  | g4) )  * g4) ) ;
      v2 =  (g4 +  ( ( (g2 &  (v2 | g4) )  *  (v5 ^ g4) )  -  (g2 + v2) ) ) ;
    }
  }
  i3 = 5;
  if( ( ( ( ( (v0 |  ( (g7 + v6[i3])  ^ i2) )  & v1)  *  (v0 - g7) )  - v6[i3])  +  ( (i2 & v1)  * v0) ) ) {
    return  ( ( (v6[i3] * g7)  -  (v1 &  ( ( (v0 + i2)  ^ v6[i3])  |  ( (g7 * v1)  -  (v0 & i2) ) ) ) )  + v6[i3]) ;
  }
  i3 = 12;
  i1 = 10;
  return  ( ( (g6 *  (g0 &  (i0 |  (g2 ^ v6[i3]) ) ) )  - g7)  + v7) ;
}

