#include <iostream>
using namespace std;
 
// function declaration
int maximum1(int num1, int num2);

// function returning the max between two numbers
int maximum2(int num1, int num2) {
   // local variable declaration
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}


int main () {
   // local variable declaration:
   int a = 100;
   int b = 200;
   int ret1, ret2;
 
   // calling a function to get max value.
   ret1 = maximum1(a, b);
   cout << "Max value returned by maximum1 is : " << ret1 << endl;
   ret2 = maximum2(a, b);
   cout << "Max value returned by maximum2 is : " << ret2 << endl;

   return 0;
}
 
// function returning the max between two numbers
int maximum1(int num1, int num2) {
   // local variable declaration
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}