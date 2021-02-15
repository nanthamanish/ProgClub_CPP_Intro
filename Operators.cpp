#include <iostream>
using namespace std;
int main() {

    int a, b, x = 2, y = 2;
    cout << "Enter the values of a and b"<< endl;
    cin >> a >> b;
    cout << "a = " << a << "\nb = " << b << endl;
    
    cout << "a + b = " << a + b <<"\na - b = " << a - b <<"\na * b = " << a * b <<"\na / b = " << a / b << "\na % b = " << a % b << endl;

    cout << "x = " << x << " and y = " << y << endl;
    cout << "++x = " << ++x << endl;
    cout << "y++ = " << y++ << endl;

    cout<< "Final values of x and y are "<< x << " and " << y << " respectively" <<endl;

    cout << "Result of condition ((a > b) || ((a + b) <= 6)) is " << ((a > b) || ((a + b) <= 6)) << endl;

    cout << "a << 2 = " << (a << 2) << endl;
    a==2 ? cout<<"a is 2" << endl : cout << "a is not 2" << endl;
    /* expression 1 ? expresion 2 : expression 3 */
    /* if(a==2)
          cout << "a is 2" << endl;
       else
          cout << "a is not 2" << endl;
    */

    cout << "Size of a character in C++ is "<< sizeof(char) << endl;

   return 0;
}