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
    ll t, l, r, d, u;

    cin >> l >> r >> d >> u;
    if (r - l == 0 && u - d == 0 && l == u)
        cout << "Yes" << endl;

    else
    {
        cout << "No" << endl;
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
