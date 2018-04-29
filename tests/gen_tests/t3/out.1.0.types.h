// Main header for types

#ifndef TYPES_H_GUARD_
#define TYPES_H_GUARD_

// MODULE MAP
// MODULE0 :
//   FUNC0
//     DCALLS FUNC6
//     DCALLS FUNC13
//   FUNC13
int foo13(unsigned, unsigned, unsigned, unsigned, unsigned);
//     CCALLS FUNC6
//   FUNC7
int foo7(unsigned);
//   FUNC2
int foo2(unsigned);
//     DCALLS FUNC5
//     DCALLS FUNC18
//     DCALLS FUNC21
//   FUNC15
int foo15(unsigned);
//   FUNC18
int foo18(unsigned);
//   FUNC3
int foo3(unsigned);
//     DCALLS FUNC9
//     DCALLS FUNC10
//     DCALLS FUNC20
//   FUNC9
int foo9(unsigned);
//     DCALLS FUNC8
//     DCALLS FUNC19
//   FUNC19
int foo19(unsigned);
//   FUNC4
int foo4(unsigned);
//   FUNC14
int foo14(unsigned);
//     CCALLS FUNC11
// MODULE1 :
//   FUNC6
int foo6(unsigned, unsigned, unsigned, unsigned, unsigned);
//   FUNC1
int foo1(unsigned);
//     DCALLS FUNC7
//     DCALLS FUNC12
//   FUNC12
int foo12(unsigned);
//   FUNC5
int foo5(unsigned);
//     DCALLS FUNC15
//     DCALLS FUNC17
//   FUNC17
int foo17(unsigned);
//   FUNC21
int foo21(unsigned);
//   FUNC8
int foo8(unsigned);
//   FUNC10
int foo10(unsigned);
//   FUNC20
int foo20(unsigned);
//   FUNC11
int foo11(unsigned);
//     DCALLS FUNC16
//   FUNC16
int foo16(unsigned);
//     DCALLS FUNC14

// TYPEDEFS
typedef unsigned long long T0;
typedef unsigned T1;
typedef unsigned T2;
typedef unsigned long long T3;
typedef unsigned T4;
typedef unsigned long long T5;
typedef unsigned T6;
typedef unsigned T7;
typedef unsigned T8;
typedef unsigned T9;
typedef unsigned long long T10;
typedef unsigned long long T11;
typedef unsigned T12;
typedef unsigned T13;
typedef unsigned long long T14;
typedef unsigned long long T15;
typedef unsigned long long T16;
typedef unsigned T17;
typedef unsigned T18;
typedef unsigned T19;
typedef unsigned long long T20;
typedef unsigned long long T21;
typedef unsigned T22;
typedef unsigned T23;
typedef unsigned T24;
typedef struct  { unsigned s0; unsigned long long s1; unsigned long long s2; unsigned s3; unsigned long long s4; unsigned long long s5;} T25;
typedef  unsigned long long T26[6];
typedef struct  { unsigned long long s0; unsigned s1; unsigned long long s2; unsigned long long s3; unsigned s4;} T27;
typedef  unsigned long long T28[10];
typedef struct  { unsigned long long s0; unsigned long long s1; unsigned s2;} T29;
typedef struct  { unsigned long long s0; unsigned s1; unsigned long long s2; unsigned long long s3; unsigned long long s4;} T30;
typedef struct  { unsigned long long s0; unsigned long long s1; unsigned long long s2; unsigned long long s3;} T31;
typedef struct  { unsigned s0; unsigned s1; unsigned s2; unsigned long long s3; unsigned long long s4;} T32;
typedef struct  { unsigned long long s0; unsigned s1; unsigned long long s2;} T33;
typedef struct  { unsigned long long s0; unsigned s1; unsigned s2; unsigned s3; unsigned s4;} T34;
typedef struct  { unsigned s0; unsigned long long s1; unsigned long long s2; unsigned long long s3; unsigned s4;} T35;

// CCALL GUARD DECALARTIONS
extern int ccall_check_13_6;
extern int ccall_check_14_11;

// GLOBAL VARS DECALARTIONS
extern T24 g0;
extern T24 g1;
extern T34 g2;
extern T20 g3;
extern T33 g4;
extern T12 g5;
extern T13 g6;
extern T34 g7;
extern T19 g8;

#endif
