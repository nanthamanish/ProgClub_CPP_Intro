//Local Variable
#include <iostream>
using namespace std;

void f1()
{
    int age1 = 18;
}
int main()
{
    int age1 = 17;
    f1();
    cout << "Age is: " << age1;
    return 0;
}
