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

    map<ll, ll> a;

    for (size_t i = 0; i < m; i++)
    {
        ll a1;
        cin >> a1;

        a[a1]++;
    }
    ll max1 = LONG_LONG_MIN;
    for (const auto &pair : a)
    {
        if (pair.second > max1)
        {
            max1 = pair.second;
        }
    }
    cout << max1 << " " << a.size();
}
int main()
{
    fastread();
    solve();
}
