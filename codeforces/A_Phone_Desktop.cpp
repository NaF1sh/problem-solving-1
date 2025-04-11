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
    double x, y, ans;
    cin >> x >> y;

    ans = ceil(y / 2);

    while (ans * 15 - y * 4 < x)
    {
        ans++;
    }

    cout << ans << "\n";
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