#include <bits/stdc++.h>
#include <cmath> // Include cmath for the ceil function
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
    ll a, b, c, d, k;
    cin >> a >> b >> c >> d >> k;

        ll ans1 = ceil((double)a / c);
    ll ans2 = ceil((double)b / d);

    if (ans1 + ans2 > k)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans1 << " " << ans2 << endl;
    }
}

int main()
{
    fastread();

    cases(n)
    {
        solve();
    }
}
