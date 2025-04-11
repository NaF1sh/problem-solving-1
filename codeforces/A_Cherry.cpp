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
    vector<ll> v(m);

    for (ll i = 0; i < m; i++)
    {
        cin >> v[i];
    }

    ll max_product = LLONG_MIN;

    for (ll i = 0; i < m - 1; i++)
    {
        max_product = max(max_product, v[i] * v[i + 1]);
    }

    cout << max_product << endl;
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