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
    ll m, s, r;
    cin >> m >> s >> r;
    ll max1 = s - r;

    cout << max1 << " ";

    vector<ll> a(m - 1, 1);
    r = r - (m - 1);
    for (size_t i = 0; i < m - 1 && r > 0; i++)
    {
        ll add = min(r, max1 - 1);
        a[i] += add;
        r -= add;
    }

    for (size_t i = 0; i < m - 1; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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