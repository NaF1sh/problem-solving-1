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

    map<pair<ll, ll>, string> a;

    for (size_t i = 0; i < m; i++)
    {

        ll a1, a2;
        cin >> a1 >> a2;

        string a3;
        cin >> a3;

        a[make_pair(a1, a2)] = a3;
    }
    ll m1;
    cin >> m1;
    while (m1--)
    {

        ll a1, a2;
        cin >> a1 >> a2;

        auto it = a.find(make_pair(a1, a2));
        if (it != a.end())
        {
            cout << it->second << endl;
        }
        }
}
int main()
{
    fastread();
    solve();
}
