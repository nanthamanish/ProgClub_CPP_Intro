#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a % 2 == 0)
    {
        if (a % 4 == 0)
        {
            if (a % 8 == 0)
            {
                cout << "a is a multiple of 8 \n";
            }
            cout << "a is a multiple of 4 \n";
        }
        cout << "a is a multiple of 2 \n";
    }
    else
    {
        cout << "a is odd \n";
    }

    return 0;
}
