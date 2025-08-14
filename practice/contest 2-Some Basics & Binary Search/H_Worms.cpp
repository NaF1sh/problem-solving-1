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

    vector<ll> a;
    ll sum = 0;
    for (size_t i = 0; i < m; i++)
    {
        ll a1;
        cin >> a1;

        sum += a1;

        a.push_back(sum);
    }
    ll q;
    cin >> q;

    for (size_t i = 0; i < q; i++)
    {
        ll q1;
        cin >> q1;

        ll ans = lower_bound(a.begin(), a.end(), q1) - a.begin();

        cout << ans + 1 << endl;
    }
    // change
}
int main()
{
    fastread();
    solve();
}
