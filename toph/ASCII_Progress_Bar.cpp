#include <bits/stdc++.h>
using namespace std;

int main()
{

    double N;

    cin >> N;

    int near_10 = floor(N / 10);
    cout << "[";
    for (int i = 0; i < 10; i++)
    {
        if (i < near_10)
        {
            cout << "+";
        }
        else
        {
            cout << ".";
        }
    }
    cout << "] ";
    int ans = floor(N - (near_10 * 10));
    cout << (near_10 * 10) + ans << "%";
}