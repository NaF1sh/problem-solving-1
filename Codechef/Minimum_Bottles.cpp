#include <iostream>
using namespace std;

#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

typedef long long ll;

void solve()
{
    ll m, X;
    cin >> m >> X;
    ll sum = 0;
    while (m--)
    {
        ll a;
        cin >> a;
        sum += a;
    }
    ll ans = 0;
    if (sum > 0)
    {
        if (sum >= X)
        {
            ans = (sum + X - 1) / X;
        }
        else
        {
            ans = 1;
        }
    }
    cout << ans << endl;
}

int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}