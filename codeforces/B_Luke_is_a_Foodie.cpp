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
    ll m, x;
    cin >> m >> x;
    vector<ll> a(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    ll vmin = a[0] - x;
    ll vmax = a[0] + x;
    ll count = 0;

    for (ll i = 1; i < m; i++)
    {
        ll mina = a[i] - x;
        ll maxa = a[i] + x;

        if (max(vmin, mina) <= min(vmax, maxa))
        {

            vmin = max(vmin, mina);
            vmax = min(vmax, maxa);
        }
        else
        {

            count++;
            vmin = mina;
            vmax = maxa;
        }
    }

    cout << count << endl;
}

int main()
{
    fastread();
    cases(n)
    {
        solve();
    }
}
