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
    int n, m;
    cin >> n >> m;

    vector<ll> c(n);
    vector<int> r(n);

    for (int i = 0; i < n; i++)
        cin >> c[i];
    for (int i = 0; i < n; i++)
        cin >> r[i];

    unordered_map<ll, int> maxY;
    for (int i = 0; i < n; i++)
    {
        ll cen = c[i];
        int rad = r[i];

        for (ll x = cen - rad; x <= cen + rad; x++)
        {
            ll dx = abs(x - cen);
            ll rem = rad * rad - dx * dx;
            int max_y = sqrt(rem);
            maxY[x] = max(maxY[x], max_y);
        }
    }

    ll total = 0;
    for (const auto &p : maxY)
    {
        total += 2 * p.second + 1;
    }

    cout << total << "\n";
}

int main()
{
    fastread();
    cases(t)
    {
        solve();
    }
    return 0;
}