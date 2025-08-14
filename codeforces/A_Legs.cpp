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
    cin >> m;

    ll an1 = m / 4;
    ll an1_2 = m - (an1 * 4);

    ll ans = an1_2 / 2;

    cout << an1 + ans << endl;
}
int main()
{
    fastread();
    cases(n)
    {
        solve();
    }
}
