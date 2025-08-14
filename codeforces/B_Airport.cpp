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

    multiset<ll, greater<ll>> maxSet; // For maximum calculation
    multiset<ll> minSet;              // For minimum calculation

    for (ll i = 0; i < m1; i++)
    {
        ll a1;
        cin >> a1;
        maxSet.insert(a1);
        minSet.insert(a1);
    }

    ll max1 = 0;
    for (ll i = 0; i < m; i++)
    {
        ll current = *maxSet.begin();
        max1 += current;
        maxSet.erase(maxSet.begin());
        if (current > 1)
        {
            maxSet.insert(current - 1);
        }
    }

    ll min1 = 0;
    for (ll i = 0; i < m; i++)
    {
        ll current = *minSet.begin();
        min1 += current;
        minSet.erase(minSet.begin());
        if (current > 1)
        {
            minSet.insert(current - 1);
        }
    }

    cout << max1 << " " << min1 << endl;
}

int main()
{
    fastread();
    solve();
    return 0;
}