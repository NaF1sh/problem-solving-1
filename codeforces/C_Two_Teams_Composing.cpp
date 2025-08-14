#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    ll m;
    cin >> m;

    map<ll, ll> freq;
    for (ll i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        freq[x]++;
    }

    ll max_freq = 0;                 // Maximum frequency of any element
    ll distinct_count = freq.size(); // Number of distinct elements

    for (auto it : freq)
    {
        max_freq = max(max_freq, it.second);
    }

    // Calculate the maximum size of the smaller team
    ll result = min(max_freq, distinct_count - 1);
    result = max(result, min(max_freq - 1, distinct_count));

    cout << result << endl;
}

int main()
{
    fastread();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}