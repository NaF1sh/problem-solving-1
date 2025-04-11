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
    ll a, b, c, d;

    cin >> m >> a >> b >> c >> d;

    ll minrange = c - d;
    ll maxrange = c + d;
    ll sum1 = m * (a + b);
    ll sum2 = m * (a - b);

    if ((sum1 >= minrange && sum2 <= maxrange))
    {
        cout << "Yes" << endl;
        return;
    }

    cout << "No" << endl;
}

int main()
{
    fastread();

    cases(n)
    {
        solve();
    }
}