#include <bits/stdc++.h>

using namespace std;

int main()
{
    char x = 'W';
    switch (x)
    {
    case 'W':
        cout << "You win!\n";
        break;
    case 'D':
        cout << "It's a draw\n";
        break;
    case 'L':
        cout << "You lose!\n";
        break;
    default:
        cout << "invalid case -_-\n";
        break;
    }

    return 0;
}
