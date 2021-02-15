#include <bits/stdc++.h>

using namespace std;

void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    return;
}

int main () {
  
   int a = 100, b=200; 
   cout << "Before Swap : a = " << a << " b = " << b << endl;
   swap(a, b); 
   cout << "After Swap : a = " << a << " b = " << b << endl;   
   return 0;
}
