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
    ll n, m, k;
    cin >> n >> m >> k;

    vector<ll> a(n);
    for (size_t i = 0; i < n; i++)
        cin >> a[i];

    vector<ll> b(m);
    for (size_t i = 0; i < m; i++)
        cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<ll> c = a;

    for (size_t i = 0; i < m; i++)
    {
        ll idx = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
        ll value = (idx > 0) ? (a[idx - 1] + b[i]) : b[i];

        for (size_t j = 0; j < k; j++)
            c.push_back(value);
    }

    vector<ll> prefix_sum(m, 0);
    prefix_sum[0] = b[0];
    for (size_t i = 1; i < m; i++)
        prefix_sum[i] = prefix_sum[i - 1] + b[i];

    ll sum = 0;
    for (size_t i = 0; i < c.size(); i++)
    {
        ll low = upper_bound(prefix_sum.begin(), prefix_sum.end(), c[i]) - prefix_sum.begin();
        sum += low;
    }

    cout << sum << endl;
}

int main()
{
    fastread();
    cases(t)
    {
        solve();
    }
}
