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
    ll a1, a2, a4, a5;
    cin >> a1 >> a2 >> a4 >> a5;

    ll maxFib = 0;

    for (ll a3 = -100; a3 <= 100; ++a3)
    {
        ll fibCount = 0;

        if (a1 + a2 == a3)
            fibCount++;
        if (a2 + a3 == a4)
            fibCount++;
        if (a3 + a4 == a5)
            fibCount++;

        maxFib = max(maxFib, fibCount);
    }

    cout << maxFib << '\n';
}

int main()
{
    fastread();

    cases(n)
    {
        solve();
    }
}
