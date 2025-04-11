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

    sort(a.begin() + 1, a.end());

    for (size_t i = 1; i < m; i++)
    {
        if (a[0] < a[i])
        {
            ll diff = a[i] - a[0];
            a[0] += (diff + 1) / 2;
        }
    }

    cout << a[0] << endl;
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