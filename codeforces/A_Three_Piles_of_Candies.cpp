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
    ll sum = 0;
    for (size_t i = 0; i < 3; i++)
    {
        ll a;
        cin >> a;
        sum += a;
    }
    ll ans = sum / 2;

    cout << ans << endl;
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