#include "./out.1.0.types.h"

// function 0
int main() {
  unsigned i0 = 0;
  unsigned i1 = 0;
  unsigned i2 = 0;
  unsigned i3 = 0;
  unsigned i4 = 0;
  unsigned i5 = 0;
  unsigned i6 = 0;
  unsigned i7 = 0;
  T2 v0 = 6179563451487997987ULL;
  T22 v1 = 8977538606105309573ULL;
  T0 v2 = 14225597177018628769ULL;
  T14 v3 = 5230508569180531430ULL;
  T11 v4 = 6824714858705320531ULL;
  T29 v5 = {5211ULL,2116ULL,871ULL,7719ULL,3434ULL,1819ULL};
  T18 v6 = 11380219769268446545ULL;
  T9 v7 = 9089835020511156946ULL;
  T29 v8 = {2801ULL,9717ULL,4400ULL,4919ULL,1838ULL,3435ULL};
  T34 v9 = {18ULL,76ULL,44ULL,34ULL,37ULL,3ULL,80ULL,16ULL,8ULL};
  T28 v10 = {88ULL,87ULL,5ULL,68ULL,38ULL,76ULL,55ULL,11ULL,25ULL,77ULL,75ULL,79ULL};
  T1 v11 = 11791309158797935362ULL;
  T25 v12 = {41ULL,65ULL,46ULL,88ULL,7ULL,67ULL,89ULL,4ULL,19ULL,96ULL,65ULL,47ULL};
  T23 v13 = 8498335968435620ULL;
  for(i2 = 0; i2 < 9; i2 += 3) {
    g3 =  (i0 +  ( ( (i3 & i3)  * v4)  -  (v11 |  (v9[i2] ^ g5) ) ) ) ;
    g4 =  ( ( (i3 *  (v4 &  ( (v9[i2] ^ v11)  | i3) ) )  -  ( (i0 - g5)  + i3) )  + v4) ;
    v0 =  (i3 +  ( ( (g5 & v9[i2])  *  ( (i3 ^ v11)  | v4) )  - i0) ) ;
    v1 =  ( (i3 -  ( (i3 &  (v9[i2] | g5) )  *  (v11 ^  (v4 + i0) ) ) )  + i3) ;
  }
  for(i0 = 2; i0 < 10; i0 += 2) {
    for(i1 = 0; i1 < 15; i1 += 1) {
      for(i2 = 0; i2 < 9; i2 += 3) {
        v3 =  ( ( (g6[i1] *  (v4 &  (v2 | v11) ) )  - v9[i2])  +  ( (g0[i0] +  (g7 - g6[i1]) )  ^ v4) ) ;
        v9[i2] =  (v11 +  ( (g0[i0] *  (g7 &  (v9[i2] |  ( ( (g6[i1] - v4)  +  (v2 * v11) )  ^  (g0[i0] & g7) ) ) ) )  - v9[i2]) ) ;
        g2 =  ( ( ( (g6[i1] &  (v2 |  ( (v11 + g0[i0])  ^ v9[i2]) ) )  * g7)  - v4)  +  (g6[i1] - v2) ) ;
        g0[i0] =  (v9[i2] +  (g6[i1] -  ( ( (v11 |  (g7 ^  ( (g0[i0] - v4)  + v2) ) )  &  (v9[i2] * g6[i1]) )  * v11) ) ) ;
        v6 =  (v4 +  (g6[i1] -  ( ( ( (v9[i2] ^ g7)  | v11)  & v2)  *  (g0[i0] + v4) ) ) ) ;
      }
    }
  }
  for(i5 = 2; i5 < 74; i5 += 2) {
    for(i1 = 0; i1 < 15; i1 += 1) {
      for(i2 = 0; i2 < 9; i2 += 3) {
        for(i3 = 2; i3 < 12; i3 += 2) {
          v9[i2] =  (v3 +  ( ( (g1 &  ( (v2 ^  (g6[i1] + v10[i3]) )  | g1) )  *  ( (v5.s2 * v5.s5)  - v5.s3) )  - v3) ) ;
          v9[i2] =  ( ( (v3 *  ( ( (g6[i1] ^ v5.s5)  | v10[i3])  & g1) )  -  ( (v5.s3 - v2)  + v5.s2) )  +  (g1 * v3) ) ;
        }
      }
    }
    for(i0 = 2; i0 < 10; i0 += 2) {
      g4 =  ( ( (g3 * g0[i0])  -  (v4 &  (v7 |  (v0 ^  (g3 +  (g0[i0] - v4) ) ) ) ) )  + v7) ;
      g1 =  (g3 +  ( (v7 *  (v0 &  (v4 | g0[i0]) ) )  - g3) ) ;
      v5.s0 =  ( ( (v0 *  (v4 & g3) )  -  (v7 |  (g0[i0] ^ v0) ) )  +  ( (v4 -  (g3 * v7) )  +  (g0[i0] & v0) ) ) ;
      v5.s1 =  ( ( (v4 * g3)  -  ( (v0 | v7)  &  (g0[i0] ^  ( (v4 - g3)  + v0) ) ) )  + v7) ;
      v5.s5 =  ( ( ( (v4 & g0[i0])  * v0)  - g3)  +  ( (v7 ^  ( (v4 - g0[i0])  +  (v0 * g3) ) )  |  (v7 & v4) ) ) ;
      g3 =  ( ( (v4 * g3)  -  ( ( (v7 ^ g0[i0])  |  (v0 + v4) )  & g3) )  +  (v7 -  (g0[i0] * v0) ) ) ;
      v4 =  ( ( (v7 * g0[i0])  -  ( ( (v0 ^ v4)  | g3)  &  ( (v7 - g0[i0])  + v0) ) )  +  (v4 * g3) ) ;
    }
    for(i7 = 0; i7 < 48; i7 += 3) {
      for(i0 = 2; i0 < 10; i0 += 2) {
        for(i1 = 0; i1 < 15; i1 += 1) {
          for(i2 = 0; i2 < 9; i2 += 3) {
            v9[i2] =  (g5 +  ( ( ( (v3 | v7)  & v5.s3)  * g3)  -  (g6[i1] ^  (v5.s5 +  (v9[i2] - g1) ) ) ) ) ;
            g0[i0] =  ( (g5 -  (g6[i1] *  (v5.s5 & g3) ) )  +  (v3 | v7) ) ;
            v0 =  ( ( ( (g3 & v9[i2])  *  ( ( (g6[i1] +  (g4 -  (v5.s5 * v5.s3) ) )  ^ g1)  |  (v3 & g5) ) )  - v7)  + g3) ;
            g5 =  ( (v5.s5 -  ( (v9[i2] & v5.s3)  *  (g5 |  ( (g4 + v3)  ^  (v7 - g3) ) ) ) )  +  (g1 * g6[i1]) ) ;
            v7 =  ( ( (v9[i2] * v5.s5)  -  (g5 &  (v5.s3 | g1) ) )  +  (g6[i1] ^ g4) ) ;
          }
        }
      }
      for(i1 = 0; i1 < 15; i1 += 1) {
        g6[i1] =  (v5.s4 +  (g7 -  ( (v5.s2 & g4)  *  (v5.s1 |  (i1 ^ v3) ) ) ) ) ;
        g2 =  ( ( (g7 *  ( (g4 | v3)  &  (v5.s2 ^  (v5.s4 + i1) ) ) )  - i1)  +  (v5.s1 - v4) ) ;
        v8.s2 =  ( ( (i1 *  (v5.s2 & g4) )  - g7)  +  ( ( (v5.s1 + v3)  ^ i1)  |  ( (v5.s4 * v4)  - i1) ) ) ;
        v8.s4 =  ( ( ( (v5.s2 & v5.s4)  *  ( (v3 ^ g4)  |  ( (v5.s1 - v4)  + g7) ) )  - i1)  + i1) ;
        v8.s5 =  ( ( (v5.s4 *  (g7 & i1) )  -  (v5.s2 | v3) )  +  (i1 ^ v5.s1) ) ;
      }
    }
    for(i1 = 0; i1 < 15; i1 += 1) {
      for(i2 = 0; i2 < 9; i2 += 3) {
        for(i3 = 2; i3 < 12; i3 += 2) {
          v4 =  ( (v11 - v10[i3])  +  ( ( (v10[i3] |  (g7 ^ g6[i1]) )  & v11)  * v10[i3]) ) ;
          g7 =  (g6[i1] +  ( ( ( (g7 | v10[i3])  & v11)  * v10[i3])  -  ( (g6[i1] + g7)  ^ v10[i3]) ) ) ;
          g5 =  ( ( (v10[i3] * g7)  -  ( (g6[i1] |  ( ( (v10[i3] - v11)  + v10[i3])  ^  (g7 *  (g6[i1] & v10[i3]) ) ) )  & v11) )  + v10[i3]) ;
          g4 =  ( ( (g7 *  (v10[i3] & v11) )  -  ( (v10[i3] ^ g6[i1])  |  ( (g7 - v10[i3])  + v11) ) )  + v10[i3]) ;
          v9[i2] =  ( ( ( (g6[i1] & v10[i3])  *  ( (v10[i3] ^  (g7 + v11) )  | g6[i1]) )  - v10[i3])  +  (v10[i3] -  (g7 * v11) ) ) ;
        }
      }
    }
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i3 = 2; i3 < 12; i3 += 2) {
        g0[i0] =  ( ( ( ( (g3 |  ( (v6 + v10[i3])  ^  ( (g0[i0] * i0)  - g3) ) )  & v6)  * v10[i3])  - g0[i0])  + i0) ;
        v10[i3] =  ( ( (g0[i0] *  ( (i0 | g3)  & v6) )  - v10[i3])  + g0[i0]) ;
        v4 =  ( (g3 -  ( (g0[i0] &  (v10[i3] |  (v6 ^ i0) ) )  * g3) )  +  (g0[i0] + v10[i3]) ) ;
      }
    }
    g3 =  ( (v0 -  (g7 *  ( (g1 | v8.s4)  & v8.s3) ) )  + v2) ;
    v7 =  ( ( (v0 * v8.s3)  -  (v2 &  (v8.s4 | v2) ) )  + v11) ;
    v4 =  (g7 +  ( ( (v2 &  (v0 | v11) )  * g1)  - i1) ) ;
    g3 =  (g1 +  (v2 -  (v8.s4 *  ( (v3 | v8.s3)  & v11) ) ) ) ;
    v7 =  ( (i1 -  ( ( (v8.s4 | v0)  &  (v2 ^ g7) )  *  (g1 +  (v3 - v8.s3) ) ) )  + v8.s0) ;
    i1 = 12;
    i3 = 11;
    i1 = 6;
    if( ( (g2 - g4)  +  (g7 *  ( (g1 |  (g5 ^  (g2 + g4) ) )  & g7) ) ) ) {
      for(i0 = 2; i0 < 10; i0 += 2) {
        for(i3 = 2; i3 < 12; i3 += 2) {
          v0 =  ( (v8.s3 - v3)  +  (g2 *  (v1 &  (v10[i3] |  (v8.s1 ^ i2) ) ) ) ) ;
          g1 =  ( ( (g0[i0] * v3)  -  ( (g4 | g2)  &  ( ( (v1 -  ( (v10[i3] & v8.s1)  * i2) )  + i2)  ^ v8.s3) ) )  + g0[i0]) ;
          v11 =  ( ( (v3 *  (v10[i3] &  (v1 | i2) ) )  - g0[i0])  +  (g4 ^  (i2 +  ( ( (v8.s1 & v8.s3)  * g2)  - v3) ) ) ) ;
        }
      }
    }
    else if( ( ( (g7 *  (i1 &  (g6[i1] | g7) ) )  -  (v2 ^  (g7 +  (i4 -  (g2 * g7) ) ) ) )  + i1) ) {
      v3 =  (i0 +  ( ( (v6 & v5.s3)  *  (i0 | g3) )  - v5.s5) ) ;
      g7 =  ( ( ( (v5.s3 &  (i0 |  (v6 ^ v5.s5) ) )  * g3)  - i0)  + v5.s3) ;
      g5 =  ( (g3 -  ( ( ( ( (v6 + i0)  ^ i0)  | v5.s3)  & v5.s5)  * g3) )  + v6) ;
    }
    else if( ( (g3 -  (v2 *  (v1 & i1) ) )  +  (g4 | v7) ) ) {
      for(i1 = 0; i1 < 15; i1 += 1) {
        v2 =  ( (i3 -  (g6[i1] *  ( (v2 |  (i1 ^  (g1 + v6) ) )  & v11) ) )  +  (v4 - i0) ) ;
        v2 =  (i3 +  (i1 -  (v4 *  (i0 &  (g6[i1] | g1) ) ) ) ) ;
      }
      v0 =  ( ( (v3 *  (g4 &  (g3 | v7) ) )  - g3)  + g2) ;
      v8.s0 =  ( (v3 -  (v7 *  (v11 &  (g3 | v6) ) ) )  +  (g4 ^ g2) ) ;
      v8.s1 =  (v11 +  ( (v6 *  ( ( (g4 ^ g3)  |  (g3 +  (v3 - g2) ) )  & v7) )  - g3) ) ;
      v8.s2 =  ( (v6 -  (g4 * g3) )  +  ( (v11 | g3)  & g3) ) ;
      v8.s4 =  ( (v11 -  (v3 * g3) )  +  ( ( (g3 ^  ( (g2 - g4)  + v7) )  | v6)  & g3) ) ;
      g2 =  ( (v7 -  (g2 *  (g3 &  (g3 | g3) ) ) )  + v6) ;
      v2 =  ( (v6 -  (g3 *  (g3 &  ( (v3 ^ v11)  | v7) ) ) )  +  (g3 + g4) ) ;
      for(i6 = 1; i6 < 67; i6 += 3) {
        i0 = 6;
        i2 = 7;
        i3 = 9;
        if( ( ( (v1 *  (v10[i3] & v2) )  - g1)  +  (v7 |  (g0[i0] ^ v11) ) ) ) {
          break;
        }
        for(i0 = 2; i0 < 10; i0 += 2) {
          g0[i0] =  (i2 +  (g3 -  (g0[i0] *  (v11 &  ( ( (v8.s4 + v8.s2)  ^ v4)  | g1) ) ) ) ) ;
          v2 =  (v11 +  ( (g0[i0] *  ( (i2 | g1)  &  (g3 ^ g4) ) )  - v8.s4) ) ;
        }
      }
      for(i1 = 0; i1 < 15; i1 += 1) {
        g1 =  ( (v5.s2 -  ( ( ( ( (v5.s3 +  (g6[i1] - i1) )  ^ v0)  |  (v5.s1 *  (v6 & v5.s2) ) )  & v5.s3)  * g6[i1]) )  + i1) ;
        g3 =  ( (i1 - g6[i1])  +  (v5.s3 *  (v5.s2 &  (v5.s1 |  (v6 ^  (v0 + i1) ) ) ) ) ) ;
        v6 =  ( ( ( (v5.s2 & i1)  * v5.s1)  - g6[i1])  +  (v0 | v6) ) ;
      }
    }
    else {
      for(i3 = 2; i3 < 12; i3 += 2) {
        v10[i3] =  ( (v8.s3 -  (g4 *  (g1 & v8.s0) ) )  +  (v8.s5 | v1) ) ;
        v10[i3] =  (v8.s3 +  ( ( ( (v8.s5 |  (g1 ^ v8.s1) )  & v1)  *  (g7 + v7) )  - v8.s2) ) ;
      }
    }
    i2 = 6;
    i3 = 4;
    if( (g2 +  ( (v4 *  (v3 & i3) )  -  (v11 |  (g2 ^ v4) ) ) ) ) {
      continue;
    }
  }
  for(i0 = 2; i0 < 10; i0 += 2) {
    v7 =  ( ( (g0[i0] * g4)  -  (g5 &  ( (g3 ^ v7)  |  (g1 +  (v5.s5 - v6) ) ) ) )  + v5.s1) ;
    v5.s0 =  ( (g5 - v6)  +  (g0[i0] *  ( ( (v5.s5 ^  (v5.s1 + v7) )  | g1)  & g3) ) ) ;
    v5.s1 =  ( (g4 -  (v5.s5 *  ( (v5.s1 |  ( (g3 + v6)  ^ g0[i0]) )  & g5) ) )  +  (v7 -  (g1 * g4) ) ) ;
    v5.s2 =  ( ( (g1 *  (g4 &  (v7 |  (v6 ^ g5) ) ) )  -  ( ( (g3 * v5.s1)  -  (v5.s5 & g0[i0]) )  + g1) )  + g4) ;
    v5.s4 =  ( ( (g3 *  ( (g0[i0] | v5.s1)  &  ( (v6 + v5.s5)  ^  (g4 - g1) ) ) )  - v7)  + g5) ;
    v5.s5 =  ( ( ( (g0[i0] &  (v7 |  (g3 ^ g4) ) )  * v5.s5)  - v6)  + g1) ;
    v6 =  ( ( ( (g4 &  (v6 | g3) )  *  (v7 ^ g0[i0]) )  - v5.s5)  +  (g5 + v5.s1) ) ;
    g7 =  ( (g0[i0] - v5.s5)  +  ( ( (g4 |  (g5 ^ v5.s1) )  & g1)  * v7) ) ;
    v5.s0 =  ( (g3 - g1)  +  ( ( ( ( (v5.s5 + g5)  ^ v7)  | g4)  &  ( ( (g0[i0] & v6)  * v5.s1)  - g3) )  * g1) ) ;
    v5.s1 =  (g4 +  ( ( (g3 &  (g5 | g0[i0]) )  * g1)  - v5.s1) ) ;
    v5.s2 =  ( ( ( (g1 & v7)  *  (g3 | v6) )  - g4)  +  (v5.s5 ^  ( (v5.s1 - g0[i0])  + g5) ) ) ;
    v5.s3 =  ( ( ( ( (g4 | v5.s5)  & g5)  *  (g1 ^ g0[i0]) )  - v6)  +  (g3 + v5.s1) ) ;
    v5.s5 =  (v7 +  ( ( (g0[i0] & g1)  *  (v5.s1 | v6) )  - v5.s5) ) ;
  }
  i0 = 2;
  i1 = 11;
  i2 = 0;
  return  ( ( (g6[i1] * v2)  -  (v4 & v11) )  +  ( (g0[i0] ^  ( (g7 - v9[i2])  + g6[i1]) )  |  (v2 * v4) ) ) ;
}

// function 8
int foo8(unsigned x0) {
  unsigned i0 = 0;
  unsigned i1 = 0;
  unsigned i2 = 0;
  unsigned i3 = 0;
  unsigned i4 = 0;
  unsigned i5 = 0;
  T1 v0 = 10569853037320337528ULL;
  T26 v1 = {4491ULL,1460ULL,7133ULL,5640ULL,212ULL};
  T0 v2 = 16029708004077160102ULL;
  T3 v3 = 8027706974981437174ULL;
  T11 v4 = 2223389037528795201ULL;
  for(i0 = 2; i0 < 10; i0 += 2) {
    g2 =  ( (g5 - v2)  +  ( ( (g7 | g3)  & g5)  * g0[i0]) ) ;
    g2 =  ( ( (g7 *  (g3 & g0[i0]) )  - g5)  +  ( (g4 ^ g5)  | g7) ) ;
    g2 =  ( (g7 - g7)  +  ( (g3 &  ( (g5 ^ g4)  |  (v2 + g5) ) )  *  (g0[i0] - g3) ) ) ;
    g3 =  ( ( ( ( (g5 |  (g3 ^ g4) )  &  ( (g3 - g0[i0])  + g7) )  * g5)  -  (g7 * v2) )  + g5) ;
    g0[i0] =  ( ( (g5 *  (g5 &  (g0[i0] |  (v2 ^ g7) ) ) )  -  ( (g3 -  (g4 * g3) )  + g7) )  + g5) ;
  }
  for(i0 = 2; i0 < 10; i0 += 2) {
    g0[i0] =  (i0 +  ( (g1 *  ( ( (v3 ^ g2)  | g7)  & g3) )  - i0) ) ;
    v1.s0 =  ( ( ( (i0 & g7)  *  (g2 | g1) )  -  (v3 ^ g3) )  +  (i0 +  (g7 - g2) ) ) ;
    v1.s4 =  ( (g1 -  ( (g2 & i0)  * g3) )  +  ( (v3 ^  (g7 + g1) )  | g2) ) ;
    v2 =  (g3 +  ( ( ( (v3 | g2)  &  (i0 ^  ( (g7 - g1)  + g3) ) )  * v3)  -  (g2 *  (i0 & g7) ) ) ) ;
  }
  i0 = 5;
  //  CALL from foo8 to foo6
  foo6( ( (i0 -  ( ( ( (g3 ^ g4)  | g4)  & v1.s4)  * v3) )  + v1.s1) );
  for(i2 = 1; i2 < 51; i2 += 1) {
    for(i1 = 0; i1 < 15; i1 += 1) {
      g7 =  ( ( (v1.s4 *  (g2 &  ( (v2 ^  (v1.s3 + v0) )  | g5) ) )  - g3)  + g7) ;
      v1.s0 =  ( ( (g5 * v1.s1)  -  (g2 & v1.s4) )  +  (v2 | v1.s3) ) ;
      v1.s2 =  (g2 +  ( ( ( ( ( (g2 + v0)  ^  (v1.s1 - g5) )  | v2)  & g3)  * g7)  -  ( (v1.s4 & v1.s3)  * g2) ) ) ;
      v1.s3 =  ( (g2 -  (v0 * v1.s4) )  +  ( (g5 | v1.s1)  &  (g3 ^ g2) ) ) ;
      v1.s4 =  ( (g3 -  (g7 * v0) )  +  ( (v1.s4 |  (v2 ^ g2) )  & v1.s1) ) ;
      g6[i1] =  ( ( ( (g2 &  (g2 | v2) )  *  (g3 ^ g5) )  -  (v1.s3 +  (g7 - v0) ) )  + v1.s4) ;
      g1 =  ( ( ( (g3 & v1.s1)  * v2)  -  (g7 |  ( (g2 + v1.s3)  ^  (v1.s4 - v0) ) ) )  +  (g2 * g5) ) ;
      g4 =  (g2 +  (g5 -  ( (v1.s1 &  (v2 | v1.s4) )  *  (v0 ^ g3) ) ) ) ;
    }
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i1 = 0; i1 < 15; i1 += 1) {
        g3 =  ( ( (g7 *  ( (v1.s1 | v2)  & v0) )  -  (g0[i0] ^ v1.s0) )  +  ( (g0[i0] - v1.s3)  + g7) ) ;
        g6[i1] =  ( ( (v0 * v1.s0)  - v2)  +  ( (v1.s3 | g0[i0])  & g0[i0]) ) ;
        v3 =  (v1.s0 +  ( (g0[i0] *  (g7 & v1.s1) )  -  ( (g0[i0] ^ v0)  |  (v2 + v1.s3) ) ) ) ;
      }
    }
    for(i3 = 2; i3 < 96; i3 += 2) {
      for(i1 = 0; i1 < 15; i1 += 1) {
        v0 =  ( (g7 - g4)  +  ( (g5 &  (g7 | g6[i1]) )  *  (v3 ^  ( (g2 - g7)  + g4) ) ) ) ;
        g3 =  ( ( (g7 *  (g6[i1] &  ( (v3 ^  ( (g2 - g4)  + g4) )  | g7) ) )  -  (g5 * g7) )  + g7) ;
      }
      for(i0 = 2; i0 < 10; i0 += 2) {
        g3 =  ( (v1.s2 - v0)  +  ( ( ( (g0[i0] ^ g7)  |  (g3 + v1.s0) )  & v1.s4)  * v1.s0) ) ;
        g1 =  ( (v1.s2 -  (v1.s4 *  ( (g7 | g3)  &  ( (v1.s0 + v0)  ^ v1.s0) ) ) )  +  (g0[i0] - v1.s2) ) ;
        v1.s2 =  (v1.s4 +  ( ( ( (g7 | g3)  &  (g0[i0] ^ v1.s0) )  * v0)  -  ( ( ( (v1.s0 & v1.s2)  * v1.s4)  - g7)  + g3) ) ) ;
        v1.s3 =  ( ( ( (v0 & g0[i0])  *  ( ( (v1.s0 + g3)  ^  (g7 - v1.s4) )  | v1.s2) )  - v1.s0)  + v0) ;
        v1.s4 =  ( (v1.s4 - g0[i0])  +  (g3 *  ( ( ( (v1.s2 + v1.s0)  ^  (v1.s0 - v0) )  |  ( (g7 & v1.s4)  * g0[i0]) )  & g3) ) ) ;
      }
      for(i1 = 0; i1 < 15; i1 += 1) {
        g5 =  (v0 +  (v2 -  ( ( ( (g6[i1] ^  (g1 + v0) )  |  (v0 -  (v2 * g6[i1]) ) )  & g1)  * v0) ) ) ;
        g7 =  ( (v0 -  (v0 *  ( ( (g6[i1] ^ v2)  |  (g1 + v0) )  &  ( (v0 * g6[i1])  - v2) ) ) )  + g1) ;
      }
      for(i4 = 2; i4 < 82; i4 += 2) {
        for(i1 = 0; i1 < 15; i1 += 1) {
          v0 =  ( (g5 -  ( ( (g5 | g5)  &  ( (g7 + g6[i1])  ^  ( (g3 *  (g6[i1] & g5) )  - g5) ) )  * g5) )  + g7) ;
          g6[i1] =  ( ( (g5 * g7)  - g6[i1])  +  ( (g3 |  (g5 ^ g5) )  &  (g6[i1] + g5) ) ) ;
          g1 =  ( (g5 -  (g6[i1] * g5) )  +  (g3 &  ( (g7 ^ g6[i1])  | g5) ) ) ;
        }
        i0 = 7;
        i1 = 1;
        // BACKEDGE CALL from foo8 to foo11
        if (ccall_check_8_11-- > 0)
          foo11( ( ( (v1.s3 * v1.s1)  -  ( (v1.s2 | g6[i1])  & g7) )  + g1) );
      }
      v3 =  ( ( ( (v2 & g5)  *  (g1 | v0) )  - v2)  +  (i0 ^ v2) ) ;
      v0 =  (i0 +  ( ( ( (v2 | g5)  & g1)  * v0)  - v2) ) ;
      v1.s1 =  ( ( ( (i0 & g1)  *  (v0 | v2) )  - g5)  + v2) ;
      v1.s3 =  ( (v2 -  ( (g5 & v2)  *  (i0 |  (g1 ^  (v0 + v2) ) ) ) )  + g5) ;
      v1.s4 =  (v2 +  ( ( (g1 & g5)  * v2)  -  ( ( (v0 + i0)  ^  (v2 - g1) )  | g5) ) ) ;
      v0 =  ( (g1 -  (v0 *  ( (v2 |  ( ( (g5 -  (v2 *  (i0 & g1) ) )  + v0)  ^ v2) )  & g5) ) )  + v2) ;
      g2 =  ( ( ( (g5 &  (v0 |  (i0 ^ v2) ) )  * v2)  - g1)  +  (g5 + v0) ) ;
    }
    // BACKEDGE CALL from foo8 to foo17
    if (ccall_check_8_17-- > 0)
      foo17( ( ( (g3 *  ( (g5 |  ( (v3 + g2)  ^ g2) )  & g7) )  - g3)  + g5) );
    for(i0 = 2; i0 < 10; i0 += 2) {
      g4 =  ( (g1 - v0)  +  ( ( (v1.s2 | g0[i0])  & g3)  * g7) ) ;
      v0 =  ( ( (v1.s3 * g7)  -  (g7 &  ( (g1 ^ g3)  |  (g7 + v0) ) ) )  + g0[i0]) ;
      g3 =  ( (v0 -  (g0[i0] * g7) )  +  ( ( (g7 ^ v1.s3)  | v1.s2)  &  ( ( (g3 * g7)  - g1)  +  (v0 & g0[i0]) ) ) ) ;
    }
  }
  for(i0 = 2; i0 < 10; i0 += 2) {
    v1.s1 =  ( (g4 - v2)  +  (v2 *  (g1 &  (v2 | g1) ) ) ) ;
    v1.s2 =  ( (v2 -  ( ( ( (g4 ^ v2)  |  (g1 +  (v2 -  (g1 * v2) ) ) )  & g4)  *  (v2 & g1) ) )  + v2) ;
    v1.s3 =  (v2 +  (g1 -  ( ( (v2 | v2)  & g1)  *  ( ( (g4 - v2)  + g1)  ^ v2) ) ) ) ;
    g0[i0] =  ( ( (g1 * v2)  - g1)  +  (v2 &  ( (v2 ^ g4)  |  ( (g1 - v2)  + g1) ) ) ) ;
  }
  i0 = 9;
  i1 = 1;
  if( (v1.s3 +  ( (g2 *  ( (g5 |  (v2 ^ v0) )  &  (g1 + g7) ) )  - v1.s3) ) ) {
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i1 = 0; i1 < 15; i1 += 1) {
        g1 =  ( ( (g5 *  ( (v1.s3 |  (g2 ^ g1) )  & v1.s2) )  -  ( (v2 - v1.s1)  +  ( (g5 & v1.s2)  * v1.s0) ) )  + g7) ;
        g0[i0] =  (v2 +  ( (g1 * g7)  -  ( (v1.s3 |  ( (g5 + g2)  ^ v1.s0) )  &  (v1.s2 - v1.s2) ) ) ) ;
        g6[i1] =  (v1.s3 +  (v1.s2 -  ( ( (g2 | g1)  &  (v1.s0 ^ v1.s1) )  * v1.s2) ) ) ;
      }
    }
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i1 = 0; i1 < 15; i1 += 1) {
        g7 =  ( ( ( (g1 & v1.s1)  *  ( (g6[i1] ^ v1.s2)  | v0) )  - v1.s0)  +  ( (v1.s4 - i0)  + v0) ) ;
        g0[i0] =  ( ( (g1 *  (i0 & v1.s0) )  -  ( ( ( ( (g6[i1] * v1.s1)  - v0)  + v0)  ^ v1.s2)  |  (v1.s4 & g1) ) )  + i0) ;
        v1.s0 =  ( ( ( (g1 &  (v1.s1 | v0) )  * v1.s0)  - i0)  +  (v1.s4 ^ v1.s2) ) ;
        v1.s1 =  ( (i0 - v1.s0)  +  ( (g1 & v1.s4)  *  (v1.s1 | v1.s2) ) ) ;
        v1.s2 =  ( ( ( ( ( (g1 ^  ( (g6[i1] - v1.s0)  + v1.s4) )  |  (v0 * i0) )  &  (v0 & v1.s2) )  * v1.s1)  - g1)  + g6[i1]) ;
        g1 =  (g6[i1] +  (v1.s0 -  ( ( ( ( (v1.s2 +  (v1.s1 - i0) )  ^ g1)  |  (v1.s4 * v0) )  &  (v0 & g6[i1]) )  * v1.s0) ) ) ;
        g3 =  (v1.s2 +  (v0 -  (g1 *  (v1.s1 &  ( (g6[i1] ^ v1.s4)  |  (v0 +  ( (i0 * v1.s0)  -  (v1.s2 & v0) ) ) ) ) ) ) ) ;
      }
    }
    for(i5 = 0; i5 < 83; i5 += 2) {
      for(i0 = 2; i0 < 10; i0 += 2) {
        for(i1 = 0; i1 < 15; i1 += 1) {
          g4 =  (g7 +  ( (v1.s2 *  ( (g0[i0] | g0[i0])  & v1.s0) )  - v3) ) ;
          g7 =  (v0 +  ( ( ( ( (v3 ^ v2)  | g0[i0])  & g7)  * v1.s0)  -  ( (g0[i0] -  (v1.s3 * g4) )  + v1.s2) ) ) ;
          v0 =  ( ( ( ( (v0 | g0[i0])  & v1.s2)  * g4)  - v3)  + v2) ;
          g0[i0] =  ( (v1.s3 - v0)  +  (v2 *  (v1.s2 &  (g0[i0] | g0[i0]) ) ) ) ;
          g6[i1] =  ( ( (v3 *  (g0[i0] & g0[i0]) )  - v1.s0)  +  ( (v1.s2 ^  ( (g7 - v0)  + g4) )  |  (v2 *  (v1.s3 & v3) ) ) ) ;
        }
      }
      for(i1 = 0; i1 < 15; i1 += 1) {
        v1.s0 =  ( ( ( (g4 &  (v3 | v1.s3) )  *  (v3 ^ g2) )  -  (g1 + v1.s2) )  +  (g6[i1] - i0) ) ;
        v1.s1 =  (v3 +  (v1.s4 -  ( ( ( ( ( (v3 - v1.s2)  + i0)  ^ v1.s3)  | g6[i1])  & g2)  *  (v1.s0 * g4) ) ) ) ;
        v1.s2 =  ( ( ( (v3 &  (g2 |  (g4 ^ v3) ) )  * g6[i1])  - g1)  + i0) ;
        v1.s3 =  ( ( (g6[i1] * v3)  -  ( (v1.s0 | v3)  & i0) )  + g1) ;
        v1.s4 =  ( ( (v1.s3 *  (v1.s4 & v1.s2) )  -  ( (v3 ^ v1.s0)  | g4) )  +  (i0 +  ( ( (g2 & g6[i1])  * v3)  - g1) ) ) ;
        v3 =  (v1.s4 +  (v1.s3 -  (g6[i1] *  ( (v1.s2 | g2)  &  (v3 ^  (g1 +  (v3 - v1.s0) ) ) ) ) ) ) ;
      }
    }
    for(i0 = 2; i0 < 10; i0 += 2) {
      g1 =  (v1.s2 +  (v3 -  ( ( (v3 | v0)  & g2)  * v1.s1) ) ) ;
      g3 =  ( ( (v3 *  ( (v3 | v1.s4)  &  (g7 ^ v1.s1) ) )  - g2)  +  ( (v0 - v1.s2)  + v3) ) ;
      g2 =  ( (v3 -  (g7 * g2) )  +  (v0 &  ( ( (v1.s2 + v1.s4)  ^ v3)  | v1.s1) ) ) ;
      g0[i0] =  ( ( (v0 * v1.s1)  -  (v3 &  (g2 | g7) ) )  + v3) ;
      g3 =  ( (g2 -  (g7 * v1.s4) )  +  (v1.s1 &  ( (v3 ^  ( (v3 -  (v0 * v1.s2) )  +  (g2 & g7) ) )  | v1.s4) ) ) ;
    }
  }
  else {
    for(i0 = 2; i0 < 10; i0 += 2) {
      g1 =  (v1.s2 +  ( ( (i0 & g0[i0])  * g2)  -  ( (g5 ^  ( ( (g1 * v2)  - v1.s2)  + i0) )  | g0[i0]) ) ) ;
      v2 =  (i0 +  ( ( (v2 &  ( ( ( (g5 -  (v1.s2 * g2) )  + g1)  ^ g0[i0])  | i0) )  * v2)  - g5) ) ;
    }
  }
  for(i0 = 2; i0 < 10; i0 += 2) {
    g3 =  (v1.s0 +  ( ( (v2 & v1.s3)  *  (v1.s1 | g4) )  - v1.s4) ) ;
    g4 =  ( ( (v3 *  (v2 & v1.s1) )  -  (g4 |  (v1.s4 ^  (v1.s3 + v1.s0) ) ) )  +  (g0[i0] - v3) ) ;
    g5 =  ( ( ( (g0[i0] & v1.s1)  * v1.s0)  - v2)  +  (v3 | v1.s4) ) ;
    g4 =  ( (v2 - v1.s4)  +  ( ( (v1.s3 | g4)  &  (v1.s1 ^  (g0[i0] + v3) ) )  *  (v1.s0 - v2) ) ) ;
    v1.s1 =  ( ( (v1.s0 *  (g4 & v1.s3) )  -  (v3 |  (g0[i0] ^  (v1.s1 + v2) ) ) )  + v1.s4) ;
    v1.s2 =  (g4 +  (v1.s3 -  (v1.s0 *  ( ( (v1.s4 ^  (g0[i0] + v1.s1) )  | v3)  &  (v2 - g4) ) ) ) ) ;
  }
  i0 = 5;
  return  ( ( (i0 * v1.s4)  -  ( (g7 |  (g4 ^ g4) )  & v3) )  +  (v3 +  (g3 - v1.s3) ) ) ;
}

// function 14
int foo14(unsigned x0) {
  unsigned i0 = 0;
  unsigned i1 = 0;
  unsigned i2 = 0;
  unsigned i3 = 0;
  unsigned i4 = 0;
  unsigned i5 = 0;
  unsigned i6 = 0;
  unsigned i7 = 0;
  unsigned i8 = 0;
  T19 v0 = 11012691409133909469ULL;
  T27 v1 = {53ULL,31ULL,39ULL,74ULL,56ULL,62ULL};
  T31 v2 = {78ULL,46ULL,51ULL,15ULL,56ULL,59ULL,78ULL};
  T27 v3 = {14ULL,37ULL,0ULL,20ULL,90ULL,76ULL};
  T13 v4 = 4435607014080080233ULL;
  T11 v5 = 18413648346445359016ULL;
  T26 v6 = {4372ULL,3438ULL,8814ULL,4865ULL,9173ULL};
  T1 v7 = 7603785146968781478ULL;
  T26 v8 = {5415ULL,555ULL,8688ULL,5804ULL,7384ULL};
  T31 v9 = {31ULL,89ULL,35ULL,57ULL,1ULL,34ULL,7ULL};
  T32 v10 = {13ULL,52ULL,75ULL,17ULL,79ULL,66ULL,45ULL,2ULL,25ULL,79ULL,8ULL,45ULL,41ULL,11ULL,65ULL};
  for(i3 = 2; i3 < 7; i3 += 3) {
    for(i4 = 0; i4 < 6; i4 += 3) {
      g4 =  (v5 +  (v6.s3 -  ( ( (g4 | g3)  &  (v6.s2 ^ i3) )  * v6.s0) ) ) ;
      g1 =  ( (g3 - g4)  +  ( (v6.s3 &  (i3 |  ( (v6.s0 + v6.s2)  ^ v5) ) )  * v2[i3]) ) ;
      v3[i4] =  ( (v6.s0 - g4)  +  ( (v6.s3 & v6.s2)  *  (g3 |  (v2[i3] ^ v5) ) ) ) ;
      v2[i3] =  ( ( (v5 * i3)  -  (v6.s2 & v2[i3]) )  +  (v6.s0 | v6.s3) ) ;
      v6.s0 =  ( ( (i3 * v5)  -  (v6.s2 &  ( (v2[i3] ^ v6.s0)  | g3) ) )  + g4) ;
      v6.s1 =  ( ( (v6.s2 * g4)  -  ( (v5 | v2[i3])  &  (i3 ^ v6.s0) ) )  +  ( (g3 - v6.s3)  +  (v6.s2 * g4) ) ) ;
      v6.s2 =  ( (i3 -  ( ( (g3 | v6.s2)  & v5)  * v6.s3) )  +  (v2[i3] ^ g4) ) ;
    }
  }
  i0 = 7;
  i3 = 6;
  i4 = 5;
  i5 = 5;
  //  CALL from foo14 to foo11
  foo11( (v0 +  ( ( ( (v0 | v0)  &  ( (g0[i0] + v2[i3])  ^ v6.s2) )  * i3)  -  (v6.s1 - v0) ) ) );
  i2 = 5;
  i4 = 1;
  i5 = 4;
  i2 = 2;
  i1 = 5;
  if( (v3[i4] +  ( ( (v0 & v1[i2])  * i2)  -  (v8.s1 |  ( ( (v3[i4] -  (v0 * v1[i2]) )  + i2)  ^  (v8.s1 & v3[i4]) ) ) ) ) ) {
    i0 = 9;
    i5 = 3;
    if( ( ( (g5 * g0[i0])  -  ( ( (i4 ^ g4)  |  ( ( (g2 * v7)  - g5)  + g0[i0]) )  & i4) )  + g4) ) {
      return  ( ( (g4 *  (g5 & g0[i0]) )  -  (v7 | g2) )  +  ( (i4 + g4)  ^  (g5 - g0[i0]) ) ) ;
    }
    for(i2 = 2; i2 < 6; i2 += 2) {
      for(i5 = 2; i5 < 7; i5 += 3) {
        g3 =  ( ( ( ( (v5 | v9[i5])  & i5)  *  (g4 ^  (i2 + v1[i2]) ) )  -  (v1[i2] -  (g7 * v0) ) )  + v5) ;
        v1[i2] =  (v9[i5] +  ( (v1[i2] * v1[i2])  -  (g7 &  ( (g4 ^ v5)  | i5) ) ) ) ;
        v6.s1 =  ( (v0 - v1[i2])  +  ( (i2 &  ( (v5 ^  (i5 + g4) )  |  (v1[i2] - g7) ) )  * v9[i5]) ) ;
        v6.s2 =  (v1[i2] +  (v1[i2] -  ( ( (g7 |  ( (i5 + i2)  ^ g4) )  & v0)  *  ( (v5 * v9[i5])  - v1[i2]) ) ) ) ;
        v6.s4 =  (v1[i2] +  (g7 -  (v5 *  ( (v0 |  (v9[i5] ^  (g4 +  (i2 - v1[i2]) ) ) )  & i5) ) ) ) ;
      }
    }
    for(i7 = 2; i7 < 16; i7 += 1) {
      for(i0 = 2; i0 < 10; i0 += 2) {
        for(i1 = 0; i1 < 15; i1 += 1) {
          for(i5 = 2; i5 < 7; i5 += 3) {
            g3 =  (i5 +  ( (g2 *  ( (i0 | g4)  &  (v5 ^ g6[i1]) ) )  - v8.s2) ) ;
            g0[i0] =  ( ( (v8.s1 *  (g4 & i0) )  - i0)  +  (g2 | v8.s3) ) ;
            v0 =  (g4 +  ( ( (v8.s2 & i0)  *  (g6[i1] |  (v5 ^  (g2 +  (i5 - v8.s1) ) ) ) )  -  (v8.s3 * v9[i5]) ) ) ;
            g4 =  ( ( (v5 *  ( (g4 |  (i5 ^  (v9[i5] +  (g2 - g6[i1]) ) ) )  &  (i0 * v8.s1) ) )  - v8.s3)  + i0) ;
          }
        }
      }
      for(i0 = 2; i0 < 10; i0 += 2) {
        for(i3 = 2; i3 < 7; i3 += 3) {
          for(i4 = 0; i4 < 6; i4 += 3) {
            for(i1 = 0; i1 < 15; i1 += 1) {
              g0[i0] =  ( ( (i2 * v3[i4])  - v7)  +  (i0 &  ( (g7 ^ g1)  | g1) ) ) ;
              g4 =  ( ( (g7 *  ( ( (g1 ^ v3[i4])  | i0)  & i2) )  - g1)  + v7) ;
              v2[i3] =  ( ( ( (g1 &  (g1 | i0) )  *  (v7 ^ g7) )  - v3[i4])  +  ( (i2 -  (i3 * g1) )  +  (g1 & i0) ) ) ;
              g6[i1] =  ( (v3[i4] - i3)  +  (g1 *  (v7 &  ( (i2 ^ g7)  |  (i0 +  (g1 -  (v3[i4] *  (i3 & g1) ) ) ) ) ) ) ) ;
              v7 =  ( (v3[i4] -  (g1 *  (i0 & v7) ) )  +  ( (g7 ^ i3)  |  (i2 + g1) ) ) ;
            }
          }
        }
      }
    }
    i3 = 6;
    i4 = 3;
    i1 = 9;
    i5 = 5;
    if( ( (v5 -  ( ( (v3[i4] | v5)  &  (v8.s4 ^  ( (i0 - v8.s0)  +  (v8.s2 * v2[i3]) ) ) )  * v9[i5]) )  + g1) ) {
      return  (v9[i5] +  ( (v8.s4 * v8.s2)  -  ( (v2[i3] |  (v8.s0 ^ v5) )  & g1) ) ) ;
    }
  }
  else if( (i1 +  (g6[i1] -  ( (g6[i1] &  (g4 | v1[i2]) )  * g2) ) ) ) {
    for(i0 = 2; i0 < 10; i0 += 2) {
      g7 =  (v4 +  ( ( ( ( (g7 ^ v8.s1)  | v6.s1)  & v8.s3)  *  (v8.s2 + v8.s0) )  - g1) ) ;
      v8.s2 =  ( ( (v8.s3 *  (v6.s0 & v8.s4) )  - g0[i0])  +  (i1 | v8.s0) ) ;
      v8.s3 =  (g0[i0] +  (v8.s3 -  (v6.s0 *  (v8.s0 &  (g7 |  ( (v4 + i0)  ^  (i1 -  ( (v8.s1 & g1)  * v6.s4) ) ) ) ) ) ) ) ;
      v4 =  ( ( (v6.s0 * g7)  -  ( (v6.s1 | v6.s4)  &  ( (v4 + g1)  ^ i1) ) )  + v8.s1) ;
    }
  }
  else {
    v4 =  ( ( (v8.s1 * v8.s2)  -  (v8.s1 &  (g4 | i0) ) )  + v8.s4) ;
    g5 =  (v6.s1 +  ( (v8.s2 *  ( (v8.s2 |  ( (v8.s1 + v8.s1)  ^  ( (v8.s4 * v6.s2)  - i0) ) )  &  (i3 & g3) ) )  - v8.s4) ) ;
    for(i5 = 2; i5 < 7; i5 += 3) {
      v9[i5] =  ( (g1 -  ( (g3 &  (i2 | i3) )  * g5) )  + g1) ;
      v8.s0 =  (g3 +  ( ( ( (i2 |  ( (g1 + i3)  ^ g5) )  & g3)  * i2)  - g1) ) ;
      v8.s3 =  ( ( (i3 *  ( (g5 | g3)  & i2) )  -  ( (g1 + i3)  ^ g5) )  + g3) ;
      v8.s4 =  (g5 +  (g3 -  ( ( (g1 | i2)  & i3)  * g5) ) ) ;
    }
    for(i8 = 0; i8 < 59; i8 += 3) {
      for(i0 = 2; i0 < 10; i0 += 2) {
        g4 =  ( (g0[i0] - v8.s4)  +  ( (v8.s0 &  ( ( ( (v5 - v8.s3)  + g3)  ^ v8.s0)  |  (v8.s1 * g0[i0]) ) )  * v8.s4) ) ;
        g0[i0] =  ( (v8.s4 -  ( (v8.s1 & g0[i0])  * v8.s3) )  +  ( (v8.s0 ^ v8.s0)  | v5) ) ;
        g5 =  ( ( ( (g0[i0] & v8.s0)  *  (v8.s1 |  ( ( (v8.s0 - v8.s3)  + v8.s4)  ^ v5) ) )  - g3)  +  (g0[i0] *  (v8.s0 & v8.s1) ) ) ;
        g1 =  ( ( ( (v8.s0 &  ( (v8.s4 ^  (v8.s1 +  (v8.s0 -  (g3 * v5) ) ) )  | v8.s3) )  * g0[i0])  -  (v8.s0 & v8.s4) )  + v8.s1) ;
        v7 =  ( ( ( (v8.s3 & v8.s0)  * g0[i0])  -  (v5 | v8.s1) )  +  ( (v8.s4 +  (g3 - v8.s0) )  ^  (v8.s3 * v8.s0) ) ) ;
      }
      for(i0 = 2; i0 < 10; i0 += 2) {
        for(i1 = 0; i1 < 15; i1 += 1) {
          for(i5 = 2; i5 < 7; i5 += 3) {
            v9[i5] =  ( (g0[i0] - g6[i1])  +  ( (i1 &  ( ( (v6.s4 +  ( (g5 * v4)  - g0[i0]) )  ^  (g6[i1] & i1) )  | v6.s4) )  * g5) ) ;
            g4 =  ( ( ( (i1 & v6.s4)  * g6[i1])  -  ( ( (g0[i0] + g5)  ^  (v4 - i1) )  | v6.s4) )  + g6[i1]) ;
          }
        }
      }
    }
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i2 = 2; i2 < 6; i2 += 2) {
        for(i4 = 0; i4 < 6; i4 += 3) {
          for(i5 = 2; i5 < 7; i5 += 3) {
            v3[i4] =  ( (i0 -  ( ( (v9[i5] |  (g7 ^ g5) )  & v1[i2])  * g2) )  + i0) ;
            g4 =  ( ( (v9[i5] * g2)  -  ( (v1[i2] | g5)  & i0) )  +  (g7 ^  ( (v9[i5] - g2)  +  ( (v1[i2] & g5)  * i0) ) ) ) ;
            v3[i4] =  ( (v9[i5] - g7)  +  ( ( ( (g2 ^ i0)  | v1[i2])  &  ( (g5 - v9[i5])  +  (g7 *  (g2 & i0) ) ) )  * v1[i2]) ) ;
            g0[i0] =  ( ( (v1[i2] * v9[i5])  - g5)  +  (g2 &  ( (g7 ^  ( (i0 - v1[i2])  +  (v9[i5] * g5) ) )  | g2) ) ) ;
            v8.s1 =  ( ( (g7 *  (v9[i5] &  (i0 |  ( (g2 + v1[i2])  ^  (g5 - g7) ) ) ) )  - v9[i5])  + i0) ;
            v8.s2 =  ( ( (v9[i5] * i0)  - g2)  +  (g7 &  ( (v1[i2] ^ g5)  | v9[i5]) ) ) ;
            v8.s4 =  ( ( (g2 *  (g5 &  (v1[i2] |  ( (i0 +  (v9[i5] - g7) )  ^ g2) ) ) )  - g5)  + v1[i2]) ;
          }
        }
      }
    }
  }
  for(i0 = 2; i0 < 10; i0 += 2) {
    for(i5 = 2; i5 < 7; i5 += 3) {
      v7 =  (v6.s1 +  ( ( (i4 &  (v9[i5] | v5) )  *  ( (g0[i0] + i0)  ^  (v6.s1 - i4) ) )  - v9[i5]) ) ;
      g4 =  ( (v6.s1 - v9[i5])  +  (g0[i0] *  ( (i0 | v5)  & i4) ) ) ;
      g2 =  ( (v9[i5] - v5)  +  ( (v6.s1 & g0[i0])  *  ( ( (i4 +  (i0 - v9[i5]) )  ^ v5)  | v6.s1) ) ) ;
      v7 =  ( ( ( (v5 &  (i4 | i0) )  *  ( ( (v6.s1 -  (v9[i5] * g0[i0]) )  + v5)  ^ i4) )  - i0)  + v6.s1) ;
    }
  }
  i0 = 8;
  i3 = 5;
  i4 = 2;
  i5 = 2;
  return  ( (v0 -  (i3 * v0) )  +  ( (v6.s1 |  (g0[i0] ^  (v2[i3] + v6.s4) ) )  & v0) ) ;
}

// function 22
int foo22(unsigned x0) {
  unsigned i0 = 0;
  unsigned i1 = 0;
  unsigned i2 = 0;
  T21 v0 = 11850788866694860027ULL;
  T4 v1 = 18437625205354089154ULL;
  T4 v2 = 12601757746787799790ULL;
  T20 v3 = 1077496334321316408ULL;
  T3 v4 = 17661089455641596044ULL;
  T6 v5 = 1724375503519513963ULL;
  T2 v6 = 8577646545624527281ULL;
  T20 v7 = 4874704777199011307ULL;
  v2 =  ( ( (g3 * g1)  -  ( (g1 |  (g3 ^  (g4 +  (g3 - g1) ) ) )  &  (g1 * g3) ) )  +  (g4 & g3) ) ;
  v0 =  ( ( (g1 *  ( (g3 | g1)  & g4) )  - g3)  + g1) ;
  v3 =  ( ( (g1 * g3)  -  (g4 &  (g1 | g3) ) )  +  (g1 ^ g3) ) ;
  for(i1 = 0; i1 < 15; i1 += 1) {
    v4 =  ( ( (g5 *  ( ( ( ( (g4 - g5)  + v1)  ^ v2)  | g3)  & g5) )  - g4)  + g5) ;
    v6 =  ( ( ( ( (g3 | g4)  &  (g5 ^  (g5 + v1) ) )  * v2)  - g3)  +  (g4 - g5) ) ;
    g6[i1] =  ( ( (g5 * v1)  -  ( (g3 |  ( (v2 +  (g5 -  ( (g4 & g5)  * v1) ) )  ^ g3) )  & v2) )  + g5) ;
    v2 =  ( ( (g3 * v2)  -  ( ( (g4 ^ g5)  | g5)  & v1) )  + g3) ;
    v0 =  (v2 +  ( ( (g3 &  (v1 | g5) )  * g5)  - g4) ) ;
  }
  i1 = 5;
  i0 = 6;
  i0 = 8;
  if( ( (g6[i1] - g7)  +  (v3 *  ( ( ( (g7 + g7)  ^  ( ( (g6[i1] & g7)  * v3)  - g7) )  | g7)  & g6[i1]) ) ) ) {
    for(i1 = 0; i1 < 15; i1 += 1) {
      g1 =  (v5 +  (v6 -  ( (i0 & g4)  *  (v5 |  (g2 ^ g3) ) ) ) ) ;
      v4 =  ( (g6[i1] -  (v6 *  (v5 & g2) ) )  +  ( (i0 ^ g4)  |  ( (g3 - v0)  + v5) ) ) ;
    }
  }
  else if( ( ( ( (g0[i0] &  (i0 | g5) )  * v5)  -  (g2 ^ v2) )  + g2) ) {
    for(i1 = 0; i1 < 15; i1 += 1) {
      v5 =  ( ( (v1 *  ( ( (v3 ^ i0)  |  (v6 + g6[i1]) )  &  (v1 - g6[i1]) ) )  - v2)  + v0) ;
      v0 =  ( ( ( (g6[i1] &  ( (v0 ^ g6[i1])  | i0) )  * v6)  - v3)  + v2) ;
    }
  }
  else if( ( ( ( ( ( (g5 ^ v6)  | g4)  & v1)  *  ( (g4 - g0[i0])  + g1) )  - v5)  + g2) ) {
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i1 = 0; i1 < 15; i1 += 1) {
        g6[i1] =  ( (g3 -  ( ( (v1 | g6[i1])  & v4)  * v0) )  + g3) ;
        g4 =  ( ( (g6[i1] * v0)  -  (g3 & v4) )  +  (v1 | g6[i1]) ) ;
        g0[i0] =  (v0 +  ( ( (v1 & g3)  *  (v4 | g6[i1]) )  -  (v0 ^ v1) ) ) ;
        v2 =  ( ( (v4 *  (g3 & v0) )  - g6[i1])  +  (v1 |  ( (v4 +  (g3 - v0) )  ^ g6[i1]) ) ) ;
        g3 =  (v4 +  ( ( ( ( (v1 ^  (g3 + v0) )  |  (g6[i1] - v4) )  & v1)  * g3)  - v0) ) ;
      }
    }
  }
  else {
    for(i1 = 0; i1 < 15; i1 += 1) {
      v6 =  ( ( (g1 * g3)  -  ( ( (v2 ^ v5)  |  (g4 +  (g2 - v6) ) )  & g6[i1]) )  +  (g1 *  (g3 & v2) ) ) ;
      g7 =  (v5 +  ( ( ( (v6 | g4)  & g3)  *  (g2 ^ v2) )  - g1) ) ;
    }
  }
  for(i0 = 2; i0 < 10; i0 += 2) {
    g7 =  ( ( ( ( (v2 | v3)  & i0)  *  (g7 ^  (g0[i0] + v1) ) )  -  (g2 -  (v2 * v3) ) )  + i0) ;
    v3 =  ( ( (v1 * g7)  -  (v2 &  (g2 | g0[i0]) ) )  +  ( (v3 +  (i0 - v1) )  ^ g7) ) ;
    g2 =  ( ( (i0 *  (g7 & v1) )  - g0[i0])  +  ( (v3 ^ v2)  |  (g2 + i0) ) ) ;
    g1 =  ( ( (g0[i0] * i0)  - v3)  +  ( (g2 | g7)  &  ( (v2 + v1)  ^ g0[i0]) ) ) ;
  }
  for(i0 = 2; i0 < 10; i0 += 2) {
    for(i1 = 0; i1 < 15; i1 += 1) {
      v2 =  ( ( (g0[i0] *  ( ( (g0[i0] ^  ( (g7 -  ( (v2 & g6[i1])  * v0) )  + g0[i0]) )  | g0[i0])  & g7) )  - v2)  + g6[i1]) ;
      g6[i1] =  (g0[i0] +  ( (g7 *  (v0 & v2) )  -  ( (g6[i1] ^  (g0[i0] + g0[i0]) )  |  (g7 - v0) ) ) ) ;
    }
  }
  for(i0 = 2; i0 < 10; i0 += 2) {
    g2 =  (g7 +  ( (v3 *  (g7 &  (v2 |  (v3 ^  (g7 + g7) ) ) ) )  - v3) ) ;
    v4 =  (g7 +  ( ( ( (v3 | v2)  &  ( (g7 +  (g7 - v3) )  ^ g7) )  * v3)  -  (v2 * g7) ) ) ;
    v2 =  (g7 +  ( ( ( (v3 |  (v2 ^  (g7 + g7) ) )  & v3)  *  (g7 -  (v3 * v2) ) )  - g7) ) ;
    v1 =  ( ( ( (g7 &  (v2 |  (v3 ^  ( ( (g7 * v3)  - g7)  + g7) ) ) )  *  (v2 & v3) )  - g7)  + v3) ;
    g0[i0] =  (g7 +  ( ( ( (v3 | v3)  &  (g7 ^  (g7 + v2) ) )  * g7)  -  (v3 -  ( (v3 & g7)  * g7) ) ) ) ;
  }
  for(i2 = 0; i2 < 30; i2 += 1) {
    for(i0 = 2; i0 < 10; i0 += 2) {
      v1 =  ( (v6 -  ( ( (v2 |  (g0[i0] ^  ( (v2 -  (v6 * g4) )  + v6) ) )  & v2)  * g0[i0]) )  + v2) ;
      v2 =  ( ( ( (v2 &  (g0[i0] | v6) )  * v2)  -  ( (v6 + g4)  ^  (v2 -  (g0[i0] * v6) ) ) )  +  (v2 & v6) ) ;
      g1 =  (v2 +  (v2 -  ( ( ( (v6 ^  ( (v6 - g4)  + g0[i0]) )  |  (v2 * v2) )  & v6)  * v6) ) ) ;
      v3 =  ( ( (g4 *  ( (g0[i0] | v6)  &  (v2 ^  (v6 +  (v2 - g4) ) ) ) )  - g0[i0])  + v6) ;
      v2 =  (g4 +  (g0[i0] -  (v6 *  (v6 &  (v2 | v2) ) ) ) ) ;
    }
    g2 =  ( (g1 -  ( (g1 & v0)  * i0) )  +  ( ( (v5 + v3)  ^  ( (g1 * g1)  - v0) )  | i0) ) ;
    g5 =  (v0 +  ( (v5 *  ( ( ( (v3 + g1)  ^ i0)  | g1)  & v0) )  -  (v5 - v3) ) ) ;
    v4 =  ( (i0 - v3)  +  ( ( ( ( (g1 +  (v0 - g1) )  ^ v5)  | i0)  & v3)  *  (g1 * v0) ) ) ;
    v6 =  ( (v5 - v3)  +  ( ( (v0 | g1)  & i0)  *  ( ( (g1 - v5)  +  (v3 * v0) )  ^ g1) ) ) ;
  }
  for(i0 = 2; i0 < 10; i0 += 2) {
    for(i1 = 0; i1 < 15; i1 += 1) {
      g5 =  (v2 +  ( (g6[i1] *  ( (g3 | g0[i0])  &  (v2 ^ v2) ) )  -  (g6[i1] +  (g3 - g0[i0]) ) ) ) ;
      g0[i0] =  ( ( (v2 *  (v2 &  (g0[i0] | g3) ) )  -  (g6[i1] ^  ( (v2 - v2)  +  (g0[i0] * g3) ) ) )  + g6[i1]) ;
      v2 =  ( ( ( (v2 & g0[i0])  *  (g6[i1] |  (v2 ^  (g3 + v2) ) ) )  - g0[i0])  + g6[i1]) ;
    }
  }
  i0 = 9;
  i1 = 1;
  if( (g2 +  ( (g3 *  (g3 &  ( (g1 ^ v5)  | g2) ) )  - g3) ) ) {
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i1 = 0; i1 < 15; i1 += 1) {
        g3 =  ( ( ( ( (v3 | i0)  &  ( (v0 + i0)  ^  (g5 - g0[i0]) ) )  * v3)  -  (g6[i1] * v1) )  + v3) ;
        g5 =  (i0 +  ( (g6[i1] * i0)  -  (v3 &  ( (v0 ^  (v3 + g0[i0]) )  | v1) ) ) ) ;
        g4 =  ( (v3 -  (g0[i0] * g6[i1]) )  +  (v1 &  ( (v0 ^ i0)  | g5) ) ) ;
      }
    }
  }
  else {
    for(i1 = 0; i1 < 15; i1 += 1) {
      v3 =  (g5 +  (v3 -  ( (g2 & v2)  *  (g5 | g6[i1]) ) ) ) ;
      g3 =  ( ( (g5 *  (v2 & g2) )  -  ( (g6[i1] ^  (i0 +  (g5 - v3) ) )  |  (g5 *  (v2 & g2) ) ) )  + g6[i1]) ;
      g6[i1] =  ( ( (v3 * g5)  - g6[i1])  +  (g5 &  (i0 |  ( ( ( (v2 * g2)  - v3)  + g5)  ^ g6[i1]) ) ) ) ;
      v0 =  (g5 +  ( (v2 *  ( ( (v3 ^  ( (g6[i1] -  (g2 * i0) )  + g5) )  | g5)  & v2) )  - v3) ) ;
    }
  }
  for(i1 = 0; i1 < 15; i1 += 1) {
    v0 =  ( ( ( ( ( (v2 ^ v6)  | g5)  & g3)  * v5)  -  ( ( (i0 *  (v2 & v2) )  - v6)  + g5) )  + g3) ;
    g6[i1] =  (g5 +  ( (v2 * g3)  -  ( (v2 | v5)  &  (i0 ^  ( ( (v6 * g5)  -  (v2 & g3) )  + v2) ) ) ) ) ;
    g6[i1] =  ( (i0 -  (g5 * v6) )  +  ( (g3 |  (v2 ^  ( (v5 - v2)  +  (i0 * g5) ) ) )  & v6) ) ;
  }
  i0 = 3;
  return  ( (g7 -  ( ( (v3 | v2)  &  (v3 ^  (g7 + g7) ) )  * g7) )  + v3) ;
}

