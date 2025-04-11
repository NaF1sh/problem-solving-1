#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    ll m, m1;
    cin >> m >> m1;
    vector<pair<ll, ll>> a(m);
    ll max1 = LONG_LONG_MIN;
    ll min1 = LONG_LONG_MAX;
    for (size_t i = 0; i < m; i++)
    {
        cin >> a[i].first >> a[i].second;

        if (a[i].first > a[i].second)
        {
            swap(a[i].first, a[i].second);
        }

        max1 = max(a[i].first, max1);
        min1 = min(min1, a[i].second);
    }
    if (max1 > min1)
    {
        cout << -1 << endl;
        return;
    }

    if (m1 >= max1 && m1 <= min1)
    {
        cout << 0 << endl;
        return;
    }
    ll ans = min(abs(m1 - max1), abs(m1 - min1));
    cout << ans << endl;
}

int main()
{
    fastread();
    solve();
    return 0;
}