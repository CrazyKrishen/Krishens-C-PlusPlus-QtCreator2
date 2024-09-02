#include <iostream>
#define BADABS(X) (((X) < 0)? -(X) : X)
#define BADSQR(X) (X * X)
#define BADCUBE(X) (X) * (X) * (X)
using namespace std;


inline double square(double x) {
 return x * x ;
}
inline double cube(double x) {
 return x * x * x;
}
inline int absval(int n) {
 return (n >= 0) ? n : -n;
}
int main() {
 cout << "Comparing inline and #define\n" ;
 double t = 30.0;
 int i = 8, j = 8, k = 8, n = 8;
 cout << "\nBADSQR(t + 8) = " << BADSQR(t + 8)
      << "\nsquare(t + 8) = " << square(t + 8)
       << "\nBADCUBE(++i) = " << BADCUBE(++i)
       << "\ni = " << i
       << "\ncube(++j) = " << cube(++j)
       << "\nj = " << j
       << "\nBADABS(++k) = " << BADABS(++k)
       << "\nk = " << k
       << "\nabsval(++n) = " << absval(++n)
       << "\nn = " << n << endl;
      }


//Macro expansion provides no type-checking for arguments
//It is essentially an editing operation: Each occurrence of MACRO_ID is replaced by expr.
//Macro expansion is a mechanism for placing code inline by means of a preprocessor
//directive:
//#define MACRO_ID expr



//Question Mark in an equation example:
//double result = (num1 + num2) * (num1 > num2 ? num1 : num2);

//In this program, the equation (num1 + num2) * (num1 > num2 ? num1 : num2)
//uses the question mark (?) as a ternary conditional operator.
//It checks if num1 is greater than num2. If it is, it returns num1,
//otherwise, it returns num2. Then, it multiplies the sum of the two numbers by the result of the conditional operator.


//In general, code substitution macros should be avoided. They are regarded as evil by
//most serious C++ programmers. Preprocessor macros are used mostly for the
//following:
//1. #ifndef/#define/#endif wrapping around header files to avoid multiple inclusion
//2. #ifdef/#else/#endif to conditionally compile some parts of code but not others
//3. __FILE__ and __LINE__ macros for debugging and profiling


//As a rule, inline functions should be used instead of macros for code substitutions.
