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
    ll sum = 0;
    for (size_t i = 0; i < m; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cout << sum - 2 * a[m - 2] << endl;
}

int main()
{
    fastread();

    cases(t)
    {
        solve();
    }
    return 0;
}