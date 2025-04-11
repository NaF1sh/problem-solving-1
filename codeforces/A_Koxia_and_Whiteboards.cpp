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

    ll m, m1;
    cin >> m >> m1;
    multiset<ll> a;
    for (size_t i = 0; i < m; i++)
    {
        ll a1;
        cin >> a1;

        a.insert(a1);
    }

    for (size_t i = 0; i < m1; i++)
    {
        ll a1;
        cin >> a1;

        a.erase(a.begin());
        a.insert(a1);
    }
    ll sum = 0;
    for (ll a2 : a)
    {
        sum += a2;
    }

    cout << sum << endl;
}
int main()
{
    fastread();
    cases(n)
    {
        solve();
    }
}
