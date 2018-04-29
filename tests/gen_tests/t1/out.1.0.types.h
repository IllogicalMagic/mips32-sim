// Main header for types

#ifndef TYPES_H_GUARD_
#define TYPES_H_GUARD_

// MODULE MAP
// MODULE0 :
//   FUNC0
//   FUNC8
int foo8(unsigned);
//     DCALLS FUNC6
//     CCALLS FUNC11
//     CCALLS FUNC17
//   FUNC14
int foo14(unsigned);
//     DCALLS FUNC11
//   FUNC22
int foo22(unsigned);
// MODULE1 :
//   FUNC1
int foo1(unsigned);
//     DCALLS FUNC18
//   FUNC9
int foo9(unsigned);
//     DCALLS FUNC2
//   FUNC16
int foo16(unsigned);
//   FUNC23
int foo23(unsigned);
// MODULE2 :
//   FUNC2
int foo2(unsigned);
//     DCALLS FUNC8
//     DCALLS FUNC17
//     DCALLS FUNC23
//     CCALLS FUNC9
//   FUNC10
int foo10(unsigned);
//     CCALLS FUNC8
//     CCALLS FUNC12
//     CCALLS FUNC18
//   FUNC17
int foo17(unsigned);
//     DCALLS FUNC5
//     DCALLS FUNC7
//     CCALLS FUNC1
//   FUNC3
int foo3(unsigned);
// MODULE3 :
//   FUNC5
int foo5(unsigned);
//     DCALLS FUNC10
//     DCALLS FUNC12
//     DCALLS FUNC13
//     DCALLS FUNC16
//     CCALLS FUNC8
//   FUNC11
int foo11(unsigned);
//     DCALLS FUNC9
//     CCALLS FUNC18
//   FUNC18
int foo18(unsigned);
//     DCALLS FUNC14
//     CCALLS FUNC1
//   FUNC4
int foo4(unsigned);
// MODULE4 :
//   FUNC6
int foo6(unsigned);
//     CCALLS FUNC17
//   FUNC12
int foo12(unsigned);
//     CCALLS FUNC1
//     CCALLS FUNC5
//     CCALLS FUNC7
//   FUNC19
int foo19(unsigned);
//   FUNC15
int foo15(unsigned);
//     DCALLS FUNC21
// MODULE5 :
//   FUNC7
int foo7(unsigned);
//     CCALLS FUNC6
//   FUNC13
int foo13(unsigned);
//     DCALLS FUNC19
//     DCALLS FUNC20
//     DCALLS FUNC22
//     CCALLS FUNC11
//   FUNC20
int foo20(unsigned);
//   FUNC21
int foo21(unsigned);

// TYPEDEFS
typedef unsigned long long T0;
typedef unsigned long long T1;
typedef unsigned T2;
typedef unsigned long long T3;
typedef unsigned long long T4;
typedef unsigned long long T5;
typedef unsigned T6;
typedef unsigned long long T7;
typedef unsigned long long T8;
typedef unsigned T9;
typedef unsigned T10;
typedef unsigned T11;
typedef unsigned long long T12;
typedef unsigned long long T13;
typedef unsigned long long T14;
typedef unsigned long long T15;
typedef unsigned long long T16;
typedef unsigned T17;
typedef unsigned long long T18;
typedef unsigned T19;
typedef unsigned long long T20;
typedef unsigned T21;
typedef unsigned T22;
typedef unsigned long long T23;
typedef unsigned T24;
typedef  unsigned T25[12];
typedef struct  { unsigned s0; unsigned long long s1; unsigned s2; unsigned long long s3; unsigned s4;} T26;
typedef  unsigned T27[6];
typedef  unsigned long long T28[12];
typedef struct  { unsigned long long s0; unsigned s1; unsigned s2; unsigned long long s3; unsigned long long s4; unsigned long long s5;} T29;
typedef  unsigned long long T30[10];
typedef  unsigned long long T31[7];
typedef  unsigned long long T32[15];
typedef  unsigned T33[10];
typedef  unsigned T34[9];
typedef struct  { unsigned s0; unsigned s1; unsigned s2;} T35;

// CCALL GUARD DECALARTIONS
extern int ccall_check_2_9;
extern int ccall_check_5_8;
extern int ccall_check_6_17;
extern int ccall_check_7_6;
extern int ccall_check_8_11;
extern int ccall_check_8_17;
extern int ccall_check_10_8;
extern int ccall_check_10_12;
extern int ccall_check_10_18;
extern int ccall_check_11_18;
extern int ccall_check_12_1;
extern int ccall_check_12_5;
extern int ccall_check_12_7;
extern int ccall_check_13_11;
extern int ccall_check_17_1;
extern int ccall_check_18_1;

// GLOBAL VARS DECALARTIONS
extern T30 g0;
extern T23 g1;
extern T16 g2;
extern T5 g3;
extern T19 g4;
extern T2 g5;
extern T32 g6;
extern T13 g7;

#endif
