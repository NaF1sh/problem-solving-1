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

    vector<ll> a(m);
    for (size_t i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    if (m > 1 && (a[0] > a[1] || a[m - 1] > a[m - 2]))
    {
        cout << "NO" << endl;
        return;
    }

    for (size_t i = 1; i < m - 1; i++)
    {
        ll min1 = min(a[i - 1], a[i + 1]);
        if (a[i] >= min1 * 2)
        {
            a[i] -= min1 * 2;
            a[i - 1] -= min1;
            a[i + 1] -= min1;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }

    for (size_t i = 0; i < m; i++)
    {
        if (a[i] != 0)
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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
