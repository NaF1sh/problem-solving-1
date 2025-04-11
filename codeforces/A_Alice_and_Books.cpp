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

    ll max1 = LONG_LONG_MIN;
    for (size_t i = 0; i < m; i++)
    {
        cin >> a[i];
        if (i < m - 1 && a[i] >= max1)
        {
            max1 = a[i];
        }
    }
    cout << max1 + a[m - 1] << endl;
}

int main()
{
    fastread();

    cases(n)
    {
        solve();
    }
}
