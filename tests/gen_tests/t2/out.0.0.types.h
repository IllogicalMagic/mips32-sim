// Main header for types

#ifndef TYPES_H_GUARD_
#define TYPES_H_GUARD_

// MODULE MAP
// MODULE0 :
//   FUNC0
//   FUNC5
int foo5(unsigned);
//   FUNC9
int foo9(unsigned);
//   FUNC10
int foo10(unsigned);
//   FUNC6
int foo6(unsigned);
// MODULE1 :
//   FUNC1
int foo1(unsigned);
//     DCALLS FUNC4
//     DCALLS FUNC5
//     DCALLS FUNC9
//   FUNC7
int foo7(unsigned);
//   FUNC2
int foo2(unsigned);
//   FUNC11
int foo11(unsigned);
// MODULE2 :
//   FUNC4
int foo4(unsigned);
//     DCALLS FUNC7
//     DCALLS FUNC8
//   FUNC8
int foo8(unsigned);
//   FUNC3
int foo3(unsigned);
//     DCALLS FUNC10
//     DCALLS FUNC11
//     DCALLS FUNC12
//   FUNC12
int foo12(unsigned);

// TYPEDEFS
typedef unsigned T0;
typedef unsigned T1;
typedef unsigned long long T2;
typedef unsigned long long T3;
typedef unsigned long long T4;
typedef unsigned T5;
typedef unsigned T6;
typedef unsigned T7;
typedef unsigned long long T8;
typedef unsigned T9;
typedef unsigned T10;
typedef unsigned long long T11;
typedef unsigned long long T12;
typedef unsigned T13;
typedef unsigned T14;
typedef unsigned T15;
typedef unsigned T16;
typedef unsigned T17;
typedef unsigned T18;
typedef unsigned T19;
typedef struct  { unsigned s0; unsigned long long s1; unsigned long long s2; unsigned s3; unsigned long long s4; unsigned s5;} T20;
typedef struct  { unsigned s0; unsigned s1; unsigned long long s2; unsigned s3;} T21;
typedef  unsigned long long T22[15];
typedef struct  { unsigned long long s0; unsigned s1; unsigned s2;} T23;
typedef  unsigned long long T24[7];
typedef  unsigned T25[9];
typedef struct  { unsigned s0; unsigned long long s1; unsigned s2; unsigned s3; unsigned long long s4; unsigned s5;} T26;
typedef struct  { unsigned long long s0; unsigned long long s1; unsigned s2; unsigned s3;} T27;
typedef  unsigned long long T28[7];

// CCALL GUARD DECALARTIONS

// GLOBAL VARS DECALARTIONS
extern T26 g0;
extern T1 g1;
extern T17 g2;
extern T22 g3;
extern T19 g4;
extern T0 g5;
extern T8 g6;
extern T0 g7;
extern T17 g8;
extern T28 g9;
extern T10 g10;

#endif
