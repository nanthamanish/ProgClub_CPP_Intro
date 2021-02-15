#include <iostream>
using namespace std;

class Abc
{
private:
    int a;
    int b; //data
public:
    void putvalue(int a1, int b1)
    { //functions
        a = a1;
        b = b1;
    }
    int sum()
    {
        return a + b;
    }
};

int main()
{
    Abc obj;            //obj.a = error, as a is a private member
    obj.putvalue(3, 4);
    cout << obj.sum();
}
