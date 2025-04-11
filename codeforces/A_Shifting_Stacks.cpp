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

    for (ll i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    ll excess = 0;
    for (ll i = 0; i < m; i++)
    {
        if (a[i] + excess < i)
        {
            cout << "NO" << endl;
            return;
        }
        excess += a[i] - i;
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