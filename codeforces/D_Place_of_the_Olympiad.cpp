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
    ll r, c, p;
    cin >> r >> c >> p;
    ll l = 1, h = c, ans = c;
    while (l <= h)
    {
        ll m = (l + h) / 2, total = 0;
        ll full = c / (m + 1), rem = c - full * (m + 1);
        ll cap = full * m + min(rem, m);
        total = r * cap;
        if (total >= p)
        {
            ans = m;
            h = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    cout << ans << "\n";
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
