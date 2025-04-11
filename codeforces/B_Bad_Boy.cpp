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
    ll x, y, x1, x2;
    cin >> x >> y >> x1 >> x2;

    cout << 1 << " " << 1 << " " << x << " " << y << endl;
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