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

    vector<ll> a(m);

    for (ll i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    for (size_t i = 0; i < m1; i++)
    {
        ll a1;
        cin >> a1;

        ll ans = upper_bound(a.begin(), a.end(), a1) - a.begin();
        cout << ans << " ";
    }
}
int main()
{
    fastread();
    solve();
}
