#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n, m;
    cin >> n >> m;

    vector<pair<ll, ll>> matches(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> matches[i].second >> matches[i].first; // Read (a, b) as (matches[i].second, matches[i].first)
    }

    // Sort in descending order based on the number of matches per box
    sort(matches.rbegin(), matches.rend());

    ll sum = 0;
    for (ll i = 0; i < m && n > 0; i++)
    {
        ll boxes = min(n, matches[i].second);
        sum += boxes * matches[i].first;
        n -= boxes;
    }

    cout << sum << endl;
    return 0;
}