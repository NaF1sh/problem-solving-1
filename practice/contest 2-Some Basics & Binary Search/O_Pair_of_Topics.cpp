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
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);

    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (ll i = 0; i < n; i++)
        cin >> b[i];

    vector<ll> c(n);
    for (ll i = 0; i < n; i++)
    {
        c[i] = a[i] - b[i];
    }

    sort(c.begin(), c.end());

    ll count = 0;
    for (ll i = 0; i < n; i++)
    {
        if (c[i] > 0)
        {
            count += (n - (i + 1));
        }
        else
        {
            int j = upper_bound(c.begin() + i + 1, c.end(), -c[i]) - c.begin();
            count += (n - j);
        }
    }

    cout << count << endl;
}

int main()
{
    fastread();
    solve();
    return 0;
}