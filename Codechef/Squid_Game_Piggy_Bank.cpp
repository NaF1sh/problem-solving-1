#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    ll n;
    cin >> n;
    ll m;
    cin >> m;

    ll ans = (n - m) * 10000;
    cout << ans;
}

int main()
{
    fastread();
    solve();
    return 0;
}
