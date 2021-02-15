#include <bits/stdc++.h>

using namespace std;

void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << x << ' ' << y << '\n';

    return;
}

int main()
{
    int x = 2, y = 3;
    cout << x << ' ' << y << '\n';
    swap(x, y);

    return 0;
}
