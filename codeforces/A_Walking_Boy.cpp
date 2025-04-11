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

    ll count = 0;
    ll prev = 0;

    for (size_t i = 0; i < m; i++)
    {
        count += (a[i] - prev) / 120;
        prev = a[i];
    }

    count += (1440 - prev) / 120;

    if (count >= 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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