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
    ll c1, c2, c3;
    ll a1, a2, a3, a4, a5;

    cin >> c1 >> c2 >> c3 >> a1 >> a2 >> a3 >> a4 >> a5;

    if (a1 > c1 || a2 > c2 || a3 > c3)
    {
        cout << "NO" << endl;
        return;
    }

    c1 -= a1;
    c2 -= a2;
    c3 -= a3;

    if (a4 > c1)
    {
        a4 -= c1;
        c1 = 0;
    }
    else
    {
        c1 -= a4;
        a4 = 0;
    }

    if (a5 > c2)
    {
        a5 -= c2;
        c2 = 0;
    }
    else
    {
        c2 -= a5;
        a5 = 0;
    }

    if (a4 + a5 > c3)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
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