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
    ll m;
    cin >> m;

    vector<vector<ll>> array(m, vector<ll>(m, 0));

    ll a = 0;
    ll b = 1;

    for (size_t i = 0; i < m - 1; i++)
    {
        array[i][a] = 1;
        array[i][b] = 1;
        a++;
        b++;
    }

    array[m - 1][m - 1] = 1;
    array[m - 1][0] = 1;

    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    fastread();
    cases(n)
    {
        solve();
    }
}
