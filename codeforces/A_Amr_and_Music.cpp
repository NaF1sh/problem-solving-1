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

    vector<ll> a(m);

    for (size_t i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    multimap<ll, ll> a1;

    for (size_t i = 0; i < m; i++)
    {
        a1.insert({a[i], i});
    }
    ll days = 0;

    vector<ll> ans;
    for (auto &pair : a1)
    {
        if (pair.first + days <= m1)
        {
            days += pair.first;
            ans.push_back(pair.second);
        }
    }

    cout << ans.size() << endl;

    for (auto a : ans)
    {
        cout << a + 1 << " ";
    }
}
int main()
{
    fastread();
    solve();
}
