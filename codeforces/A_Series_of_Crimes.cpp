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

int main()
{
    fastread();

    map<ll, ll> row, col; // Separate maps for rows and columns
    ll n, m;
    cin >> n >> m;
    for (size_t i = 1; i <= n; i++)
    {
        for (size_t j = 1; j <= m; j++)
        {
            char c;
            cin >> c;
            if (c == '*')
            {
                row[i]++;
                col[j]++;
            }
        }
    }

    for (const auto &pair : row)
    {
        if (pair.second == 1)
        {
            cout << pair.first << " ";
        }
    }

    for (const auto &pair : col)
    {
        if (pair.second == 1)
        {
            cout << pair.first << " ";
        }
    }

    return 0;
}
