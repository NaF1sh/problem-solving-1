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

    map<ll, string> a;
    while (m--)
    {

        string handle;
        cin >> handle;

        ll s_hacks;
        cin >> s_hacks;
        ll un_hacks;
        cin >> un_hacks;
        ll a1, b, c, d, e;
        cin >> a1 >> b >> c >> d >> e;

        ll total = (s_hacks * 100) - (un_hacks * 50) + a1 + b + c + d + e;

        a[total] = handle;
    }

    auto it = a.rbegin();

    cout << it->second;
}
int main()
{
    fastread();
    solve();
}
