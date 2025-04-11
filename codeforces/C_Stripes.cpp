#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    char a[8][8];

    for (size_t i = 0; i < 8; i++)
    {
        for (size_t j = 0; j < 8; j++)
        {
            cin >> a[i][j];
        }
    }

    // Check rows for 'R' stripes
    for (size_t i = 0; i < 8; i++)
    {
        bool allR = true;
        for (size_t j = 0; j < 8; j++)
        {
            if (a[i][j] != 'R')
            {
                allR = false;
                break;
            }
        }
        if (allR)
        {
            cout << "R" << endl;
            return;
        }
    }

    // Check columns for 'B'
    for (size_t i = 0; i < 8; i++)
    {
        bool allB = true;
        for (size_t j = 0; j < 8; j++)
        {
            if (a[j][i] != 'B')
            {
                allB = false;
                break;
            }
        }
        if (allB)
        {
            cout << "B" << endl;
            return;
        }
    }
}

int main()
{
    fastread();
    cases(n)
    {
        solve();
    }
    return 0;
}