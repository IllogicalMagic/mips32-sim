#include "./out.1.0.types.h"

// function 5
int foo5(unsigned x0) {
  unsigned i0 = 0;
  unsigned i1 = 0;
  unsigned i2 = 0;
  unsigned i3 = 0;
  T7 v0 = 13297901836657640502ULL;
  T35 v1 = {2598ULL,929ULL,4001ULL};
  T11 v2 = 3468006829276891077ULL;
  T15 v3 = 5713001786151272172ULL;
  T9 v4 = 11262526971167671005ULL;
  T7 v5 = 5776929815503715994ULL;
  for(i0 = 2; i0 < 10; i0 += 2) {
    v4 =  ( (g0[i0] -  (g1 *  (g5 &  (g1 |  ( (v1.s1 + g0[i0])  ^ g1) ) ) ) )  +  (g5 - g1) ) ;
    v1.s0 =  ( (v1.s1 -  ( ( (g1 |  (g0[i0] ^  (g1 + g5) ) )  & v1.s1)  * g1) )  + g0[i0]) ;
    v1.s2 =  (g0[i0] +  ( ( ( (g5 |  (v1.s1 ^  ( ( (g1 *  (g1 & g0[i0]) )  - g5)  + v1.s1) ) )  & g1)  * g1)  - g0[i0]) ) ;
    v1.s0 =  ( (g5 -  (g0[i0] * g1) )  +  ( ( ( (g1 +  (v1.s1 - g5) )  ^ g0[i0])  | g1)  & g1) ) ;
  }
  i0 = 8;
  i1 = 7;
  //  CALL from foo5 to foo10
  foo10( ( ( (g3 * v1.s2)  -  (v3 &  (v1.s1 |  (v1.s0 ^  ( ( ( (v2 & g1)  * v0)  - g6[i1])  + g3) ) ) ) )  + v1.s2) );
  i0 = 9;
  if( ( ( (g7 *  (g7 & v4) )  -  (g4 |  (g0[i0] ^  (i0 + g7) ) ) )  + g7) ) {
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i1 = 0; i1 < 15; i1 += 1) {
        v4 =  ( ( ( (v3 & g4)  *  (g6[i1] | v2) )  -  (v2 ^ v3) )  + g4) ;
        v0 =  (v2 +  (v3 -  ( (g4 &  (g6[i1] | v2) )  * v2) ) ) ;
        g0[i0] =  ( ( ( (v2 &  ( (v3 ^  ( (v2 -  (g4 * g6[i1]) )  + v2) )  | v3) )  * v2)  - g4)  +  (g6[i1] & v2) ) ;
        g7 =  (v2 +  ( ( (v2 &  ( (v3 ^ g4)  | g6[i1]) )  * v2)  - v2) ) ;
      }
    }
  }
  else if( ( ( ( (i0 &  ( ( ( ( (g3 * v2)  -  (v3 & v3) )  + v2)  ^ i0)  | g3) )  * v2)  - v3)  + v3) ) {
    for(i0 = 2; i0 < 10; i0 += 2) {
      g2 =  ( ( (g5 *  (g0[i0] & g1) )  -  (v2 | v3) )  +  (g0[i0] ^ g5) ) ;
      g3 =  (g5 +  ( (g1 *  ( ( (g0[i0] ^  (v2 +  ( (v3 * g0[i0])  - g5) ) )  | g1)  & g0[i0]) )  - v2) ) ;
      g7 =  ( ( (g0[i0] *  (g1 & g5) )  -  (v3 |  (g0[i0] ^  (v2 + g0[i0]) ) ) )  + g1) ;
      g4 =  ( (v2 -  ( (g0[i0] &  (v3 |  (g0[i0] ^ g1) ) )  * g5) )  +  (v2 +  (g0[i0] - v3) ) ) ;
      v1.s1 =  (g0[i0] +  ( (g1 *  ( (v3 | g0[i0])  &  (v2 ^ g5) ) )  -  (g0[i0] + g1) ) ) ;
      v1.s2 =  ( ( (v2 * g0[i0])  -  ( ( (g5 ^ g0[i0])  |  (v3 + g1) )  & v2) )  + g0[i0]) ;
    }
  }
  else if( (v4 +  ( ( (v3 & v2)  *  (g7 | g4) )  - v4) ) ) {
    g4 =  (g5 +  (g7 -  ( (i0 &  (g7 | v4) )  *  ( (g5 + g7)  ^  (i0 - g7) ) ) ) ) ;
    v4 =  (g7 +  ( ( ( (g7 |  ( ( (v4 - g5)  + i0)  ^  (g7 * g7) ) )  & v4)  *  (g5 & i0) )  - g7) ) ;
  }
  else {
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i1 = 0; i1 < 15; i1 += 1) {
        v3 =  (i0 +  ( ( (g2 & v0)  *  ( ( (v1.s0 + g0[i0])  ^  (v3 - v4) )  | g5) )  - v1.s2) ) ;
        g2 =  ( ( ( ( ( (v4 ^ i0)  | v1.s2)  & v3)  * v1.s0)  - v0)  +  (g2 +  (g0[i0] - g5) ) ) ;
        g6[i1] =  (g0[i0] +  ( ( (v1.s2 &  ( ( (i0 + g2)  ^  (g5 -  (v0 * v3) ) )  |  (v4 & v1.s0) ) )  * g0[i0])  - v1.s2) ) ;
        v1.s1 =  (v1.s0 +  ( (v4 *  ( ( ( (g0[i0] + v3)  ^ g5)  | i0)  &  (v1.s2 - g2) ) )  -  (v0 *  (v1.s0 & v4) ) ) ) ;
        g3 =  ( (v3 - v0)  +  ( ( ( (i0 ^ v1.s0)  |  (v4 + g0[i0]) )  &  (g5 -  (g2 *  (v1.s2 & v3) ) ) )  * v0) ) ;
      }
    }
  }
  i0 = 9;
  if( ( (v4 - g0[i0])  +  (v3 *  ( ( (g3 ^  ( (g1 - v4)  + g0[i0]) )  | v3)  & g3) ) ) ) {
    return  (g1 +  (v4 -  ( (g0[i0] &  ( (v3 ^ g3)  | g1) )  * v4) ) ) ;
  }
  i1 = 9;
  //  CALL from foo5 to foo12
  foo12( ( ( (g6[i1] *  ( ( ( (g7 + v0)  ^ v2)  | g2)  & v4) )  - g6[i1])  +  (g7 -  (v0 * v2) ) ) );
  //  CALL from foo5 to foo13
  foo13( ( (g1 -  ( (g3 &  (g3 | g5) )  *  ( ( (v4 - g1)  + g3)  ^ g3) ) )  + g5) );
  for(i1 = 0; i1 < 15; i1 += 1) {
    g2 =  ( ( ( ( (g5 | g5)  &  (g6[i1] ^  (v1.s2 + v4) ) )  * v1.s0)  - i0)  + g5) ;
    g3 =  ( ( ( (g5 &  (g5 | v4) )  *  (v1.s0 ^ i0) )  - v1.s2)  + g6[i1]) ;
    v3 =  ( ( ( ( (g6[i1] | g5)  & v1.s0)  *  ( (g5 +  (v4 - v1.s2) )  ^  (i0 * g6[i1]) ) )  - g5)  + v1.s0) ;
    v3 =  ( ( ( ( ( (g5 ^  (v1.s0 + g5) )  |  (i0 - v4) )  & v1.s2)  *  (g6[i1] * g5) )  - v1.s0)  + g5) ;
  }
  i0 = 3;
  i1 = 8;
  //  CALL from foo5 to foo16
  foo16( (v3 +  ( ( (i0 & g2)  *  ( ( ( (g3 - i0)  + g6[i1])  ^ v2)  | g1) )  - v3) ) );
  if( ( ( (g4 * v2)  - i0)  +  ( (i0 |  ( ( (g1 - g4)  + v2)  ^ i0) )  & i0) ) ) {
    for(i0 = 2; i0 < 10; i0 += 2) {
      v1.s0 =  ( ( ( (g0[i0] &  (g3 | v0) )  * g3)  -  (g3 ^ v4) )  + g0[i0]) ;
      g0[i0] =  ( (g3 -  ( ( (g3 | v0)  &  ( (g0[i0] + g3)  ^  (v4 -  (g3 * g3) ) ) )  * v0) )  + g0[i0]) ;
      g3 =  ( (g3 -  ( ( (g3 | g0[i0])  &  ( ( (v0 - v4)  + g3)  ^ g3) )  * g3) )  + g0[i0]) ;
    }
    for(i1 = 0; i1 < 15; i1 += 1) {
      g6[i1] =  ( ( (g7 *  (i0 & g4) )  - g3)  +  ( ( (v0 + g7)  ^ i0)  | g4) ) ;
      v0 =  ( (g3 -  ( (v0 &  (g7 |  (i0 ^  ( (g4 - g3)  + v0) ) ) )  * g7) )  + i0) ;
      g7 =  ( (v0 - g7)  +  ( (i0 &  (g4 | g3) )  *  ( (v0 +  (g7 - i0) )  ^ g4) ) ) ;
    }
    for(i3 = 2; i3 < 38; i3 += 1) {
      for(i1 = 0; i1 < 15; i1 += 1) {
        g4 =  ( ( ( (i0 & g4)  * g3)  - i0)  +  (g6[i1] |  (g6[i1] ^  (i0 +  ( (g4 * g3)  -  (i0 & g6[i1]) ) ) ) ) ) ;
        v1.s0 =  ( (g4 - i0)  +  ( ( (g3 | i0)  & g6[i1])  * g6[i1]) ) ;
        v3 =  (i0 +  ( ( (g3 &  (i0 |  ( (g6[i1] + g4)  ^ g6[i1]) ) )  * i0)  - g3) ) ;
        v2 =  ( ( (i0 * g6[i1])  -  (g3 & g4) )  +  ( (i0 ^ g6[i1])  | i0) ) ;
        v0 =  ( ( ( (g3 &  (g4 | g6[i1]) )  * i0)  -  ( (g6[i1] + i0)  ^ g3) )  +  (g4 - g6[i1]) ) ;
      }
      g7 =  (v1.s0 +  ( (g5 *  ( (i0 | v1.s1)  & v1.s2) )  - i0) ) ;
      g3 =  (v0 +  ( (v1.s0 * g3)  -  (v1.s1 &  ( (g7 ^  (i0 + v1.s2) )  | g5) ) ) ) ;
      v0 =  ( ( ( (v1.s1 &  (g7 | i0) )  *  ( (v0 + i0)  ^ v1.s2) )  - g5)  +  ( (g3 *  (v1.s0 & g5) )  - v1.s1) ) ;
      g2 =  ( ( ( (g3 &  (v1.s2 |  ( (g7 + v1.s0)  ^ i0) ) )  * i0)  - v1.s1)  + g5) ;
    }
    for(i0 = 2; i0 < 10; i0 += 2) {
      v4 =  (g3 +  (v0 -  (i0 *  ( ( ( (g0[i0] +  (v1.s1 - v2) )  ^  (i0 * g4) )  |  (v3 & g3) )  & v0) ) ) ) ;
      v0 =  ( ( (i0 *  (i0 & g4) )  -  ( (v1.s1 ^  ( (v0 -  (v3 * g0[i0]) )  +  (g3 & v2) ) )  | i0) )  + i0) ;
      v4 =  (g0[i0] +  ( ( ( (g3 |  ( (v0 +  (v2 - g4) )  ^ i0) )  & v3)  * i0)  -  (v1.s1 * g0[i0]) ) ) ;
      v0 =  ( ( (v2 *  (v3 & g4) )  -  ( ( ( (g3 - v1.s1)  +  (v0 * g0[i0]) )  ^ i0)  | i0) )  + v2) ;
    }
  }
  else if( (v4 +  (g4 -  (g1 *  ( ( ( (v2 + g1)  ^ v4)  | g4)  &  ( (g1 * v2)  - g1) ) ) ) ) ) {
    g4 =  ( ( (g1 *  ( (i0 |  ( (i0 + v1.s0)  ^ v4) )  &  ( (v3 * g1)  - i0) ) )  - i0)  + v1.s0) ;
    v2 =  (v4 +  ( ( (v3 & g1)  *  ( (i0 ^ i0)  | v1.s0) )  - v4) ) ;
    v4 =  (i0 +  ( (i0 *  ( ( (g1 ^  ( (v3 -  (v1.s0 *  (v4 & i0) ) )  + i0) )  | g1)  & v3) )  - v1.s0) ) ;
  }
  else if( ( ( (g3 *  ( (g7 |  (v4 ^ v4) )  &  (g7 + g3) ) )  - g7)  +  (v4 -  ( (v4 & g7)  * g3) ) ) ) {
    for(i1 = 0; i1 < 15; i1 += 1) {
      g1 =  (g3 +  ( ( ( (v2 | g6[i1])  & v2)  * g7)  -  ( (v4 + g6[i1])  ^ g1) ) ) ;
      v2 =  (g3 +  ( ( (g6[i1] & g7)  *  ( (v2 ^ v2)  |  ( (g1 - v4)  + g6[i1]) ) )  - g3) ) ;
    }
  }
  else {
    i0 = 3;
    // BACKEDGE CALL from foo5 to foo8
    if (ccall_check_5_8-- > 0)
      foo8( ( (v0 - v3)  +  (g3 *  (g3 &  ( (g1 ^  ( ( (v2 *  (v0 & v3) )  - g3)  + g3) )  | g1) ) ) ) );
    g4 =  ( (v0 - v0)  +  ( (g1 & v4)  *  (g2 | g5) ) ) ;
    v0 =  ( ( ( (v0 & g3)  *  (v2 |  (g5 ^ v0) ) )  -  (g2 +  (i0 - v4) ) )  + g1) ;
    for(i2 = 1; i2 < 74; i2 += 2) {
      for(i0 = 2; i0 < 10; i0 += 2) {
        g3 =  (v0 +  ( ( ( (v4 | g2)  & g4)  *  (v0 ^ v4) )  - v4) ) ;
        g0[i0] =  (g2 +  ( (v0 *  (v0 &  ( (v4 ^  (v4 + g2) )  | v4) ) )  - g4) ) ;
        v1.s0 =  ( (g4 -  ( (v4 &  ( ( (v0 +  ( (g2 * g5)  - g2) )  ^ v4)  | v0) )  * v4) )  + g4) ;
        v1.s1 =  ( ( (v4 * g5)  -  ( ( (v0 ^ v4)  |  (v4 +  ( (g4 * v0)  - g2) ) )  &  (g2 & v4) ) )  + g5) ;
      }
      for(i1 = 0; i1 < 15; i1 += 1) {
        g3 =  ( ( ( ( ( (v4 ^ g6[i1])  |  (g1 + g5) )  & v3)  *  (v2 - g4) )  - v4)  +  (g6[i1] * g1) ) ;
        g7 =  ( ( (g1 * v2)  -  ( ( (g4 ^ v4)  | g6[i1])  &  ( ( (g5 * v3)  - g1)  + v2) ) )  + g4) ;
        v3 =  (g1 +  ( ( ( (g6[i1] | g5)  &  (g4 ^  ( (v2 - v4)  + v3) ) )  *  (g1 * g6[i1]) )  - g5) ) ;
        v1.s0 =  (g1 +  ( ( ( (v2 | g6[i1])  & g5)  *  ( (g4 + v3)  ^ v4) )  - g1) ) ;
        v1.s1 =  (g6[i1] +  (v4 -  ( ( (g5 |  (g4 ^ v2) )  & v3)  * g1) ) ) ;
        g5 =  (g4 +  ( (v4 *  ( (g6[i1] | g1)  &  (v2 ^  ( (v3 - g5)  + g4) ) ) )  - v4) ) ;
      }
    }
    for(i0 = 2; i0 < 10; i0 += 2) {
      g7 =  ( ( (v3 *  (g7 &  ( (g0[i0] ^ v0)  |  (g0[i0] +  (g1 - g1) ) ) ) )  - g3)  + g5) ;
      g5 =  ( (g7 -  (g0[i0] *  ( ( ( (v3 + g0[i0])  ^  (g1 - v0) )  |  (g1 * g5) )  & g3) ) )  + g7) ;
    }
  }
  if( ( ( ( (g5 &  (g4 | v3) )  * v2)  -  ( (i0 + g5)  ^ g4) )  +  ( (v3 * v2)  - i0) ) ) {
    return  ( ( ( (v2 &  (g4 |  ( (v3 + i0)  ^  (g5 - v2) ) ) )  *  (g4 * v3) )  - i0)  + g5) ;
  }
  i0 = 2;
  i1 = 2;
  return  ( (g1 - g6[i1])  +  ( ( (g3 |  ( ( ( ( (v0 & v1.s0)  * v1.s2)  - v3)  + v2)  ^ v1.s1) )  & g1)  * g6[i1]) ) ;
}

// function 11
int foo11(unsigned x0) {
  unsigned i0 = 0;
  unsigned i1 = 0;
  unsigned i2 = 0;
  unsigned i3 = 0;
  unsigned i4 = 0;
  unsigned i5 = 0;
  unsigned i6 = 0;
  unsigned i7 = 0;
  T19 v0 = 9041370815331944341ULL;
  T1 v1 = 3405650221448028392ULL;
  T19 v2 = 2609241977681623452ULL;
  T28 v3 = {85ULL,26ULL,48ULL,67ULL,47ULL,82ULL,66ULL,40ULL,69ULL,32ULL,6ULL,77ULL};
  T17 v4 = 10283660480003137414ULL;
  T32 v5 = {13ULL,91ULL,73ULL,45ULL,93ULL,63ULL,89ULL,32ULL,3ULL,89ULL,29ULL,100ULL,21ULL,88ULL,32ULL};
  T12 v6 = 14968836920291744369ULL;
  T14 v7 = 16226403488383991656ULL;
  T19 v8 = 6612439781215894205ULL;
  T27 v9 = {48ULL,14ULL,33ULL,61ULL,29ULL,95ULL};
  i2 = 10;
  i3 = 8;
  i1 = 5;
  // BACKEDGE CALL from foo11 to foo18
  if (ccall_check_11_18-- > 0)
    foo18( (v5[i3] +  ( ( ( (g6[i1] | v8)  &  ( ( (g2 -  (v4 * i3) )  + v8)  ^ v3[i2]) )  * v5[i3])  - v5[i3]) ) );
  i0 = 2;
  i3 = 2;
  i1 = 11;
  //  CALL from foo11 to foo9
  foo9( ( ( (v5[i3] *  ( (i2 |  (g0[i0] ^  (v5[i3] +  (i1 - g4) ) ) )  &  (v5[i3] * i2) ) )  - g0[i0])  + v5[i3]) );
  for(i5 = 2; i5 < 67; i5 += 2) {
    i2 = 8;
    i1 = 5;
    if( (v0 +  ( (i3 * i1)  -  ( (i0 |  ( (g6[i1] + i0)  ^ v2) )  &  (v3[i2] -  (v0 * i3) ) ) ) ) ) {
      continue;
    }
    for(i2 = 1; i2 < 12; i2 += 2) {
      for(i3 = 0; i3 < 15; i3 += 2) {
        v0 =  ( ( (v7 *  (v7 & v5[i3]) )  -  ( ( (g7 +  ( (g4 * v1)  - v6) )  ^ v4)  | v1) )  +  (v7 & v7) ) ;
        v3[i2] =  ( ( (g7 * v6)  -  (v5[i3] &  (v4 |  (v1 ^ v7) ) ) )  + g4) ;
        v4 =  ( ( ( (g4 &  (v1 | g7) )  *  (v5[i3] ^ v4) )  -  (v1 + v7) )  + v7) ;
        g5 =  ( ( (v7 *  ( (g4 | v1)  & g7) )  -  ( ( (v7 - v5[i3])  + v4)  ^  ( (v1 & v6)  * v7) ) )  + g4) ;
        v5[i3] =  (g7 +  (v4 -  ( ( (v5[i3] | v1)  &  (v7 ^ g4) )  * v7) ) ) ;
      }
    }
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i3 = 0; i3 < 15; i3 += 2) {
        g5 =  (v5[i3] +  ( ( ( ( (v4 ^ g3)  |  ( (i1 - v4)  + v8) )  & v5[i3])  * v4)  -  ( (g3 & i1)  * v4) ) ) ;
        v4 =  (g3 +  (v8 -  (v4 *  (v4 &  (i1 | v5[i3]) ) ) ) ) ;
        g0[i0] =  ( ( ( (g3 &  (v5[i3] | i1) )  *  ( (v4 + v8)  ^ v4) )  -  (g3 - v5[i3]) )  +  (i1 * v4) ) ;
      }
    }
    for(i2 = 1; i2 < 12; i2 += 2) {
      for(i1 = 0; i1 < 15; i1 += 1) {
        g7 =  ( ( ( (i3 & v3[i2])  * i1)  - v2)  +  (g4 | g6[i1]) ) ;
        g4 =  ( (v2 - i1)  +  ( (v3[i2] & g4)  *  (i3 | g6[i1]) ) ) ;
        v3[i2] =  (g4 +  (i1 -  ( (i3 &  (g6[i1] |  (v3[i2] ^ v2) ) )  * g4) ) ) ;
        v2 =  (i3 +  ( (g6[i1] * i1)  -  ( ( ( (v2 + v3[i2])  ^ g4)  | i3)  &  (g6[i1] -  (i1 *  (v2 & v3[i2]) ) ) ) ) ) ;
      }
    }
    for(i6 = 0; i6 < 59; i6 += 2) {
      for(i2 = 1; i2 < 12; i2 += 2) {
        g5 =  (v7 +  ( (v3[i2] *  (i2 &  (i0 |  (v3[i2] ^ v7) ) ) )  - g1) ) ;
        v3[i2] =  ( (i0 - v7)  +  ( ( (v7 |  (i2 ^ v3[i2]) )  & v3[i2])  * g1) ) ;
        v6 =  (v3[i2] +  ( ( (v7 & v3[i2])  *  (i2 | v7) )  -  ( (i0 + g1)  ^ v3[i2]) ) ) ;
      }
      g1 =  ( ( ( (i3 &  (g4 | v1) )  *  (g5 ^ i2) )  - i3)  + g4) ;
      g2 =  ( ( ( (g5 &  ( (v1 ^ i3)  | g4) )  *  (i2 +  ( (g5 * v1)  - i3) ) )  - g4)  + i2) ;
      g4 =  ( (g5 -  (g4 *  (v1 &  ( (i2 ^ i3)  | g5) ) ) )  + g4) ;
      v2 =  (v1 +  ( ( (g4 &  (i2 | i3) )  *  ( (g5 +  (v1 - g4) )  ^ i2) )  -  (i3 *  (g5 & v1) ) ) ) ;
    }
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i3 = 0; i3 < 15; i3 += 2) {
        for(i1 = 0; i1 < 15; i1 += 1) {
          g7 =  (i0 +  ( ( ( ( (g1 ^ v2)  | g0[i0])  & g6[i1])  * v8)  - g5) ) ;
          v0 =  ( (i0 -  (g6[i1] *  (g5 &  ( (v8 ^ v2)  | g0[i0]) ) ) )  + g1) ;
          v1 =  ( ( (g5 *  (v2 & g1) )  -  (v8 |  (g0[i0] ^ g6[i1]) ) )  +  ( (i0 - g5)  +  (v2 *  (g1 & v8) ) ) ) ;
          v5[i3] =  (v8 +  ( (v2 *  (g5 &  (g6[i1] |  (g0[i0] ^ i0) ) ) )  -  ( (g1 -  (v8 * v2) )  + g5) ) ) ;
          g4 =  ( (g6[i1] - g0[i0])  +  ( ( ( ( ( (g1 - v8)  + g5)  ^  ( (i0 & v2)  * g6[i1]) )  | g0[i0])  & g1)  * v8) ) ;
        }
      }
    }
    for(i2 = 1; i2 < 12; i2 += 2) {
      for(i1 = 0; i1 < 15; i1 += 1) {
        g5 =  ( ( (v3[i2] *  (i2 &  (i0 | g1) ) )  -  ( (g7 + g4)  ^ v7) )  + v3[i2]) ;
        g6[i1] =  ( (v7 - g7)  +  ( ( (i0 | i2)  & g1)  *  (g4 ^ v3[i2]) ) ) ;
        g5 =  (g7 +  ( ( (g1 & v3[i2])  *  (i2 |  (i0 ^  ( (v7 - g4)  + g7) ) ) )  - g1) ) ;
        g4 =  ( ( (g4 *  (g1 &  (i0 | v7) ) )  - g7)  +  (v3[i2] ^  ( (i2 - g4)  + g1) ) ) ;
        g5 =  (v7 +  (g7 -  (i0 *  (v3[i2] &  ( (g4 ^ g1)  | i2) ) ) ) ) ;
      }
    }
    for(i7 = 1; i7 < 74; i7 += 3) {
      for(i2 = 1; i2 < 12; i2 += 2) {
        for(i1 = 0; i1 < 15; i1 += 1) {
          g4 =  ( ( (g6[i1] *  ( (v1 | g3)  &  ( (g5 + v1)  ^ v1) ) )  - g4)  + g6[i1]) ;
          v3[i2] =  ( ( (v1 * v1)  -  (v1 &  ( (g4 ^ g3)  |  ( (g5 - g6[i1])  + v1) ) ) )  +  (v1 * v1) ) ;
          g4 =  ( ( (v1 * v1)  - g5)  +  ( ( ( ( ( (g6[i1] *  (v1 & g3) )  - g4)  + v1)  ^ v1)  | g5)  & g6[i1]) ) ;
          g2 =  (v1 +  ( (v1 *  ( ( (g5 ^ g6[i1])  |  (g4 + g3) )  & v1) )  -  (v1 - v1) ) ) ;
        }
      }
      for(i1 = 0; i1 < 15; i1 += 1) {
        v6 =  (g6[i1] +  (g7 -  (v2 *  ( (i2 |  ( (v2 +  (g6[i1] - g7) )  ^ v2) )  &  (i2 * v2) ) ) ) ) ;
        v7 =  ( (v2 -  ( ( ( (g7 ^  (v2 +  (g6[i1] - i2) ) )  | v2)  & g7)  * v2) )  +  ( (g6[i1] & i2)  * v2) ) ;
      }
    }
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i1 = 0; i1 < 15; i1 += 1) {
        g6[i1] =  ( ( (v8 *  ( (g0[i0] | v0)  &  (v1 ^ g1) ) )  -  (v8 + v4) )  + v6) ;
        v0 =  ( (v4 -  ( ( ( ( ( (g0[i0] - v8)  + v0)  ^ v6)  | v8)  & v1)  * g1) )  + v4) ;
        g6[i1] =  ( ( (v1 * v0)  -  ( (v6 |  ( (v8 +  (g0[i0] -  (v8 * v4) ) )  ^ g1) )  &  (v1 & v0) ) )  + v6) ;
      }
    }
    i0 = 9;
    i3 = 3;
    i2 = 6;
    if( ( (g0[i0] - g2)  +  (g4 *  ( (i2 | i3)  & g2) ) ) ) {
      for(i0 = 2; i0 < 10; i0 += 2) {
        for(i2 = 1; i2 < 12; i2 += 2) {
          for(i3 = 0; i3 < 15; i3 += 2) {
            g1 =  (v6 +  ( ( (v1 &  (v4 | v7) )  *  ( ( (v8 - i3)  + v5[i3])  ^ g3) )  - i2) ) ;
            g1 =  (v5[i3] +  ( ( (i3 &  ( (v7 ^ g3)  |  (v1 + v6) ) )  *  (i2 - v8) )  -  (v4 * v5[i3]) ) ) ;
            g0[i0] =  ( ( (v4 * v6)  - v5[i3])  +  (g3 &  (v1 |  (v7 ^ v8) ) ) ) ;
            v3[i2] =  (v6 +  ( ( (v7 & v1)  *  (i3 | v8) )  - g3) ) ;
            v1 =  (v6 +  ( (v5[i3] * v4)  -  ( ( (v8 ^ i2)  | v7)  & v1) ) ) ;
          }
        }
      }
    }
    else if( (g3 +  ( ( (v0 & v8)  * v3[i2])  -  ( (i1 ^  (g3 + v0) )  | v8) ) ) ) {
      for(i0 = 2; i0 < 10; i0 += 2) {
        for(i2 = 1; i2 < 12; i2 += 2) {
          for(i3 = 0; i3 < 15; i3 += 2) {
            v4 =  ( (v5[i3] -  (v5[i3] * v3[i2]) )  +  ( (v0 | g7)  & v2) ) ;
            v5[i3] =  (v0 +  ( ( ( (v8 |  (v2 ^ v5[i3]) )  &  (v3[i2] +  (g0[i0] - v2) ) )  * g7)  -  (v5[i3] * v0) ) ) ;
          }
        }
      }
    }
    else if( ( ( ( ( ( (v0 ^ v0)  |  ( (i3 - v7)  + v8) )  & v0)  *  (v0 * i3) )  - v7)  + v8) ) {
      for(i2 = 1; i2 < 12; i2 += 2) {
        for(i3 = 0; i3 < 15; i3 += 2) {
          v5[i3] =  (v3[i2] +  (v2 -  ( (v8 & g5)  *  (v0 | g4) ) ) ) ;
          v4 =  ( ( ( (v0 & v3[i2])  *  (g4 |  ( (g5 + g3)  ^  (v2 - v8) ) ) )  - v0)  + v3[i2]) ;
          v2 =  ( ( ( (g3 & v2)  * v3[i2])  - g4)  +  ( (v8 ^ v0)  | g5) ) ;
        }
      }
    }
    else {
      for(i2 = 1; i2 < 12; i2 += 2) {
        v7 =  ( ( ( (v1 &  (g4 | v3[i2]) )  *  (v8 ^  (g5 +  (v8 - g5) ) ) )  - v6)  + v6) ;
        g4 =  ( (v6 - v8)  +  (v8 *  ( (v1 | v3[i2])  & g5) ) ) ;
        v0 =  ( ( (g5 * v8)  -  ( ( (v8 ^ v6)  |  (v3[i2] + g4) )  &  ( (v1 * g5)  - v6) ) )  + g5) ;
        v1 =  ( (g5 - v3[i2])  +  (g4 *  ( (v8 | g5)  &  (v1 ^  (v8 + v6) ) ) ) ) ;
      }
    }
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i2 = 1; i2 < 12; i2 += 2) {
        v3[i2] =  ( ( (v3[i2] *  ( ( (i1 ^ g5)  | g1)  &  (g0[i0] +  (v3[i2] - i1) ) ) )  - g5)  + g1) ;
        g7 =  ( (i1 -  (g1 *  (g0[i0] &  (v3[i2] | g5) ) ) )  +  (i1 ^ g1) ) ;
        v0 =  ( ( (i1 *  ( (g1 | v3[i2])  & g5) )  -  (g0[i0] ^  (i1 + g1) ) )  + v3[i2]) ;
        g4 =  ( ( (g0[i0] *  (v3[i2] & g5) )  -  ( (i1 ^ g1)  |  (g0[i0] + v3[i2]) ) )  + g5) ;
      }
    }
    i0 = 3;
    i1 = 5;
    if( ( ( (v7 * g3)  -  (i2 &  (g2 |  ( ( (v6 - i2)  + v7)  ^  (g3 * i2) ) ) ) )  + g2) ) {
      for(i0 = 2; i0 < 10; i0 += 2) {
        for(i3 = 0; i3 < 15; i3 += 2) {
          g1 =  ( (v8 - g0[i0])  +  ( ( ( (i2 ^ v8)  | v6)  & i2)  * g1) ) ;
          g0[i0] =  ( ( (i0 * g1)  -  (v8 & v6) )  +  (i2 |  (g0[i0] ^ v8) ) ) ;
          v5[i3] =  ( ( ( (i3 &  ( ( ( (g1 - v8)  +  (i2 * i2) )  ^  (g0[i0] & v6) )  | i0) )  * v8)  - i3)  + g1) ;
          g3 =  ( (g0[i0] -  ( ( (i2 |  (i0 ^ i2) )  & v8)  *  ( (v8 -  (v6 * g1) )  + i3) ) )  +  (g0[i0] & i2) ) ;
        }
      }
    }
    else if( ( ( (v8 *  ( (i1 | i3)  & v1) )  - g7)  + v8) ) {
      for(i0 = 2; i0 < 10; i0 += 2) {
        for(i2 = 1; i2 < 12; i2 += 2) {
          g0[i0] =  (v6 +  ( ( (v3[i2] &  (g7 | v0) )  * g5)  -  ( ( (v6 - v3[i2])  +  (g7 * v0) )  ^ g5) ) ) ;
          g3 =  (g5 +  ( ( (v3[i2] &  (g7 |  (v0 ^ v6) ) )  *  (g5 +  (v3[i2] - g7) ) )  -  (v0 * v6) ) ) ;
          g0[i0] =  (g5 +  (v0 -  ( (g7 & v6)  *  (v3[i2] |  ( (g5 + v0)  ^  (g7 - v6) ) ) ) ) ) ;
          g2 =  ( ( (v6 *  ( ( (g7 ^ v0)  |  (g5 + v3[i2]) )  &  ( (v6 * g7)  -  (v0 & g5) ) ) )  - v3[i2])  + v6) ;
          v3[i2] =  ( ( ( (v6 & v0)  * v3[i2])  -  ( ( (g5 +  (g7 - v6) )  ^ v0)  |  (v3[i2] *  (g5 & g7) ) ) )  + v6) ;
        }
      }
    }
    else if( ( (i0 -  (i2 *  ( ( ( (g2 +  (g5 - g3) )  ^ i1)  | i0)  &  (i2 * g2) ) ) )  + g5) ) {
      i0 = 4;
      i3 = 0;
      if( ( ( ( ( (v1 | g7)  & v2)  *  (i2 ^ g4) )  -  ( (g5 - v2)  + i3) )  +  (v4 * v1) ) ) {
        break;
      }
    }
    else {
      for(i0 = 2; i0 < 10; i0 += 2) {
        for(i2 = 1; i2 < 12; i2 += 2) {
          g0[i0] =  ( (v1 -  (g5 * i0) )  +  ( (v3[i2] | g4)  & v1) ) ;
          v8 =  (v1 +  ( (v3[i2] *  (g5 &  (i0 |  ( (g4 + v1)  ^ v3[i2]) ) ) )  - g5) ) ;
          v4 =  ( ( (g5 * i0)  -  ( (v1 | v3[i2])  & g4) )  + g5) ;
          g7 =  (g4 +  ( ( (v1 &  (v3[i2] |  (i0 ^ g5) ) )  * g4)  -  ( (v1 - v3[i2])  +  ( (i0 & g5)  * g4) ) ) ) ;
        }
      }
    }
    i0 = 6;
    if( ( (i1 -  (v1 *  (v6 & g3) ) )  +  (g3 |  (g4 ^  ( (g0[i0] - i1)  +  ( (v1 & v6)  * g3) ) ) ) ) ) {
      continue;
    }
    v0 =  (g4 +  ( ( (g1 & i0)  * g4)  -  (v8 | g4) ) ) ;
    v7 =  ( ( ( (g1 &  (g4 | v8) )  * g4)  -  (i0 ^ g1) )  + g4) ;
    g5 =  ( (v8 - g4)  +  (i0 *  ( (g4 | g1)  & v8) ) ) ;
    v7 =  ( (g1 -  ( (v8 &  (g4 | g4) )  * i0) )  + g1) ;
    v2 =  ( ( ( (i0 & g4)  *  ( (g1 ^ v8)  | g4) )  -  (i0 +  ( (g4 * g1)  - v8) ) )  + g4) ;
  }
  for(i2 = 1; i2 < 12; i2 += 2) {
    for(i3 = 0; i3 < 15; i3 += 2) {
      for(i1 = 0; i1 < 15; i1 += 1) {
        v6 =  ( (g6[i1] - g1)  +  ( (i1 & v3[i2])  *  (v5[i3] |  ( (g3 +  ( ( (v7 & i1)  * g6[i1])  - g1) )  ^ i1) ) ) ) ;
        v0 =  (v5[i3] +  (i1 -  (v3[i2] *  (g6[i1] &  ( ( ( (g3 - g1)  +  (v7 * i1) )  ^ v5[i3])  |  (i1 & v3[i2]) ) ) ) ) ) ;
        v8 =  (v5[i3] +  ( (i1 *  ( (i1 | v7)  & g1) )  - g3) ) ;
        v1 =  (g6[i1] +  (v5[i3] -  (i1 *  ( ( (v7 ^ i1)  | g1)  & g3) ) ) ) ;
        g7 =  ( (v3[i2] -  (v5[i3] *  (g1 & g3) ) )  +  ( ( (i1 +  (g6[i1] - v7) )  ^  (i1 * v3[i2]) )  | v5[i3]) ) ;
      }
    }
  }
  i0 = 4;
  i3 = 9;
  i1 = 1;
  return  ( ( (i2 * v5[i3])  -  ( ( (g4 ^ g0[i0])  | i1)  & v5[i3]) )  +  (i2 + v5[i3]) ) ;
}

// function 18
int foo18(unsigned x0) {
  unsigned i0 = 0;
  unsigned i1 = 0;
  unsigned i2 = 0;
  unsigned i3 = 0;
  T18 v0 = 15284851398178299589ULL;
  T26 v1 = {7554ULL,2573ULL,5850ULL,3211ULL,4234ULL};
  T13 v2 = 1313189076617667341ULL;
  T29 v3 = {9353ULL,9983ULL,7091ULL,7117ULL,5554ULL,7215ULL};
  T12 v4 = 17488862958926451567ULL;
  T8 v5 = 17312752469851613895ULL;
  T20 v6 = 661916294296961502ULL;
  T12 v7 = 15554087565619764209ULL;
  T34 v8 = {49ULL,93ULL,99ULL,53ULL,14ULL,52ULL,46ULL,2ULL,40ULL};
  T0 v9 = 17780490164116012304ULL;
  T14 v10 = 3349598693820752870ULL;
  g1 =  (g5 +  ( ( (g1 &  (v9 | g1) )  *  ( ( (g7 - i0)  + g5)  ^ g1) )  -  ( (v9 & g1)  * g7) ) ) ;
  v9 =  ( ( ( (g1 & i0)  * g1)  -  (g7 |  ( (g5 + v9)  ^ g1) ) )  + i0) ;
  v6 =  (i0 +  ( (g1 * g5)  -  ( ( (g1 ^  (v9 + g7) )  | i0)  & g1) ) ) ;
  i0 = 9;
  if( ( (v7 - g0[i0])  +  ( (v2 &  ( (g0[i0] ^ g1)  |  (v7 + g0[i0]) ) )  * v2) ) ) {
    return  ( ( ( ( (v7 | g0[i0])  & v2)  * g1)  -  (g0[i0] ^  (v7 + g0[i0]) ) )  + v2) ;
  }
  for(i0 = 2; i0 < 10; i0 += 2) {
    for(i1 = 0; i1 < 15; i1 += 1) {
      v3.s0 =  ( (v5 -  ( ( (i0 |  ( (g3 + v1.s3)  ^ g5) )  & v1.s2)  * v9) )  + v2) ;
      v3.s1 =  ( ( (g3 * v5)  -  ( ( ( (v9 + v1.s0)  ^ v1.s3)  | i1)  & v1.s2) )  +  (v2 - g5) ) ;
      v3.s2 =  (g3 +  (v1.s0 -  ( (i1 &  (v5 |  (v9 ^  (i0 + v2) ) ) )  *  ( (g5 * v1.s3)  - v1.s2) ) ) ) ;
      v3.s5 =  ( ( (g5 * v5)  -  (v1.s2 & g3) )  +  (v1.s3 | i0) ) ;
      g3 =  (g3 +  (i1 -  ( (g5 &  ( (v1.s2 ^  (v9 + v1.s3) )  | v1.s0) )  * v5) ) ) ;
      g6[i1] =  ( (g3 - v9)  +  (g5 *  ( ( ( (i1 +  (v1.s0 - i0) )  ^ v1.s2)  | v5)  & v1.s3) ) ) ;
      g0[i0] =  (i0 +  ( ( (g3 &  (g5 |  (v5 ^ v1.s3) ) )  * v2)  -  (i1 +  ( (v9 *  (v1.s2 & v1.s0) )  - i0) ) ) ) ;
      v6 =  ( ( (v9 * v5)  - g5)  +  ( (v2 | g3)  &  (v1.s3 ^  (v1.s0 +  ( (v1.s2 *  (i1 & i0) )  - v9) ) ) ) ) ;
    }
  }
  for(i3 = 2; i3 < 93; i3 += 2) {
    i0 = 9;
    // BACKEDGE CALL from foo18 to foo1
    if (ccall_check_18_1-- > 0)
      foo1( ( ( (v5 * g0[i0])  -  (g7 &  (v6 | v0) ) )  +  (g2 ^  (v6 + v5) ) ) );
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i2 = 0; i2 < 9; i2 += 1) {
        v9 =  (v9 +  (g1 -  ( (v6 & g0[i0])  *  (i1 |  (g7 ^ v9) ) ) ) ) ;
        v7 =  ( (v9 - g7)  +  ( ( (g1 | v6)  & g0[i0])  * i1) ) ;
        v8[i2] =  ( (g1 - i1)  +  ( ( ( ( (v6 + g7)  ^ g0[i0])  | v9)  &  (g1 - i1) )  *  ( (v6 & g7)  * g0[i0]) ) ) ;
        g7 =  ( (i1 -  ( ( ( (v6 ^  (g0[i0] + v9) )  | g1)  & g7)  * i1) )  + v6) ;
      }
    }
  }
  for(i2 = 0; i2 < 9; i2 += 1) {
    v4 =  (v1.s3 +  (v0 -  (v8[i2] *  (v1.s1 &  (v0 |  (v1.s2 ^ v7) ) ) ) ) ) ;
    v8[i2] =  ( (v1.s2 - v7)  +  ( ( (v1.s1 | g5)  & v0)  *  (v0 ^ v8[i2]) ) ) ;
    g3 =  ( ( (v1.s1 *  ( (g4 |  (v1.s3 ^ v0) )  & v7) )  - v1.s2)  +  (v8[i2] + v8[i2]) ) ;
  }
  i0 = 3;
  if( (v3.s0 +  ( (i0 * v3.s1)  -  (g2 &  (g1 | v3.s4) ) ) ) ) {
    g4 =  (i1 +  ( (g2 *  (v0 & v9) )  -  (v2 |  (v9 ^ v4) ) ) ) ;
    v7 =  ( ( (i1 * g2)  - v0)  +  ( ( ( ( (v2 -  (g3 * v9) )  + v9)  ^ v4)  | v0)  & i1) ) ;
  }
  else {
    i0 = 2;
    i1 = 6;
    //  CALL from foo18 to foo14
    foo14( ( ( ( ( (g2 | g2)  & v5)  * v7)  -  ( (g2 + v9)  ^  (v7 - v5) ) )  + g2) );
  }
  g3 =  ( ( ( (v2 &  (v5 | v4) )  * g4)  - v3.s0)  + v3.s5) ;
  g5 =  (v3.s5 +  ( ( ( (g1 |  (v3.s2 ^  (g7 + v2) ) )  & v3.s0)  *  ( (v3.s3 *  (v3.s1 & g4) )  - v5) )  - v4) ) ;
  v2 =  ( ( (g7 *  ( (v3.s5 | v2)  &  ( ( (v2 - v3.s2)  + v3.s0)  ^ v5) ) )  - v3.s2)  + v3.s3) ;
  i2 = 1;
  //  CALL from foo18 to foo14
  foo14( ( (v5 -  ( (g2 &  ( (v8[i2] ^  (v5 +  ( (g3 * v5)  - v7) ) )  | v0) )  * v5) )  + g2) );
  i2 = 3;
  i1 = 1;
  if( ( (g5 -  ( (v4 &  (g1 | g7) )  *  (v7 ^  ( (v3.s3 - v8[i2])  + v6) ) ) )  + g5) ) {
    for(i1 = 0; i1 < 15; i1 += 1) {
      for(i2 = 0; i2 < 9; i2 += 1) {
        v4 =  ( ( (v2 * g2)  -  ( (v6 | g6[i1])  & g5) )  + v5) ;
        v8[i2] =  ( (v2 -  ( ( ( (g5 ^ v8[i2])  | v6)  &  (g2 + v5) )  * g6[i1]) )  + v2) ;
        v2 =  (v5 +  ( (g2 * g5)  -  (g6[i1] &  ( (v2 ^ v8[i2])  |  (v6 +  (v5 - g2) ) ) ) ) ) ;
        g6[i1] =  (g2 +  ( (v8[i2] *  (v5 &  ( ( (v2 + v6)  ^ g6[i1])  | g5) ) )  -  (g2 - v8[i2]) ) ) ;
      }
    }
    // BACKEDGE CALL from foo18 to foo1
    if (ccall_check_18_1-- > 0)
      foo1( (v2 +  ( ( (v0 & v5)  *  (v0 | g3) )  - v2) ) );
    i0 = 6;
    if( ( ( (i0 * i1)  - g7)  +  ( (g1 | g7)  &  (i0 ^ i1) ) ) ) {
      for(i2 = 0; i2 < 9; i2 += 1) {
        v8[i2] =  (v2 +  ( (v5 *  (v1.s4 &  (v9 | v1.s4) ) )  -  ( ( ( (v1.s0 *  (v1.s3 & v2) )  - v2)  + v5)  ^ v1.s4) ) ) ;
        v2 =  ( ( (v5 *  ( (v1.s4 | v1.s0)  &  ( (v2 + v2)  ^ v9) ) )  - v1.s4)  +  (v1.s3 -  (v5 * v1.s4) ) ) ;
      }
    }
    else {
      for(i2 = 0; i2 < 9; i2 += 1) {
        v3.s0 =  (v2 +  ( ( (g1 &  (g7 |  (g1 ^ g1) ) )  *  (i0 +  ( (v9 * i0)  - v8[i2]) ) )  - v2) ) ;
        v3.s1 =  ( ( (g7 * v9)  - v2)  +  ( ( (g1 ^  (i0 +  (i0 -  (g1 * v8[i2]) ) ) )  | g1)  & g7) ) ;
        v3.s2 =  ( (g1 -  (i0 *  ( (g1 |  ( (v8[i2] + i0)  ^  ( (g7 * g1)  - v2) ) )  & v9) ) )  + g1) ;
        v3.s3 =  (g1 +  ( ( (g1 & v9)  *  ( (g1 ^  (i0 + i0) )  | v2) )  - g7) ) ;
        v3.s4 =  (v2 +  (v8[i2] -  ( (g7 & g1)  *  (g1 | v9) ) ) ) ;
        v9 =  ( ( ( (g1 & g1)  *  (v8[i2] | g7) )  -  (g1 ^  ( (v2 -  (i0 * v9) )  +  (i0 & g1) ) ) )  + g1) ;
      }
    }
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i2 = 0; i2 < 9; i2 += 1) {
        v6 =  (v4 +  ( ( (v8[i2] & i0)  *  ( ( (i1 + v9)  ^  (v0 - v9) )  |  (g7 * i1) ) )  - v4) ) ;
        v7 =  ( ( ( (v9 & i0)  * v8[i2])  -  ( (i1 ^ v4)  | v9) )  + g7) ;
        g0[i0] =  (g7 +  ( (v0 * i0)  -  ( ( (i1 ^ v4)  | v9)  &  ( (v8[i2] - i1)  +  ( (v9 & g7)  * v0) ) ) ) ) ;
        v1.s0 =  ( ( ( (v4 &  (g7 |  (v9 ^ i0) ) )  *  (v8[i2] + v9) )  - v0)  + i1) ;
        v1.s1 =  (v9 +  ( ( ( ( ( (g7 + i1)  ^ i1)  |  (v8[i2] -  (v0 * v9) ) )  & i0)  * v4)  - v9) ) ;
        v1.s2 =  ( ( (v8[i2] *  (i1 &  (i0 | i1) ) )  -  (v4 ^ v0) )  + v9) ;
        v1.s4 =  ( ( (i1 *  (g7 &  ( (v4 ^ i1)  | v8[i2]) ) )  - i0)  + v9) ;
        g4 =  (i1 +  (v9 -  (i0 *  ( (i1 | g7)  &  (v0 ^ v8[i2]) ) ) ) ) ;
      }
    }
  }
  else if( ( ( ( (v6 &  (g4 | g1) )  *  (i1 ^ v9) )  - v2)  + g1) ) {
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i1 = 0; i1 < 15; i1 += 1) {
        for(i2 = 0; i2 < 9; i2 += 1) {
          g6[i1] =  (g3 +  ( (v8[i2] *  ( (v8[i2] |  (g0[i0] ^  (v4 +  ( (v4 * g3)  -  (v8[i2] & v8[i2]) ) ) ) )  & g0[i0]) )  - v4) ) ;
          v9 =  (v8[i2] +  ( (g0[i0] * g3)  -  (v4 &  (v8[i2] | v4) ) ) ) ;
          g0[i0] =  (g0[i0] +  (v8[i2] -  (v4 *  ( (v8[i2] | g3)  &  (v4 ^  ( (g0[i0] - v8[i2])  + v4) ) ) ) ) ) ;
          v6 =  ( (g3 - v4)  +  ( (g0[i0] &  ( (v4 ^ v8[i2])  |  (v8[i2] + g3) ) )  *  (v4 - g0[i0]) ) ) ;
        }
      }
    }
  }
  else {
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i1 = 0; i1 < 15; i1 += 1) {
        g6[i1] =  ( ( (g4 * v0)  - g0[i0])  +  ( (g5 |  (g3 ^ g6[i1]) )  &  (v9 + g4) ) ) ;
        g4 =  (g5 +  (g4 -  ( ( (g0[i0] | v0)  & g6[i1])  * g3) ) ) ;
        g0[i0] =  (g4 +  (g5 -  ( ( (v9 | g6[i1])  & v0)  *  (g0[i0] ^  ( ( ( (g3 & g4)  * g5)  - v9)  + g6[i1]) ) ) ) ) ;
        v7 =  (g0[i0] +  ( (g5 *  (v9 &  (g4 | g6[i1]) ) )  - v0) ) ;
      }
    }
  }
  for(i0 = 2; i0 < 10; i0 += 2) {
    for(i2 = 0; i2 < 9; i2 += 1) {
      g4 =  ( ( ( ( (v3.s5 | v3.s0)  &  (g3 ^  (g0[i0] +  (v1.s0 - v3.s3) ) ) )  * g2)  - g1)  +  (g3 * v3.s5) ) ;
      g1 =  ( ( (v3.s3 * g3)  -  ( ( (g2 ^ g3)  |  (g0[i0] + g1) )  & v1.s0) )  + v3.s0) ;
      v7 =  (v3.s0 +  ( ( (v3.s3 &  (g3 |  ( ( (g2 - v1.s0)  + g1)  ^  (g0[i0] *  (g3 & v3.s5) ) ) ) )  * v3.s0)  - v3.s3) ) ;
      v8[i2] =  (g2 +  ( ( ( (g1 | v1.s0)  &  ( ( (v3.s5 - v3.s3)  +  ( (g3 & g3)  * v3.s0) )  ^ g0[i0]) )  * g2)  - g1) ) ;
    }
  }
  i2 = 8;
  return  ( ( ( (g2 & v5)  *  (v8[i2] |  (v7 ^ v5) ) )  -  (v5 + g3) )  + v0) ;
}

// function 4
int foo4(unsigned x0) {
  unsigned i0 = 0;
  unsigned i1 = 0;
  unsigned i2 = 0;
  unsigned i3 = 0;
  unsigned i4 = 0;
  unsigned i5 = 0;
  unsigned i6 = 0;
  unsigned i7 = 0;
  unsigned i8 = 0;
  T2 v0 = 3175762962488229666ULL;
  T5 v1 = 14633827804078581965ULL;
  T4 v2 = 12786443687651339711ULL;
  T32 v3 = {18ULL,45ULL,79ULL,36ULL,81ULL,60ULL,42ULL,17ULL,3ULL,39ULL,79ULL,61ULL,7ULL,0ULL,66ULL};
  T28 v4 = {69ULL,53ULL,62ULL,58ULL,3ULL,44ULL,18ULL,19ULL,65ULL,21ULL,13ULL,94ULL};
  T14 v5 = 12562892508694640579ULL;
  T3 v6 = 11905321767321460183ULL;
  T20 v7 = 367171399795665049ULL;
  T28 v8 = {29ULL,88ULL,14ULL,41ULL,41ULL,23ULL,62ULL,100ULL,77ULL,43ULL,46ULL,37ULL};
  T32 v9 = {85ULL,54ULL,73ULL,68ULL,35ULL,89ULL,99ULL,28ULL,67ULL,44ULL,91ULL,45ULL,67ULL,90ULL,88ULL};
  T16 v10 = 16288167807997596485ULL;
  T19 v11 = 6698909074955647594ULL;
  T8 v12 = 16923097218004599591ULL;
  T35 v13 = {391ULL,1048ULL,939ULL};
  T11 v14 = 11859070118246619107ULL;
  for(i0 = 2; i0 < 10; i0 += 2) {
    for(i4 = 1; i4 < 12; i4 += 3) {
      g4 =  (v1 +  ( ( ( (g2 |  ( (v13.s0 + v10)  ^ v13.s2) )  &  (g0[i0] - v13.s1) )  * v8[i4])  -  (g1 *  (i1 & v8[i4]) ) ) ) ;
      v8[i4] =  ( ( (g1 * g2)  -  ( (v10 | g0[i0])  &  (v8[i4] ^  (v13.s0 +  (v1 - v8[i4]) ) ) ) )  + i1) ;
      g3 =  ( (v13.s0 -  ( ( ( (v8[i4] ^  (i1 +  (g0[i0] - v1) ) )  | v8[i4])  &  (v13.s1 * g2) )  * v13.s2) )  + g1) ;
    }
  }
  for(i0 = 2; i0 < 10; i0 += 2) {
    for(i5 = 0; i5 < 15; i5 += 2) {
      v7 =  ( ( (v7 * v5)  -  (v7 &  (g2 | v9[i5]) ) )  + v0) ;
      v7 =  ( (v5 -  (v7 *  ( (v9[i5] | v7)  & g7) ) )  +  (g2 ^ g0[i0]) ) ;
    }
  }
  for(i0 = 2; i0 < 10; i0 += 2) {
    g0[i0] =  ( ( (v12 * g7)  -  ( (g3 |  (g0[i0] ^ g1) )  &  (g7 + g0[i0]) ) )  +  ( (g3 * g7)  -  (v12 & g7) ) ) ;
    g3 =  ( (g0[i0] -  (g7 *  (g0[i0] & g3) ) )  +  ( ( ( (g7 - g1)  +  ( (g7 & g3)  * v12) )  ^ g0[i0])  | g7) ) ;
    v1 =  ( (g3 - g7)  +  ( ( ( ( (g0[i0] +  (g7 - g7) )  ^ g0[i0])  | g1)  &  (v12 *  (g3 & g3) ) )  * g7) ) ;
    g0[i0] =  ( ( ( (g3 &  ( ( (g0[i0] + g3)  ^ g7)  | v12) )  * g1)  -  (g0[i0] - g7) )  +  (g7 * g3) ) ;
  }
  for(i6 = 2; i6 < 53; i6 += 3) {
    for(i2 = 2; i2 < 15; i2 += 2) {
      for(i5 = 0; i5 < 15; i5 += 2) {
        g1 =  (v3[i2] +  (i1 -  ( ( ( (i1 ^  (v0 + v1) )  | v3[i2])  &  ( (i1 * i1)  - v0) )  * v1) ) ) ;
        g1 =  ( (v1 -  ( (i1 &  ( ( (v3[i2] + v0)  ^ i1)  |  (v1 - i1) ) )  * v3[i2]) )  + v0) ;
        v9[i5] =  ( ( (i1 * v1)  -  ( (i1 |  ( (v0 + v3[i2])  ^ i1) )  & v1) )  + i1) ;
        g4 =  ( (v3[i2] -  ( ( (i1 |  ( ( (v0 -  ( (v1 & i1)  * v3[i2]) )  + i1)  ^ v0) )  & v1)  * i1) )  + v3[i2]) ;
      }
    }
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i2 = 2; i2 < 15; i2 += 2) {
        for(i5 = 0; i5 < 15; i5 += 2) {
          v5 =  ( ( (g0[i0] * v3[i2])  -  ( ( (v9[i5] ^  ( (v6 -  (v5 * g0[i0]) )  + v3[i2]) )  | v9[i5])  & v6) )  + v5) ;
          v9[i5] =  ( (v5 -  ( ( (v3[i2] | g0[i0])  & v6)  * v9[i5]) )  + v5) ;
        }
      }
    }
  }
  for(i4 = 1; i4 < 12; i4 += 3) {
    v7 =  (g1 +  (v12 -  ( ( (v8[i4] |  ( ( (v7 -  (i0 * v11) )  + g1)  ^  (v12 & v8[i4]) ) )  & v7)  * i0) ) ) ;
    v0 =  ( (v8[i4] -  (g1 * v7) )  +  ( ( (v12 ^ i0)  | v11)  &  ( ( (v8[i4] * g1)  -  (v7 & v12) )  + i0) ) ) ;
    g1 =  ( (v12 - v8[i4])  +  ( ( (i0 |  (v7 ^ g1) )  &  ( (v11 -  (v12 * v8[i4]) )  + i0) )  * v7) ) ;
  }
  i0 = 5;
  if( (v5 +  ( ( ( ( ( (v0 + i0)  ^  (i1 - v0) )  | v5)  & v0)  * i0)  - i1) ) ) {
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i3 = 0; i3 < 12; i3 += 1) {
        for(i5 = 0; i5 < 15; i5 += 2) {
          v12 =  ( (v4[i3] - v0)  +  (g3 *  (g1 &  (v4[i3] |  (v9[i5] ^ g2) ) ) ) ) ;
          v1 =  ( ( (v0 * v4[i3])  -  (v9[i5] &  (v4[i3] | g2) ) )  +  (g3 ^  ( (g1 - v0)  + g1) ) ) ;
          g0[i0] =  ( (g2 -  (v0 *  ( ( (v0 ^ v9[i5])  |  ( (v4[i3] -  ( (v4[i3] & g1)  * g3) )  + g1) )  & g2) ) )  + v0) ;
          v10 =  ( (g1 -  ( ( (g1 | g2)  & v4[i3])  * v9[i5]) )  +  (v0 ^  (v0 +  (v4[i3] -  (g3 *  (g1 & g1) ) ) ) ) ) ;
        }
      }
    }
  }
  else if( (g7 +  ( (v2 *  ( ( (g3 ^ v11)  | g0[i0])  & g7) )  - v2) ) ) {
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i1 = 0; i1 < 15; i1 += 1) {
        v12 =  ( (g2 -  (i1 *  (g7 & v12) ) )  +  ( ( (g1 +  ( (g0[i0] * g2)  - i1) )  ^ g7)  |  (v12 & g1) ) ) ;
        g6[i1] =  ( (g1 -  ( ( (i1 | g0[i0])  & v12)  *  (g7 ^ g2) ) )  +  ( (g1 - i1)  + g0[i0]) ) ;
        v11 =  (g0[i0] +  ( ( (g2 &  (g7 |  ( (i1 + v12)  ^ g1) ) )  * g0[i0])  -  ( (g2 * g7)  -  (i1 & v12) ) ) ) ;
      }
    }
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i2 = 2; i2 < 15; i2 += 2) {
        v13.s1 =  ( ( ( (v5 &  (g3 | i0) )  *  (v6 ^  (g5 + v3[i2]) ) )  - g0[i0])  + v5) ;
        v5 =  ( (v6 -  (v3[i2] *  ( (g5 | g3)  & v5) ) )  + g0[i0]) ;
        g1 =  ( (i0 -  (v3[i2] *  ( (v5 | v6)  & g3) ) )  + g0[i0]) ;
      }
    }
    for(i8 = 1; i8 < 78; i8 += 1) {
      for(i3 = 0; i3 < 12; i3 += 1) {
        for(i5 = 0; i5 < 15; i5 += 2) {
          v13.s0 =  ( (v2 -  ( (v9[i5] & v1)  * g5) )  +  (v11 | g4) ) ;
          v13.s1 =  (g4 +  (v2 -  (v1 *  ( ( (g5 ^  (v9[i5] + v11) )  |  (v4[i3] - g4) )  & v2) ) ) ) ;
          v0 =  ( ( (v11 * v4[i3])  - v2)  +  (v9[i5] &  ( ( (g4 +  (g5 - v1) )  ^ v11)  | v4[i3]) ) ) ;
          v5 =  (g5 +  (g4 -  ( (v1 & v11)  *  (v9[i5] |  (v2 ^ v4[i3]) ) ) ) ) ;
        }
      }
      for(i0 = 2; i0 < 10; i0 += 2) {
        for(i4 = 1; i4 < 12; i4 += 3) {
          v11 =  ( ( (g4 * g0[i0])  -  (v8[i4] & g4) )  +  (i0 | v7) ) ;
          v0 =  ( (g4 - v8[i4])  +  ( (v7 &  ( (i0 ^ g4)  |  (g0[i0] + g4) ) )  * v8[i4]) ) ;
          g3 =  (g4 +  ( ( ( (v7 | g0[i0])  & v8[i4])  * g4)  - i0) ) ;
          g1 =  (g4 +  (v7 -  (i0 *  ( (g4 | v8[i4])  &  (g0[i0] ^ g4) ) ) ) ) ;
        }
      }
    }
    for(i3 = 0; i3 < 12; i3 += 1) {
      v7 =  ( ( (v7 *  ( (v7 | i0)  & v5) )  - g4)  + v7) ;
      v12 =  ( (v5 -  (v7 *  (v7 & i0) ) )  +  ( ( (g4 + v5)  ^ v7)  | v7) ) ;
      v1 =  ( (v5 - g4)  +  ( (i0 &  (v7 |  (v7 ^  (v5 + g4) ) ) )  * i0) ) ;
      v4[i3] =  ( (v7 -  ( ( (v5 |  (i0 ^  ( (g4 - v7)  +  (v7 * v5) ) ) )  & i0)  * g4) )  + v7) ;
    }
    for(i5 = 0; i5 < 15; i5 += 2) {
      g7 =  ( ( (g7 * i1)  -  ( (g1 | v12)  & v2) )  +  (v6 ^  (g7 +  (i1 - g1) ) ) ) ;
      v1 =  ( (v2 -  ( (v12 & v6)  *  (i1 | g7) ) )  + g1) ;
      v9[i5] =  ( ( ( (g7 & v6)  * i1)  -  ( (v2 ^ v12)  |  (g1 + g7) ) )  +  (v6 - i1) ) ;
    }
    i1 = 13;
    i4 = 11;
    i0 = 9;
    i4 = 3;
    if( ( ( (v8[i4] * i2)  - g5)  +  (v5 &  (g2 |  (g6[i1] ^  ( (i5 - v1)  + v8[i4]) ) ) ) ) ) {
      for(i0 = 2; i0 < 10; i0 += 2) {
        g3 =  ( ( (v10 * v5)  -  (g3 & g0[i0]) )  +  (g0[i0] |  ( (g5 +  (v13.s2 - v7) )  ^ v7) ) ) ;
        v10 =  ( ( (v7 * g0[i0])  -  (v7 & v10) )  +  (v5 | g0[i0]) ) ;
      }
    }
    else {
      for(i5 = 0; i5 < 15; i5 += 2) {
        v9[i5] =  ( ( ( (v13.s0 &  ( (v13.s0 ^ v6)  |  (g2 + g4) ) )  * v13.s0)  - v13.s0)  + v6) ;
        v10 =  ( (g4 -  ( (v13.s0 &  ( (v6 ^ v13.s0)  | g2) )  * g4) )  +  (v13.s0 +  ( ( (v6 & v13.s0)  * g2)  - g4) ) ) ;
      }
      for(i3 = 0; i3 < 12; i3 += 1) {
        v1 =  (v1 +  ( (v10 *  (i4 &  (g3 | v2) ) )  - v5) ) ;
        v4[i3] =  ( ( ( ( ( (g3 ^ v2)  | v1)  & v2)  * i4)  -  ( (v5 - v10)  +  (v12 * g3) ) )  + v2) ;
        v13.s1 =  ( ( (v1 * v2)  -  (v10 &  (v12 |  (g3 ^  (i4 + v5) ) ) ) )  +  (v2 - v1) ) ;
        v1 =  (g3 +  ( ( (v1 & v2)  *  ( (v5 ^ v2)  |  ( (v12 - i4)  +  (v10 * g3) ) ) )  - v1) ) ;
        v11 =  ( ( (v5 * v2)  - v10)  +  ( (v1 | v12)  & v2) ) ;
      }
      for(i7 = 0; i7 < 28; i7 += 3) {
        for(i2 = 2; i2 < 15; i2 += 2) {
          for(i1 = 0; i1 < 15; i1 += 1) {
            for(i4 = 1; i4 < 12; i4 += 3) {
              for(i5 = 0; i5 < 15; i5 += 2) {
                v8[i4] =  (v3[i2] +  ( ( ( ( ( (g6[i1] + g2)  ^ v9[i5])  | v0)  & i4)  * v3[i2])  - g6[i1]) ) ;
                g2 =  ( ( (g2 *  ( ( ( (i4 + v9[i5])  ^  ( (v3[i2] * v0)  - g6[i1]) )  | g2)  & i4) )  - v9[i5])  + v3[i2]) ;
                v12 =  ( ( ( (v9[i5] & g6[i1])  * i4)  - v3[i2])  +  (v0 |  ( (g2 + v9[i5])  ^  (g6[i1] - i4) ) ) ) ;
              }
            }
          }
        }
        for(i0 = 2; i0 < 10; i0 += 2) {
          for(i2 = 2; i2 < 15; i2 += 2) {
            v3[i2] =  (v0 +  (v13.s1 -  ( (v6 & g2)  *  ( ( (v13.s2 + g2)  ^  ( (i4 * v1)  - v0) )  | v13.s1) ) ) ) ;
            g0[i0] =  ( (g2 -  ( (v13.s1 &  (v1 |  (v13.s2 ^  (v6 + i4) ) ) )  * v0) )  + g2) ;
            v13.s1 =  ( (g2 -  ( (v1 & g2)  * v13.s1) )  +  (v13.s2 | i4) ) ;
            g5 =  ( (v0 -  (v13.s1 *  ( (g2 |  ( (v13.s2 + i4)  ^ v6) )  & g2) ) )  + v1) ;
            v0 =  ( ( (v6 *  ( ( (v0 ^  (v13.s1 + i4) )  | v1)  &  (g2 - g2) ) )  - v13.s2)  + v6) ;
          }
        }
      }
      for(i4 = 1; i4 < 12; i4 += 3) {
        for(i5 = 0; i5 < 15; i5 += 2) {
          v1 =  ( (v9[i5] - v11)  +  ( ( (g1 | v11)  &  (v11 ^ v6) )  * i0) ) ;
          v8[i4] =  (v11 +  ( (g1 * v6)  -  (i0 &  (v11 | v11) ) ) ) ;
          v2 =  ( (v11 -  (g1 *  ( ( ( (i0 +  (v11 - v9[i5]) )  ^ v11)  | v6)  & g5) ) )  + i0) ;
          v0 =  ( ( (g1 * v11)  - v11)  +  ( (v11 | v6)  & i0) ) ;
        }
      }
    }
    for(i0 = 2; i0 < 10; i0 += 2) {
      for(i3 = 0; i3 < 12; i3 += 1) {
        for(i5 = 0; i5 < 15; i5 += 2) {
          g5 =  ( ( (g0[i0] *  (v11 &  (v9[i5] | v10) ) )  - v4[i3])  +  (g0[i0] ^  (v11 +  ( (v9[i5] * v10)  - v4[i3]) ) ) ) ;
          v12 =  (v11 +  ( ( (v10 & v4[i3])  *  (v9[i5] |  ( (g0[i0] + v11)  ^ v10) ) )  - v4[i3]) ) ;
          g1 =  ( ( (v4[i3] *  ( (v10 | v11)  &  ( (v9[i5] +  (g0[i0] -  (v4[i3] * v10) ) )  ^ v11) ) )  - v9[i5])  + g0[i0]) ;
          v12 =  (v10 +  ( ( ( (v4[i3] |  (v9[i5] ^ v11) )  &  (g0[i0] + v10) )  * v4[i3])  -  ( ( (v9[i5] & v11)  * g0[i0])  - v10) ) ) ;
        }
      }
    }
  }
  else {
    for(i2 = 2; i2 < 15; i2 += 2) {
      v3[i2] =  (g2 +  ( (i0 *  (i1 & v7) )  -  ( ( (v6 + i0)  ^ i0)  | v3[i2]) ) ) ;
      v10 =  ( ( ( (i0 &  (g2 |  ( (v7 + i0)  ^  (v3[i2] - i1) ) ) )  * v6)  -  (i0 * i0) )  + g2) ;
      v13.s0 =  (v3[i2] +  (i1 -  ( (i0 &  ( (i0 ^ i0)  | v6) )  *  ( ( (v7 * g2)  - v3[i2])  +  (i1 & i0) ) ) ) ) ;
      v0 =  ( ( (i0 *  (v7 & i1) )  - v6)  +  (v3[i2] | g2) ) ;
      v0 =  ( ( (i0 *  ( (v3[i2] | v6)  &  (i0 ^ g2) ) )  - v7)  +  (i0 +  ( (i1 * i0)  - v3[i2]) ) ) ;
    }
  }
  for(i5 = 0; i5 < 15; i5 += 2) {
    v10 =  ( (v6 -  ( ( (v2 | g2)  &  (i2 ^  (v12 + i0) ) )  * v6) )  +  ( (v2 * g2)  - i2) ) ;
    v5 =  (g2 +  ( ( ( (v2 |  (v6 ^ i2) )  & v12)  * i0)  - g2) ) ;
    v1 =  ( ( ( (i2 & v12)  *  (v6 | v2) )  - g2)  +  ( (i0 +  (i2 -  (v12 * v6) ) )  ^ v2) ) ;
    v9[i5] =  ( (v6 -  ( ( (i2 | g2)  & v12)  *  ( (v2 + i0)  ^ v6) ) )  + i2) ;
  }
  i0 = 6;
  return  ( ( (g1 *  (g7 &  (v12 | g3) ) )  - g0[i0])  + g3) ;
}
