#include "./out.1.1.types.h"

// function 6
int foo6(unsigned x0) {
  unsigned i0 = 0;
  unsigned i1 = 0;
  unsigned i2 = 0;
  unsigned i3 = 0;
  unsigned i4 = 0;
  T23 v0 = 9740608577439481402ULL;
  T4 v1 = 4903987857168886727ULL;
  T5 v2 = 16390552174039812245ULL;
  T12 v3 = 4891547407811602261ULL;
  T3 v4 = 18384995479560162539ULL;
  T7 v5 = 17869937213088688487ULL;
  for(i0 = 2; i0 < 10; i0 += 2) {
    g3 =  (v2 +  ( ( (v1 & v1)  *  ( (v4 ^  ( (g0[i0] - g4)  + v2) )  | v1) )  - v2) ) ;
    v0 =  ( ( ( (g4 &  (g0[i0] | v4) )  *  (v2 ^  (v2 + v1) ) )  -  (v1 - v1) )  + g4) ;
    g3 =  ( ( (v2 * g0[i0])  -  (v2 &  ( (g4 ^ v1)  |  (v4 + v1) ) ) )  + v1) ;
    v1 =  ( (v2 -  ( (g4 & v1)  *  (g0[i0] | v4) ) )  + v1) ;
  }
  for(i0 = 2; i0 < 10; i0 += 2) {
    g0[i0] =  (v3 +  ( ( (g1 & g2)  *  ( (g2 ^ v3)  | v3) )  -  (g2 +  (v3 - g1) ) ) ) ;
    g5 =  ( (g2 -  (g2 *  (v3 &  ( (g1 ^  ( (g1 - v3)  +  ( (g2 & v3)  * v3) ) )  | g2) ) ) )  + g2) ;
    v0 =  ( ( ( ( (v3 | v3)  & g1)  * g1)  - g2)  +  ( (g2 + g2)  ^ v3) ) ;
    g3 =  (g1 +  ( ( (g2 & v3)  * g1)  -  (v3 | v3) ) ) ;
  }
  for(i0 = 2; i0 < 10; i0 += 2) {
    v2 =  ( ( (g0[i0] *  (g4 &  ( ( (g2 + v3)  ^ g0[i0])  | i0) ) )  - g0[i0])  +  ( (g4 * g2)  - v3) ) ;
    v1 =  ( ( (g0[i0] * v3)  - g0[i0])  +  ( (g2 |  (g4 ^ i0) )  &  (g0[i0] + v3) ) ) ;
    g5 =  (v3 +  ( (g0[i0] *  (g4 &  (i0 | g0[i0]) ) )  -  (g2 ^  (v3 +  (g0[i0] -  (g4 * i0) ) ) ) ) ) ;
    g4 =  (g2 +  ( ( (g0[i0] &  (g4 | v3) )  * i0)  - g0[i0]) ) ;
    v0 =  ( ( ( (g2 &  (i0 | g0[i0]) )  * v3)  -  ( (g4 + g0[i0])  ^  (g2 -  ( (i0 & g0[i0])  * v3) ) ) )  + g4) ;
  }
  for(i3 = 1; i3 < 23; i3 += 3) {
    for(i1 = 0; i1 < 15; i1 += 1) {
      v4 =  ( (g4 -  (g2 *  ( (g4 | v3)  & v3) ) )  +  (g4 ^ g4) ) ;
      g6[i1] =  ( ( (g4 * g4)  -  (v3 &  (v3 | g4) ) )  + g2) ;
      v4 =  (g2 +  ( (g4 *  (v3 &  (g4 |  (v3 ^ g4) ) ) )  -  ( (g2 - g4)  +  (v3 * g4) ) ) ) ;
      g4 =  (v3 +  ( ( (g4 & g4)  *  ( (g2 ^ g4)  | v3) )  - v3) ) ;
    }
    i0 = 5;
    i1 = 6;
    // BACKEDGE CALL from foo6 to foo17
    if (ccall_check_6_17-- > 0)
      foo17( (v4 +  ( (g0[i0] *  (g4 &  ( ( (g0[i0] + v0)  ^  ( (v2 * v4)  - g0[i0]) )  | g4) ) )  - g0[i0]) ) );
    i0 = 3;
    i0 = 6;
    i1 = 11;
    if( ( (v1 - g0[i0])  +  (v4 *  ( (v4 | g5)  &  (v1 ^  (g0[i0] + v4) ) ) ) ) ) {
      for(i0 = 2; i0 < 10; i0 += 2) {
        for(i1 = 0; i1 < 15; i1 += 1) {
          v1 =  ( (g0[i0] - v3)  +  ( (v3 &  ( ( (v1 + g2)  ^ g0[i0])  |  (v3 - v3) ) )  * v1) ) ;
          g7 =  (v3 +  ( ( (v3 &  (v1 |  ( (g2 +  (g0[i0] - v3) )  ^  ( (v3 & v1)  * g2) ) ) )  * g0[i0])  - v3) ) ;
          g6[i1] =  ( (v1 -  (g0[i0] *  (v3 & g2) ) )  +  (v3 | v1) ) ;
          g1 =  (g2 +  ( (g0[i0] * v3)  -  ( ( (v3 ^  (v1 + g2) )  |  ( (g0[i0] * v3)  -  (v3 & v1) ) )  & g2) ) ) ;
          v4 =  ( (g0[i0] - v3)  +  ( ( (v1 | g2)  &  (v3 ^ g0[i0]) )  *  (v3 +  ( (v1 *  (g2 & v3) )  - g0[i0]) ) ) ) ;
        }
      }
    }
    else {
      v2 =  (g3 +  ( (g5 * v4)  -  ( (g1 | g7)  & g2) ) ) ;
      g1 =  ( ( (g4 *  ( ( (g1 ^  (v4 + g5) )  | g2)  &  ( (g3 * v3)  - g7) ) )  - g4)  + g1) ;
      g4 =  ( (v3 - g3)  +  ( (g1 &  ( ( (g7 +  (g2 - v4) )  ^  ( (g4 & g5)  * v3) )  | g3) )  * g1) ) ;
    }
    i0 = 9;
    if( ( ( (g1 * g3)  - v0)  +  (v2 &  (g0[i0] | v2) ) ) ) {
      break;
    }
    for(i1 = 0; i1 < 15; i1 += 1) {
      v3 =  ( ( ( (g6[i1] & g7)  * v0)  - g7)  +  (g7 | g6[i1]) ) ;
      v2 =  ( ( ( (v0 & g7)  *  (g7 | g6[i1]) )  - g7)  + v0) ;
      g1 =  (g7 +  ( (g7 *  ( (v0 | g6[i1])  &  ( (g7 + g7)  ^ g7) ) )  -  ( (v0 * g6[i1])  - g7) ) ) ;
      g4 =  ( (g7 - g6[i1])  +  (v0 *  ( (g7 |  ( ( ( (g7 * g7)  - g6[i1])  + v0)  ^ g7) )  & g7) ) ) ;
      v2 =  ( ( ( (g7 & g7)  *  (v0 |  (g7 ^ g6[i1]) ) )  - g7)  + g7) ;
    }
    v3 =  ( ( (v0 * g5)  -  (i0 &  (v3 | v0) ) )  +  ( (v0 +  ( ( (g5 & i0)  * v3)  - v0) )  ^ v0) ) ;
    g1 =  ( ( (v0 *  ( (v3 |  (i0 ^ v0) )  & g5) )  - v0)  + v3) ;
    v0 =  ( (v0 - g5)  +  (v3 *  ( ( (i0 ^ v0)  | v0)  &  (g5 + v3) ) ) ) ;
    g4 =  ( ( ( ( ( (g5 ^ v0)  | v0)  &  (i0 + v3) )  * g5)  - v0)  + v0) ;
    for(i4 = 2; i4 < 32; i4 += 1) {
      g5 =  ( ( (g3 *  (g1 &  (g2 | v3) ) )  -  ( (v4 +  (g5 - g2) )  ^ g3) )  + g1) ;
      g4 =  ( ( (g2 *  (v3 &  (g3 | g2) ) )  - v4)  +  (g1 ^  (g5 + g2) ) ) ;
      v2 =  ( (g5 -  ( (g1 &  (g2 | v3) )  * v4) )  +  (g2 ^ g3) ) ;
      for(i1 = 0; i1 < 15; i1 += 1) {
        g1 =  (g7 +  ( (v0 *  (i0 &  (v4 | g6[i1]) ) )  - g7) ) ;
        g7 =  ( (v4 - g6[i1])  +  ( ( (v0 |  (i0 ^ g7) )  &  ( (v4 - g6[i1])  +  ( (v0 & i0)  * g7) ) )  * v4) ) ;
      }
    }
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i1 = 0; i1 < 15; i1 += 1) {
        g3 =  ( ( ( (g4 &  (g1 |  (g0[i0] ^  (g3 +  ( (g6[i1] * v2)  - g5) ) ) ) )  * v1)  -  (g4 & g1) )  + g0[i0]) ;
        g3 =  ( (g4 -  ( ( ( (v1 ^ g6[i1])  | g5)  &  (g1 + v2) )  * g3) )  + g0[i0]) ;
        g7 =  (g5 +  (g1 -  ( ( (v2 | g6[i1])  &  ( (g4 + v1)  ^  (g3 - g0[i0]) ) )  * g5) ) ) ;
        g0[i0] =  (v2 +  (g3 -  (g5 *  ( ( (g1 ^  (g0[i0] +  ( (g6[i1] * g4)  - v1) ) )  | v2)  & g3) ) ) ) ;
        g4 =  ( (v1 - g4)  +  ( (g0[i0] & g1)  *  ( (g6[i1] ^ v2)  | g3) ) ) ;
      }
    }
  }
  g4 =  ( (i0 - g2)  +  ( (g7 &  ( (g1 ^  (g5 + v2) )  | i0) )  * g2) ) ;
  v1 =  (g1 +  ( (g7 * g5)  -  ( (g2 | v2)  &  (i0 ^ g1) ) ) ) ;
  for(i2 = 1; i2 < 70; i2 += 3) {
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i1 = 0; i1 < 15; i1 += 1) {
        g6[i1] =  ( ( ( (v2 &  (g7 | v0) )  * g0[i0])  - v0)  +  ( ( (v2 - g7)  + v0)  ^ g0[i0]) ) ;
        g5 =  (g7 +  ( (g0[i0] *  ( ( (v2 ^  (v0 + v0) )  | g7)  & g0[i0]) )  - v2) ) ;
        v2 =  ( ( ( (v0 &  ( (g0[i0] ^  ( (g7 - v0)  + v2) )  | v0) )  * g0[i0])  -  (g7 * v0) )  + v2) ;
      }
    }
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i1 = 0; i1 < 15; i1 += 1) {
        g6[i1] =  (g5 +  ( (g5 *  (g2 & v3) )  -  ( ( (g1 +  (v1 -  (v4 *  (g0[i0] & g6[i1]) ) ) )  ^ g5)  | g5) ) ) ;
        g3 =  (g0[i0] +  ( (g5 * g5)  -  ( (v1 | v4)  &  (v3 ^ g6[i1]) ) ) ) ;
      }
    }
  }
  for(i0 = 2; i0 < 10; i0 += 2) {
    g0[i0] =  (v4 +  ( ( ( (g4 | g1)  & g3)  * v1)  -  (v4 ^  ( ( (g4 * g1)  - g3)  + v1) ) ) ) ;
    v0 =  (v4 +  ( (g4 * g1)  -  ( ( (v1 ^ g3)  | v4)  &  ( (g4 - g1)  + v1) ) ) ) ;
    v4 =  (g3 +  ( ( ( (v4 |  ( (g4 + g1)  ^ v1) )  & g3)  * v4)  - g4) ) ;
  }
  i0 = 3;
  return  ( ( ( ( ( (g2 ^ v3)  | g0[i0])  & g4)  *  (i0 + g0[i0]) )  - g2)  +  (v3 - g0[i0]) ) ;
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
  T31 v0 = {72ULL,11ULL,20ULL,57ULL,71ULL,24ULL,27ULL};
  T24 v1 = 8997941227629449103ULL;
  T0 v2 = 16819418489968524182ULL;
  T10 v3 = 6541225629625445327ULL;
  T17 v4 = 5228476907324492801ULL;
  for(i0 = 2; i0 < 10; i0 += 2) {
    for(i2 = 2; i2 < 7; i2 += 1) {
      g0[i0] =  ( ( ( (v3 & i1)  * g0[i0])  -  (g7 |  (g5 ^  (v0[i2] + g2) ) ) )  + i0) ;
      v3 =  ( (i0 - i1)  +  ( (g2 &  (v3 | g0[i0]) )  * g5) ) ;
      g7 =  ( (i1 - g2)  +  ( (g5 &  ( (g7 ^ v0[i2])  | g0[i0]) )  * v3) ) ;
      v3 =  ( ( (i0 *  ( (g7 | g5)  & g0[i0]) )  -  (g2 ^  ( (v0[i2] -  (v3 * i1) )  +  (i0 & g7) ) ) )  + g5) ;
      g5 =  (g0[i0] +  ( ( ( ( ( (i0 +  ( (v0[i2] * v3)  - g2) )  ^ g7)  | g5)  & i1)  *  (g0[i0] & i0) )  - v0[i2]) ) ;
    }
  }
  for(i2 = 2; i2 < 7; i2 += 1) {
    g4 =  ( ( (g4 *  (v3 &  (v0[i2] |  (i1 ^ v0[i2]) ) ) )  - i1)  + v1) ;
    g2 =  ( (v0[i2] -  ( ( (v1 | v0[i2])  & v3)  * g4) )  +  (v0[i2] ^  ( (i1 - i1)  + v0[i2]) ) ) ;
  }
  for(i3 = 0; i3 < 60; i3 += 2) {
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i2 = 2; i2 < 7; i2 += 1) {
        g2 =  ( ( (g5 * g4)  - g0[i0])  +  ( ( ( ( (g5 -  (v0[i2] *  (g4 & g5) ) )  + g5)  ^ g4)  | g0[i0])  & g5) ) ;
        g0[i0] =  ( (g4 -  ( ( ( (g5 ^ v0[i2])  |  (g5 + g5) )  & g0[i0])  * g4) )  + g4) ;
      }
    }
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i1 = 0; i1 < 15; i1 += 1) {
        g0[i0] =  ( (v1 -  (g7 *  (g2 & g5) ) )  +  (g5 |  ( ( (v1 -  (g7 * g2) )  + g5)  ^  (g5 & v1) ) ) ) ;
        g2 =  ( ( ( (g5 & g7)  * v1)  - g5)  +  ( (g2 ^  (g5 +  (g7 - v1) ) )  | g5) ) ;
        g5 =  ( ( ( (v1 & g5)  *  ( (g7 ^ g5)  |  (g2 + v1) ) )  -  (g5 - g7) )  + g5) ;
        g6[i1] =  ( ( ( (v1 & g2)  * g7)  - g5)  +  ( (g5 ^  (v1 + g2) )  |  (g7 - g5) ) ) ;
        g2 =  ( ( (g2 * g5)  -  (g5 & g7) )  +  (v1 |  ( (g2 + g5)  ^ g5) ) ) ;
      }
    }
    for(i4 = 0; i4 < 30; i4 += 3) {
      for(i0 = 2; i0 < 10; i0 += 2) {
        g7 =  (g7 +  (v1 -  ( (g0[i0] &  ( (v1 ^ v3)  | v1) )  *  ( (g7 - v1)  + g0[i0]) ) ) ) ;
        g0[i0] =  ( (v1 - v1)  +  (v1 *  ( ( (v3 ^ g7)  | g0[i0])  & v1) ) ) ;
        g1 =  ( (v3 - v1)  +  ( (v1 &  ( (g7 ^ g0[i0])  | v1) )  * v3) ) ;
      }
      for(i2 = 2; i2 < 7; i2 += 1) {
        for(i1 = 0; i1 < 15; i1 += 1) {
          v1 =  (i0 +  (g5 -  ( ( (v3 | g6[i1])  & v2)  * i0) ) ) ;
          v0[i2] =  ( (i0 - v2)  +  (g5 *  ( (v3 | g6[i1])  &  ( (i0 + v2)  ^  (g5 - v3) ) ) ) ) ;
          v3 =  ( (i0 -  ( (v2 & v3)  *  ( ( ( ( (g6[i1] * g5)  - i0)  + v2)  ^ v3)  | g6[i1]) ) )  + g5) ;
          g4 =  (v3 +  (v2 -  ( ( ( (g5 ^ i0)  | g6[i1])  & v3)  *  (v2 + g5) ) ) ) ;
        }
      }
      for(i0 = 2; i0 < 10; i0 += 2) {
        for(i2 = 2; i2 < 7; i2 += 1) {
          g1 =  (v0[i2] +  ( (g3 * g7)  -  (g2 &  (v0[i2] | g0[i0]) ) ) ) ;
          g3 =  ( (v0[i2] - g2)  +  (v0[i2] *  (g0[i0] &  ( ( (g7 +  ( (g4 *  (g3 & g2) )  - g5) )  ^ v0[i2])  | g2) ) ) ) ;
          g0[i0] =  ( ( (g2 * g0[i0])  - v0[i2])  +  (g2 &  ( (g5 ^ g4)  |  ( (g7 - g3)  + v0[i2]) ) ) ) ;
        }
      }
      for(i5 = 0; i5 < 42; i5 += 3) {
        for(i0 = 2; i0 < 10; i0 += 2) {
          for(i1 = 0; i1 < 15; i1 += 1) {
            g2 =  ( ( (g7 *  (g0[i0] &  ( (v2 ^ v3)  |  (v1 + g3) ) ) )  - g5)  + g0[i0]) ;
            v1 =  ( ( ( (v2 &  (g0[i0] | g3) )  *  (g0[i0] ^ g5) )  - v3)  + g7) ;
          }
        }
        v1 =  ( (g1 -  ( (v1 & g2)  * g7) )  +  (v1 |  (g4 ^ v1) ) ) ;
        g3 =  ( (g2 - v1)  +  ( ( (g7 | g4)  &  (g1 ^ v1) )  * v1) ) ;
      }
      for(i2 = 2; i2 < 7; i2 += 1) {
        for(i1 = 0; i1 < 15; i1 += 1) {
          g6[i1] =  ( (v3 -  ( (g6[i1] &  (g5 |  (v0[i2] ^  (v3 +  (g5 - v1) ) ) ) )  * v1) )  + v1) ;
          v1 =  (v0[i2] +  (v1 -  ( ( (v3 | v1)  &  (v3 ^ v1) )  * g6[i1]) ) ) ;
          g5 =  ( (v3 -  (v3 *  ( ( (g5 ^  (v1 + v0[i2]) )  | v1)  & v1) ) )  + g6[i1]) ;
          g5 =  ( (v3 -  (v0[i2] *  (v1 &  (g5 |  ( (g5 + g6[i1])  ^ v3) ) ) ) )  + v1) ;
        }
      }
    }
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i2 = 2; i2 < 7; i2 += 1) {
        for(i1 = 0; i1 < 15; i1 += 1) {
          v3 =  (g2 +  ( (g6[i1] *  ( ( (i1 ^ g0[i0])  | i1)  &  (g3 +  ( (g2 *  (g2 & g6[i1]) )  - i1) ) ) )  - g0[i0]) ) ;
          g0[i0] =  ( (i1 -  (g3 *  ( (i1 | g6[i1])  & g2) ) )  +  (g0[i0] ^ g2) ) ;
          g4 =  ( (g6[i1] -  (i1 *  ( (g2 |  ( (g3 + g0[i0])  ^ g2) )  &  (i1 - g6[i1]) ) ) )  + i1) ;
          g7 =  ( (g0[i0] - g3)  +  ( ( (i1 | g2)  & g2)  * g6[i1]) ) ;
          v0[i2] =  (g2 +  ( ( ( (i1 | g6[i1])  & i1)  * g0[i0])  -  ( (g2 +  (g3 - g2) )  ^  (i1 * g6[i1]) ) ) ) ;
        }
      }
    }
    i2 = 3;
    // BACKEDGE CALL from foo12 to foo5
    if (ccall_check_12_5-- > 0)
      foo5( ( (g5 -  (v3 *  ( (g7 | v2)  &  ( ( ( (v2 * g5)  - i1)  + v3)  ^ g5) ) ) )  + v3) );
    for(i6 = 1; i6 < 89; i6 += 2) {
      for(i0 = 2; i0 < 10; i0 += 2) {
        v1 =  ( ( ( (g5 & g3)  * g1)  - g4)  +  (g0[i0] | g5) ) ;
        g2 =  ( (g1 -  (g3 * g5) )  +  (g4 &  (g0[i0] |  (g1 ^  (g3 +  (g5 - g4) ) ) ) ) ) ;
        v3 =  ( (g1 -  ( (g0[i0] & g3)  *  (g5 |  (g4 ^ g1) ) ) )  + g0[i0]) ;
      }
      g2 =  (g2 +  ( ( (g7 & g1)  * g5)  -  ( ( (g4 + v3)  ^ v2)  |  (g4 - g2) ) ) ) ;
      g4 =  ( (g2 -  (g5 *  ( (v3 | v2)  &  (g4 ^ g4) ) ) )  + g7) ;
    }
    g5 =  ( ( ( ( ( (g3 ^ g4)  |  ( (i1 - g7)  +  (i0 * g4) ) )  & g3)  * g4)  - i1)  +  (g7 & i0) ) ;
    g2 =  ( (g7 - g4)  +  (g4 *  (g3 &  ( ( ( (i0 - i1)  + g7)  ^ g4)  | g4) ) ) ) ;
    i0 = 2;
    i2 = 6;
    // BACKEDGE CALL from foo12 to foo1
    if (ccall_check_12_1-- > 0)
      foo1( (g0[i0] +  ( (g4 *  ( (g7 |  ( (i1 + g1)  ^ v0[i2]) )  & g4) )  -  ( (v1 * g0[i0])  -  (g0[i0] & g4) ) ) ) );
  }
  for(i0 = 2; i0 < 10; i0 += 2) {
    g2 =  (i0 +  (g2 -  ( ( (v3 | i1)  & g4)  * i0) ) ) ;
    g2 =  ( ( (g2 * g4)  -  ( (i0 | i1)  &  ( (v3 + g2)  ^ g4) ) )  + i0) ;
    g3 =  ( (v3 -  ( ( (i0 |  ( (g4 + g2)  ^ i1) )  & v3)  * i0) )  + g4) ;
    g0[i0] =  (g4 +  ( (v3 *  ( (g2 |  ( (i1 +  (i0 - g4) )  ^  (v3 * g2) ) )  & i1) )  - i0) ) ;
    g2 =  ( (g2 -  (g4 * i0) )  +  ( (i1 | v3)  & g2) ) ;
  }
  i2 = 6;
  return  (v0[i2] +  (v3 -  ( ( (g4 |  (v0[i2] ^ i1) )  &  ( (v0[i2] - v1)  + i1) )  *  (v0[i2] * v3) ) ) ) ;
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
  T18 v0 = 8801152841414507633ULL;
  T31 v1 = {5ULL,19ULL,99ULL,29ULL,66ULL,32ULL,61ULL};
  T19 v2 = 15415402520290045898ULL;
  T0 v3 = 17018609815855178651ULL;
  T3 v4 = 5464067437406013584ULL;
  T23 v5 = 10517344875291262095ULL;
  T15 v6 = 9217530183920240171ULL;
  T32 v7 = {52ULL,7ULL,11ULL,36ULL,91ULL,75ULL,89ULL,39ULL,49ULL,77ULL,2ULL,80ULL,4ULL,4ULL,48ULL};
  T16 v8 = 9231518154668564641ULL;
  T18 v9 = 4669221100357076152ULL;
  for(i0 = 2; i0 < 10; i0 += 2) {
    v4 =  ( ( (g0[i0] *  (v8 & g0[i0]) )  -  ( (g3 ^ i0)  | i1) )  + g0[i0]) ;
    g0[i0] =  ( ( (g3 * i1)  -  ( (g0[i0] | i0)  & g0[i0]) )  +  (v8 ^  (g0[i0] + g3) ) ) ;
    g0[i0] =  (g3 +  ( (i0 *  ( ( (g0[i0] ^ g0[i0])  |  ( (v8 - i1)  + g0[i0]) )  &  (g3 *  (i0 & g0[i0]) ) ) )  - g0[i0]) ) ;
    v4 =  (g0[i0] +  (i0 -  ( (g3 &  ( (i1 ^ g0[i0])  | g0[i0]) )  * v8) ) ) ;
    v5 =  ( ( (i1 * i0)  - g3)  +  (g0[i0] &  ( ( ( (g0[i0] - v8)  +  (g0[i0] * i1) )  ^ i0)  |  (g3 & g0[i0]) ) ) ) ;
  }
  for(i0 = 2; i0 < 10; i0 += 2) {
    for(i1 = 0; i1 < 15; i1 += 1) {
      for(i3 = 0; i3 < 15; i3 += 1) {
        g6[i1] =  ( ( ( ( ( ( (i1 +  (g3 - g7) )  ^ v7[i3])  |  (v2 * v7[i3]) )  &  (g6[i1] & i1) )  * g3)  - g7)  + v7[i3]) ;
        v8 =  (v7[i3] +  ( (v7[i3] * g3)  -  ( (g7 |  ( (i1 + g6[i1])  ^  ( (v2 *  (v7[i3] & v7[i3]) )  - g3) ) )  & g7) ) ) ;
        v5 =  (g3 +  ( (v7[i3] * v2)  -  (v7[i3] &  ( ( (g7 + i1)  ^ g6[i1])  | g3) ) ) ) ;
        g0[i0] =  ( ( (g3 *  (g7 &  (v7[i3] | v2) ) )  -  (g6[i1] ^  (i1 + v7[i3]) ) )  + g3) ;
        g4 =  ( ( (g6[i1] * g3)  -  ( (g7 | i1)  & v7[i3]) )  +  (v7[i3] ^  (v2 + g6[i1]) ) ) ;
      }
    }
  }
  for(i4 = 2; i4 < 35; i4 += 1) {
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i2 = 1; i2 < 7; i2 += 2) {
        v2 =  (v5 +  ( ( ( (v2 |  (v1[i2] ^ v1[i2]) )  & g0[i0])  * i1)  - v1[i2]) ) ;
        g1 =  ( (v3 -  ( ( (v1[i2] | i1)  &  ( (v1[i2] + v2)  ^  (v1[i2] - g0[i0]) ) )  * v5) )  + v3) ;
        g3 =  ( ( ( (v1[i2] &  ( (v3 ^ i1)  | v1[i2]) )  *  ( (g0[i0] - v2)  +  (v5 * v1[i2]) ) )  - v1[i2])  + v3) ;
        v2 =  (v1[i2] +  (v5 -  (i1 *  ( ( (v3 ^ v1[i2])  | v1[i2])  & v2) ) ) ) ;
      }
    }
    for(i0 = 2; i0 < 10; i0 += 2) {
      v5 =  ( (g4 - g1)  +  ( ( (g0[i0] |  (v8 ^  (i2 + g4) ) )  & g1)  * g0[i0]) ) ;
      g0[i0] =  ( ( ( ( (v8 |  (i2 ^ g1) )  & g0[i0])  * g4)  -  (v8 +  ( (i2 * g1)  - g0[i0]) ) )  + g4) ;
      g2 =  ( ( (g0[i0] *  (v8 & g4) )  - g1)  +  ( ( (i2 + g0[i0])  ^ v8)  | g4) ) ;
    }
    for(i5 = 0; i5 < 81; i5 += 2) {
      for(i0 = 2; i0 < 10; i0 += 2) {
        for(i2 = 1; i2 < 7; i2 += 2) {
          for(i1 = 0; i1 < 15; i1 += 1) {
            g0[i0] =  ( ( ( (v4 & v8)  * v4)  -  ( (v2 ^  (g2 + v8) )  | v8) )  +  (v1[i2] -  (v4 * v8) ) ) ;
            g1 =  ( ( (v2 * v8)  - v4)  +  ( ( ( (v8 + v1[i2])  ^  (v4 - v8) )  | g2)  &  (v2 * v8) ) ) ;
            g0[i0] =  ( ( ( (v8 &  (v8 | v8) )  * v2)  - v4)  +  (v4 ^ g2) ) ;
            g6[i1] =  ( (v8 -  (v4 *  ( (v4 | g2)  &  ( ( (v1[i2] - v8)  + v8)  ^  ( (v2 & v8)  * v4) ) ) ) )  + v4) ;
            g5 =  ( ( ( ( (v2 | v8)  & v4)  *  ( (v8 + v4)  ^ v1[i2]) )  - v8)  +  (g2 - v2) ) ;
          }
        }
      }
      for(i0 = 2; i0 < 10; i0 += 2) {
        for(i1 = 0; i1 < 15; i1 += 1) {
          g5 =  ( (g0[i0] -  (v8 *  ( (i1 | i2)  & i0) ) )  +  (g7 ^ g0[i0]) ) ;
          g4 =  ( (i1 - v8)  +  ( (g7 &  ( (g0[i0] ^  (i2 + i0) )  | i1) )  *  ( (v8 * g7)  - g0[i0]) ) ) ;
          g3 =  (g7 +  (g0[i0] -  ( (i1 &  (i0 | v8) )  *  ( (i2 +  (g7 - g0[i0]) )  ^  (i1 * i0) ) ) ) ) ;
          g2 =  (i0 +  ( ( ( (g7 | i2)  &  (i1 ^ v8) )  * g0[i0])  -  (i0 +  (g7 - i2) ) ) ) ;
          g6[i1] =  (g0[i0] +  ( (g7 * v8)  -  ( (i0 | i2)  & i1) ) ) ;
        }
      }
    }
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i2 = 1; i2 < 7; i2 += 2) {
        v3 =  ( ( ( (v6 & g0[i0])  *  (v6 |  (i2 ^ v5) ) )  - v1[i2])  + v1[i2]) ;
        v5 =  (v5 +  (v6 -  ( ( ( ( (v1[i2] +  ( (v1[i2] * g0[i0])  - v6) )  ^ i2)  | v5)  & v6)  *  (v1[i2] & v1[i2]) ) ) ) ;
        g0[i0] =  (v1[i2] +  ( ( (v1[i2] & g0[i0])  *  (v5 | i2) )  -  (v6 ^ v6) ) ) ;
      }
    }
    for(i0 = 2; i0 < 10; i0 += 2) {
      v3 =  ( (g3 -  ( ( ( (g2 ^  ( (i1 - v6)  + g3) )  | g0[i0])  & g2)  * g7) )  +  (g3 * g2) ) ;
      v3 =  ( ( (g2 *  ( ( (g3 ^ i1)  | g2)  &  (g7 + g3) ) )  -  (v6 - g0[i0]) )  + g2) ;
      g3 =  (g7 +  ( ( (g3 & g2)  * g0[i0])  -  (g3 | v6) ) ) ;
    }
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i2 = 1; i2 < 7; i2 += 2) {
        v0 =  ( ( ( ( (v4 |  (g5 ^ v1[i2]) )  &  ( (v1[i2] - g0[i0])  + v4) )  * g5)  - v1[i2])  + v1[i2]) ;
        g7 =  ( (v4 - v1[i2])  +  ( ( (v1[i2] | g0[i0])  & g5)  * v4) ) ;
        v6 =  (g0[i0] +  (v4 -  ( (g5 &  ( (v1[i2] ^  ( (v1[i2] -  (g0[i0] * v4) )  + g5) )  | v1[i2]) )  *  (v1[i2] & g0[i0]) ) ) ) ;
      }
    }
    i2 = 5;
    i1 = 1;
    i3 = 8;
    i2 = 2;
    i3 = 14;
    i2 = 4;
    if( (g6[i1] +  (g6[i1] -  (i1 *  ( (g3 |  (g3 ^ v0) )  & v1[i2]) ) ) ) ) {
      for(i2 = 1; i2 < 7; i2 += 2) {
        v8 =  ( (g5 -  ( (v6 &  (i0 |  ( (i1 + v1[i2])  ^ v2) ) )  * g1) )  + g5) ;
        g2 =  ( (g1 - v2)  +  ( ( (g5 |  (v6 ^ v1[i2]) )  & i0)  * i1) ) ;
      }
    }
    else if( ( (g1 -  (v3 * v1[i2]) )  +  (g2 &  ( (g7 ^ i4)  | g1) ) ) ) {
      for(i1 = 0; i1 < 15; i1 += 1) {
        g6[i1] =  ( ( ( (g2 & g2)  * i1)  - g6[i1])  +  (g6[i1] |  ( ( ( (i1 * v8)  - g2)  + g2)  ^ i1) ) ) ;
        v8 =  (i1 +  ( ( (v8 & g6[i1])  *  (i1 | g6[i1]) )  - g2) ) ;
        g3 =  ( (v8 -  (g6[i1] *  (g6[i1] &  (i1 | g2) ) ) )  + g2) ;
      }
    }
    else {
      for(i0 = 2; i0 < 10; i0 += 2) {
        g5 =  (g2 +  ( ( ( ( (v2 ^ g7)  | g0[i0])  & v5)  * v4)  -  (g2 +  ( ( (v2 & g7)  * g0[i0])  - v5) ) ) ) ;
        g5 =  ( ( ( (v2 &  ( (g7 ^ g2)  | v5) )  * g0[i0])  -  (v4 + v2) )  + g7) ;
      }
    }
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i3 = 0; i3 < 15; i3 += 1) {
        v3 =  ( ( ( (g7 & g7)  * v7[i3])  - v3)  +  (v5 | g0[i0]) ) ;
        g4 =  ( ( ( (g7 &  (v5 | v3) )  * v7[i3])  -  (v0 ^  ( (v5 - v4)  + g0[i0]) ) )  +  (g7 * g7) ) ;
        v2 =  ( ( (v3 *  (v5 &  ( (v5 ^  ( (v4 - v7[i3])  + g7) )  |  (v0 *  (g7 & g0[i0]) ) ) ) )  - v3)  + v5) ;
      }
    }
  }
  for(i2 = 1; i2 < 7; i2 += 2) {
    for(i1 = 0; i1 < 15; i1 += 1) {
      v3 =  ( (v6 -  (v4 *  ( (v6 | v8)  & v1[i2]) ) )  + v6) ;
      v2 =  ( ( (v8 * v6)  -  (v6 &  ( ( (v4 + v1[i2])  ^ v8)  | v6) ) )  + v6) ;
      g6[i1] =  (v4 +  ( (v1[i2] *  ( (v8 | v6)  & v6) )  - v4) ) ;
      v4 =  (v6 +  ( (v6 *  (v1[i2] &  (v4 |  ( ( (v8 -  (v6 * v6) )  + v1[i2])  ^  (v4 & v8) ) ) ) )  - v6) ) ;
    }
  }
  for(i1 = 0; i1 < 15; i1 += 1) {
    g7 =  ( ( (i1 * g2)  -  ( (g6[i1] | v6)  &  ( (v5 + i1)  ^ g7) ) )  +  (g4 - v6) ) ;
    v4 =  ( (g6[i1] - i1)  +  ( (i1 & g7)  *  (v6 | g4) ) ) ;
    v2 =  (i1 +  ( (g2 *  (g7 & i1) )  -  ( ( ( (g4 - g6[i1])  +  (v6 * v6) )  ^  (v5 & i1) )  | g2) ) ) ;
  }
  for(i6 = 1; i6 < 85; i6 += 3) {
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i1 = 0; i1 < 15; i1 += 1) {
        v3 =  ( (v3 -  (v4 * i2) )  +  ( (g0[i0] |  (v4 ^ v3) )  & v3) ) ;
        g6[i1] =  ( (v4 - i2)  +  (g0[i0] *  ( ( (v3 ^  (v4 + v3) )  | v4)  & i2) ) ) ;
        v8 =  ( ( ( (i2 & v4)  * v4)  -  (g0[i0] |  (v3 ^  (v3 + i2) ) ) )  +  (v4 - v4) ) ;
      }
    }
    v8 =  (v6 +  ( (i1 *  ( ( ( (v6 + v6)  ^ i2)  | v3)  & v4) )  - v6) ) ;
    v5 =  (v3 +  (v6 -  (v6 *  ( ( (i1 ^  ( (v6 - v4)  + i2) )  |  (v3 * v6) )  & v6) ) ) ) ;
  }
  for(i0 = 2; i0 < 10; i0 += 2) {
    for(i3 = 0; i3 < 15; i3 += 1) {
      v2 =  ( ( (g4 *  (g4 &  (v3 |  ( (g0[i0] + v5)  ^ v2) ) ) )  - v7[i3])  +  ( (g2 *  (g4 & g4) )  - v3) ) ;
      g4 =  ( ( (g0[i0] * g4)  - v5)  +  ( (g2 | v7[i3])  & v2) ) ;
    }
  }
  i0 = 7;
  i1 = 1;
  i3 = 1;
  return  (g3 +  ( ( (i1 &  (v7[i3] | g7) )  * g6[i1])  - v2) ) ;
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
  T13 v0 = 14334600122741462533ULL;
  T17 v1 = 4857798912622605938ULL;
  T18 v2 = 12735957965077848184ULL;
  T12 v3 = 10053923055669286455ULL;
  T33 v4 = {8ULL,63ULL,90ULL,43ULL,61ULL,30ULL,88ULL,38ULL,14ULL,34ULL};
  T32 v5 = {94ULL,70ULL,95ULL,58ULL,39ULL,13ULL,4ULL,14ULL,76ULL,88ULL,72ULL,15ULL,35ULL,89ULL,36ULL};
  T16 v6 = 9996270964973910135ULL;
  T23 v7 = 16358421053478155027ULL;
  T10 v8 = 12698498337018084655ULL;
  T32 v9 = {100ULL,21ULL,39ULL,48ULL,85ULL,82ULL,70ULL,28ULL,80ULL,95ULL,76ULL,23ULL,29ULL,22ULL,23ULL};
  T18 v10 = 388482231371245590ULL;
  T26 v11 = {1795ULL,6870ULL,3131ULL,6889ULL,2144ULL};
  i0 = 4;
  i1 = 1;
  if( ( (v7 -  ( ( ( (g7 ^  (g7 +  ( (i1 * v1)  -  (v6 & i2) ) ) )  | g1)  & g0[i0])  * v7) )  + g7) ) {
    return  ( ( (i1 *  (g1 & g0[i0]) )  -  (v1 | v7) )  +  (g7 ^ i2) ) ;
  }
  for(i2 = 0; i2 < 10; i2 += 2) {
    for(i4 = 0; i4 < 15; i4 += 1) {
      g1 =  (g3 +  (v0 -  (g7 *  ( ( (i3 ^ g2)  | v9[i4])  & g3) ) ) ) ;
      v9[i4] =  ( ( ( (g3 & g7)  *  ( ( (i3 + v9[i4])  ^  ( (v0 * g2)  - g3) )  | g7) )  - i3)  + v9[i4]) ;
      v10 =  ( ( (g2 *  ( (v9[i4] | v0)  & i3) )  - g7)  + g3) ;
      v4[i2] =  ( (i3 - v9[i4])  +  ( ( ( (g2 ^ v0)  | g3)  & g7)  *  (i3 + v9[i4]) ) ) ;
    }
  }
  for(i6 = 1; i6 < 51; i6 += 3) {
    for(i3 = 1; i3 < 15; i3 += 2) {
      v8 =  ( ( (g1 * i1)  - i3)  +  ( (g7 | v1)  & v0) ) ;
      v8 =  (g1 +  (i1 -  (v0 *  (v1 &  (g7 |  ( (i3 +  (g3 -  (g1 * i1) ) )  ^ v0) ) ) ) ) ) ;
      v5[i3] =  (g3 +  ( (g1 *  ( (g7 |  (v0 ^  (i1 + v1) ) )  & i3) )  -  (g3 - g1) ) ) ;
    }
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i1 = 0; i1 < 15; i1 += 1) {
        g0[i0] =  (v3 +  (g6[i1] -  ( ( (v3 |  ( (g0[i0] + g4)  ^  (g6[i1] - i3) ) )  & v3)  * g6[i1]) ) ) ;
        v2 =  ( (g6[i1] - v3)  +  ( (g4 & g6[i1])  *  ( (v3 ^ g0[i0])  |  ( (i3 - g6[i1])  +  (v3 *  (g4 & g6[i1]) ) ) ) ) ) ;
        v3 =  ( ( ( (v3 & g0[i0])  *  (g6[i1] |  ( (i3 + g4)  ^ g6[i1]) ) )  - v3)  + v3) ;
      }
    }
  }
  for(i0 = 2; i0 < 10; i0 += 2) {
    for(i3 = 1; i3 < 15; i3 += 2) {
      for(i1 = 0; i1 < 15; i1 += 1) {
        for(i4 = 0; i4 < 15; i4 += 1) {
          v3 =  ( ( ( (v9[i4] &  ( ( ( (g6[i1] - i1)  + i1)  ^ v5[i3])  |  ( (g3 & g0[i0])  * v1) ) )  * v8)  - v9[i4])  + g6[i1]) ;
          v0 =  (g3 +  ( (i1 *  ( (v8 | v9[i4])  &  ( ( (g0[i0] - i1)  + g6[i1])  ^  (v5[i3] * v1) ) ) )  - g3) ) ;
          v2 =  ( (g6[i1] -  (g0[i0] * i1) )  +  (v1 &  ( (v9[i4] ^  (i1 +  (v8 - g3) ) )  | v5[i3]) ) ) ;
          v0 =  (g6[i1] +  (g3 -  (v1 *  ( (v9[i4] |  (i1 ^ v8) )  & g0[i0]) ) ) ) ;
          v6 =  ( (g3 -  (g0[i0] *  (g6[i1] & v9[i4]) ) )  +  (i1 | v5[i3]) ) ;
        }
      }
    }
  }
  i0 = 4;
  i4 = 6;
  //  CALL from foo15 to foo21
  foo21( (i3 +  ( (v9[i4] * g0[i0])  -  ( (g4 | g2)  & i3) ) ) );
  for(i5 = 1; i5 < 77; i5 += 3) {
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i2 = 0; i2 < 10; i2 += 2) {
        g7 =  (i2 +  (v4[i2] -  ( ( ( ( (v10 + v8)  ^ v7)  | i2)  & i2)  * v4[i2]) ) ) ;
        g0[i0] =  (v8 +  (v4[i2] -  ( ( (v10 | i2)  & v7)  * i2) ) ) ;
      }
    }
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i3 = 1; i3 < 15; i3 += 2) {
        for(i1 = 0; i1 < 15; i1 += 1) {
          for(i4 = 0; i4 < 15; i4 += 1) {
            g0[i0] =  ( ( ( ( (g6[i1] | v1)  &  ( (i3 + v5[i3])  ^ v10) )  * v10)  - g0[i0])  +  (g2 -  (g6[i1] * v1) ) ) ;
            v9[i4] =  ( (v1 -  ( (g2 & v10)  * g6[i1]) )  +  (i3 |  (g0[i0] ^  (v10 +  (v5[i3] - v1) ) ) ) ) ;
          }
        }
      }
    }
    i0 = 5;
    if( ( (i1 -  ( ( ( (g1 ^ g4)  | g0[i0])  &  (v2 +  (i1 -  (g1 * g4) ) ) )  * g0[i0]) )  +  (v2 & i1) ) ) {
      for(i2 = 0; i2 < 10; i2 += 2) {
        for(i3 = 1; i3 < 15; i3 += 2) {
          for(i1 = 0; i1 < 15; i1 += 1) {
            v7 =  (v6 +  (v10 -  (v4[i2] *  (g6[i1] &  (i3 | v6) ) ) ) ) ;
            v4[i2] =  (v6 +  ( ( ( (i3 | v4[i2])  &  (v10 ^ g6[i1]) )  * v6)  - i3) ) ;
            g5 =  (v6 +  ( ( ( ( (i3 ^ v10)  |  (g6[i1] + v4[i2]) )  &  (v6 -  (i3 * v10) ) )  *  (g6[i1] & v4[i2]) )  - v6) ) ;
            g3 =  (v4[i2] +  ( ( ( (v6 | i3)  & g6[i1])  * v10)  - v4[i2]) ) ;
            v5[i3] =  ( ( (g6[i1] * v6)  - i3)  +  ( ( (v4[i2] ^ v10)  | g6[i1])  & v6) ) ;
          }
        }
      }
    }
    else {
      for(i2 = 0; i2 < 10; i2 += 2) {
        for(i1 = 0; i1 < 15; i1 += 1) {
          v6 =  (g6[i1] +  ( (v2 *  ( (g5 | i1)  &  (v8 ^ g4) ) )  - g6[i1]) ) ;
          g1 =  (v2 +  ( ( ( ( (v8 ^ i1)  | g5)  & g4)  * g6[i1])  -  ( (v2 - v8)  + i1) ) ) ;
          v1 =  ( ( (g6[i1] *  (g5 & g4) )  -  (i1 | v2) )  +  (v8 ^ g6[i1]) ) ;
          v4[i2] =  ( (v8 -  ( (v2 &  ( (g4 ^ i1)  | g5) )  *  (g6[i1] + v8) ) )  + v2) ;
          v0 =  ( ( (g6[i1] *  (g4 &  (v8 |  ( (i1 + g5)  ^ v2) ) ) )  - g6[i1])  +  ( (g4 *  (v8 & i1) )  - g5) ) ;
        }
      }
    }
    for(i2 = 0; i2 < 10; i2 += 2) {
      for(i3 = 1; i3 < 15; i3 += 2) {
        g3 =  ( ( (v1 * i2)  - g2)  +  (v5[i3] &  ( (i2 ^ v1)  | v3) ) ) ;
        v2 =  (v1 +  ( (g2 * v4[i2])  -  ( (i2 | v1)  &  (v5[i3] ^ i2) ) ) ) ;
        g7 =  ( ( (v4[i2] *  (g2 & i2) )  - i2)  +  ( (v1 ^ v5[i3])  |  (v3 +  (v1 - v4[i2]) ) ) ) ;
        v10 =  ( ( (i2 *  (v1 &  ( (v1 ^  ( (v3 - g2)  + v4[i2]) )  | i2) ) )  - v5[i3])  + i2) ;
        v8 =  (v1 +  (v5[i3] -  (i2 *  ( (i2 | v1)  & v3) ) ) ) ;
      }
    }
    for(i3 = 1; i3 < 15; i3 += 2) {
      for(i1 = 0; i1 < 15; i1 += 1) {
        g5 =  ( (i2 -  (g3 * g2) )  +  ( (v0 |  ( (v5[i3] +  (g6[i1] - g5) )  ^ i2) )  & g3) ) ;
        v1 =  ( (g5 -  ( ( (v0 | v5[i3])  & i2)  *  (g6[i1] ^  ( (g3 - g2)  + g5) ) ) )  +  ( (v0 & v5[i3])  * i2) ) ;
        g3 =  ( (g2 -  ( (v5[i3] & i2)  * g3) )  +  ( ( (g5 +  ( (g6[i1] * v0)  - g2) )  ^ v5[i3])  |  (i2 & g3) ) ) ;
      }
    }
    for(i7 = 2; i7 < 32; i7 += 2) {
      for(i2 = 0; i2 < 10; i2 += 2) {
        for(i3 = 1; i3 < 15; i3 += 2) {
          for(i1 = 0; i1 < 15; i1 += 1) {
            v5[i3] =  ( (i0 -  ( ( ( ( (g6[i1] + v5[i3])  ^ g6[i1])  |  (v3 - g6[i1]) )  & g2)  *  ( (g2 & g1)  * i0) ) )  + g6[i1]) ;
            g1 =  (g1 +  ( (v3 *  ( (i0 |  (g6[i1] ^ g6[i1]) )  & v5[i3]) )  - g2) ) ;
            v4[i2] =  ( ( (g6[i1] * g6[i1])  -  (v3 &  (i0 |  ( (g1 + g6[i1])  ^ g2) ) ) )  + g2) ;
          }
        }
      }
      i3 = 7;
      if( (i2 +  ( (v1 *  (g1 &  (v7 |  ( (i2 +  (i0 -  (g7 * v6) ) )  ^  (i2 & v1) ) ) ) )  - g1) ) ) {
        continue;
      }
    }
    for(i3 = 1; i3 < 15; i3 += 2) {
      for(i4 = 0; i4 < 15; i4 += 1) {
        v1 =  ( (g2 -  (v0 *  ( ( (v9[i4] ^  ( (g5 - v5[i3])  + i0) )  | v2)  &  ( (v3 & v0)  * g2) ) ) )  + v0) ;
        v10 =  ( ( ( (v0 & g2)  * i0)  -  (v9[i4] | v2) )  + v0) ;
        v8 =  ( ( ( (v9[i4] & v5[i3])  * i0)  -  ( (v2 ^ g2)  |  (v0 + v0) ) )  +  ( (g5 *  (v3 & v9[i4]) )  - v5[i3]) ) ;
        g7 =  ( (v0 -  ( (v3 & v2)  *  ( (g2 ^ v0)  |  ( (i0 -  (v9[i4] * g5) )  + v5[i3]) ) ) )  + v0) ;
      }
    }
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i3 = 1; i3 < 15; i3 += 2) {
        for(i1 = 0; i1 < 15; i1 += 1) {
          for(i4 = 0; i4 < 15; i4 += 1) {
            g1 =  ( (v2 -  ( ( (g4 | v9[i4])  & v1)  * v5[i3]) )  + i3) ;
            g0[i0] =  ( (v5[i3] -  ( (v1 &  (v9[i4] | g4) )  *  (i3 ^ v2) ) )  + v5[i3]) ;
            g1 =  (v9[i4] +  (v2 -  ( (g4 & v5[i3])  *  ( (v1 ^ i3)  |  (v9[i4] + v2) ) ) ) ) ;
            g6[i1] =  ( (v5[i3] -  ( (v2 & i3)  *  ( ( ( (v1 - g4)  + v9[i4])  ^  (v5[i3] *  (v2 & i3) ) )  | v1) ) )  + g4) ;
          }
        }
      }
    }
  }
  i2 = 8;
  i1 = 0;
  if( ( ( ( (v1 & v0)  *  (v4[i2] | g5) )  - i1)  +  (v6 ^  (v1 + v6) ) ) ) {
    return  ( (v0 -  (v1 * i1) )  +  ( ( (v1 ^  ( (v4[i2] - v6)  + v6) )  | v3)  &  (g5 * v0) ) ) ;
  }
  i0 = 9;
  i4 = 11;
  return  (g0[i0] +  (i3 -  ( (g4 &  ( (v9[i4] ^ g2)  | g0[i0]) )  * i3) ) ) ;
}
