#include <bits/stdc++.h>

using namespace std;
using namespace std::chrono;

void printSum()
{
    long long s = 0;
    for (int i = 0; i < 1000000; i++)
        s += i;
    cout << s << '\n';
}

int main()
{
    auto start = high_resolution_clock::now();
    printSum();
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken: " << duration.count() << " microseconds\n";

    return 0;
}
