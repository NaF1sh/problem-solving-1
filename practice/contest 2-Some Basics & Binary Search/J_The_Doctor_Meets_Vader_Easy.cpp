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

    vector<pair<ll, ll>> a1(m1);

    for (size_t i = 0; i < m1; i++)
    {
        cin >> a1[i].first >> a1[i].second;
    }
    sort(a1.begin(), a1.end());
    vector<ll> sum(m1);
    sum[0] = a1[0].second;
    for (size_t i = 1; i < m1; i++)
    {
        sum[i] = sum[i - 1] + a1[i].second;
    }

    for (auto q : a)
    {
        ll ans = upper_bound(a1.begin(), a1.end(), make_pair(q, LLONG_MAX)) - a1.begin();

        if (ans > 0)
        {
            cout << sum[ans - 1] << " ";
        }
        else
        {
            cout << 0 << " ";
        }
    }
}
int main()
{
    fastread();
    solve();
}
