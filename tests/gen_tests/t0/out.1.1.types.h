// Main header for types

#ifndef TYPES_H_GUARD_
#define TYPES_H_GUARD_

// MODULE MAP
// MODULE0 :
//   FUNC0
//     DCALLS FUNC8
//     DCALLS FUNC10
//     DCALLS FUNC11
//     DCALLS FUNC14
//     DCALLS FUNC17
//   FUNC3
int foo3(unsigned, unsigned, unsigned, unsigned, unsigned);
//     DCALLS FUNC9
//     DCALLS FUNC22
//     DCALLS FUNC23
//   FUNC7
int foo7(unsigned, unsigned, unsigned, unsigned, unsigned);
//     CCALLS FUNC5
//     CCALLS FUNC17
//   FUNC10
int foo10(unsigned, unsigned, unsigned, unsigned, unsigned);
//     CCALLS FUNC5
//   FUNC13
int foo13(unsigned, unsigned, unsigned, unsigned, unsigned);
//     DCALLS FUNC16
//     DCALLS FUNC19
//   FUNC16
int foo16(unsigned, unsigned, unsigned, unsigned, unsigned);
//     CCALLS FUNC5
//   FUNC19
int foo19(unsigned, unsigned, unsigned, unsigned, unsigned);
//   FUNC22
int foo22(unsigned, unsigned, unsigned, unsigned, unsigned);
// MODULE1 :
//   FUNC1
int foo1(unsigned, unsigned, unsigned, unsigned, unsigned);
//     DCALLS FUNC15
//   FUNC5
int foo5(unsigned, unsigned, unsigned, unsigned, unsigned);
//     DCALLS FUNC2
//   FUNC8
int foo8(unsigned, unsigned, unsigned, unsigned, unsigned);
//     DCALLS FUNC1
//     DCALLS FUNC5
//     DCALLS FUNC6
//   FUNC11
int foo11(unsigned, unsigned, unsigned, unsigned, unsigned);
//     DCALLS FUNC12
//     DCALLS FUNC13
//     CCALLS FUNC1
//     CCALLS FUNC17
//   FUNC14
int foo14(unsigned, unsigned, unsigned, unsigned, unsigned);
//     CCALLS FUNC11
//   FUNC17
int foo17(unsigned, unsigned, unsigned, unsigned, unsigned);
//     DCALLS FUNC20
//     CCALLS FUNC10
//   FUNC20
int foo20(unsigned, unsigned, unsigned, unsigned, unsigned);
//   FUNC23
int foo23(unsigned, unsigned, unsigned, unsigned, unsigned);
// MODULE2 :
//   FUNC2
int foo2(unsigned, unsigned, unsigned, unsigned, unsigned);
//     CCALLS FUNC5
//     CCALLS FUNC8
//   FUNC6
int foo6(unsigned, unsigned, unsigned, unsigned, unsigned);
//     DCALLS FUNC7
//   FUNC9
int foo9(unsigned, unsigned, unsigned, unsigned, unsigned);
//     DCALLS FUNC18
//   FUNC12
int foo12(unsigned, unsigned, unsigned, unsigned, unsigned);
//   FUNC15
int foo15(unsigned, unsigned, unsigned, unsigned, unsigned);
//     DCALLS FUNC3
//     DCALLS FUNC21
//     CCALLS FUNC6
//   FUNC18
int foo18(unsigned, unsigned, unsigned, unsigned, unsigned);
//     CCALLS FUNC10
//   FUNC21
int foo21(unsigned, unsigned, unsigned, unsigned, unsigned);
//   FUNC4
int foo4(unsigned);

// TYPEDEFS
typedef unsigned T0;
typedef unsigned long long T1;
typedef unsigned T2;
typedef unsigned T3;
typedef unsigned T4;
typedef unsigned T5;
typedef unsigned T6;
typedef unsigned long long T7;
typedef unsigned long long T8;
typedef unsigned long long T9;
typedef unsigned T10;
typedef unsigned T11;
typedef unsigned T12;
typedef unsigned long long T13;
typedef unsigned long long T14;
typedef unsigned T15;
typedef unsigned long long T16;
typedef unsigned T17;
typedef unsigned long long T18;
typedef unsigned T19;
typedef unsigned T20;
typedef unsigned T21;
typedef struct  { unsigned long long s0; unsigned s1; unsigned long long s2; unsigned long long s3; unsigned long long s4;} T22;
typedef  unsigned T23[10];
typedef struct  { unsigned s0; unsigned long long s1; unsigned long long s2; unsigned s3; unsigned long long s4;} T24;
typedef struct  { unsigned s0; unsigned s1; unsigned s2; unsigned s3; unsigned s4; unsigned long long s5;} T25;
typedef struct  { unsigned s0; unsigned long long s1; unsigned s2; unsigned s3;} T26;
typedef struct  { unsigned long long s0; unsigned long long s1; unsigned s2; unsigned long long s3;} T27;
typedef  unsigned long long T28[9];
typedef  unsigned long long T29[5];
typedef  unsigned T30[8];
typedef struct  { unsigned long long s0; unsigned s1; unsigned s2;} T31;

// CCALL GUARD DECALARTIONS
extern int ccall_check_2_5;
extern int ccall_check_2_8;
extern int ccall_check_7_5;
extern int ccall_check_7_17;
extern int ccall_check_10_5;
extern int ccall_check_11_1;
extern int ccall_check_11_17;
extern int ccall_check_14_11;
extern int ccall_check_15_6;
extern int ccall_check_16_5;
extern int ccall_check_17_10;
extern int ccall_check_18_10;

// GLOBAL VARS DECALARTIONS
extern T26 g0;
extern T7 g1;
extern T12 g2;
extern T12 g3;
extern T4 g4;
extern T18 g5;
extern T1 g6;

#endif
