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

    ll ans = (m / 2) + 1;
    cout << ans << endl;
}

int main()
{
    fastread();

    cases(n)
    {
        solve();
    }
}
