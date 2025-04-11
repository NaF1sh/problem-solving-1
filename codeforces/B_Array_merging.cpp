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

    vector<pair<ll, ll>> a(m);
    vector<pair<ll, ll>> b(m);

    for (size_t i = 0; i < m; i++)
    {
        cin >> a[i].first;
        a[i].second = 0;
    }
    for (size_t i = 0; i < m; i++)
    {
        cin >> b[i].first;
        b[i].second = 0;
    }

    ll amax_count = 0, amax_counti = 0, count = 1;
    for (size_t i = 0; i < m; i++)
    {
        if (i + 1 < m && a[i].first == a[i + 1].first)
            count++;
        else
        {
            a[i].second = count;
            if (amax_count < count)
            {
                amax_count = count;
                amax_counti = a[i].first;
            }
            count = 1;
        }
    }

    ll bmax_count = 0, bmax_counti = 0, count1 = 1;
    for (size_t i = 0; i < m; i++)
    {
        if (i + 1 < m && b[i].first == b[i + 1].first)
            count1++;
        else
        {
            b[i].second = count1;
            if (bmax_count < count1)
            {
                bmax_count = count1;
                bmax_counti = b[i].first;
            }
            count1 = 1;
        }
    }

    // New combination logic: for every candidate number in the arrays,
    // compute the best contiguous block from a and b and output the maximum sum.
    ll up = 0;
    for (size_t i = 0; i < m; i++)
    {
        up = max(up, a[i].first);
        up = max(up, b[i].first);
    }
    vector<ll> bestA(up + 1, 0), bestB(up + 1, 0);
    for (size_t i = 0; i < m; i++)
    {
        bestA[a[i].first] = max(bestA[a[i].first], a[i].second);
        bestB[b[i].first] = max(bestB[b[i].first], b[i].second);
    }
    ll ans = 0;
    for (int val = 1; val <= up; val++)
        ans = max(ans, bestA[val] + bestB[val]);
    cout << ans << endl;
}

int main()
{
    fastread();
    cases(n)
    {
        solve();
    }
}
