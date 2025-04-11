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

    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll min1 = (a + b);

    ll min2 = (c + d);

    cout << max(min1, min2) << endl;
}
int main()
{
    fastread();
    cases(n)
    {
        solve();
    }
}
