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
    ll m, m1;
    cin >> m >> m1;

    vector<vector<char>> a(m, vector<char>(m1));
    ll maxrowcount = -1;
    ll maxrow = -1;
    for (size_t i = 0; i < m; i++)
    {
        ll rowcount = 0;
        for (size_t j = 0; j < m1; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == '#')
                rowcount++;
        }
        if (rowcount > maxrowcount)
        {
            maxrowcount = rowcount;
            maxrow = i;
        }
    }

    ll start = -1;
    ll end = -1;
    for (size_t j = 0; j < m1; j++)
    {
        if (a[maxrow][j] == '#' && start == -1)
        {
            start = j;
        }
        if (a[maxrow][j] == '#')
        {
            end = j;
        }
    }

    if (start == end)
    {
        cout << maxrow + 1 << " " << end + 1 << endl;
        return;
    }

    ll middle = start + end;
    middle = (middle) / 2;

    cout << maxrow + 1 << " " << middle + 1 << endl;
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