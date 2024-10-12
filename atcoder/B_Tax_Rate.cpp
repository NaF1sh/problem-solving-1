#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int X = 1; X <= 50000; X++)
    {
        if (floor(X * 1.08) == N)
        {
            cout << X;
            return 0;
        }
    }
    cout << ":(";
    return 0;
}
