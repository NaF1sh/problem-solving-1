#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    string a;
    cin >> a;

    ll n = a.size();
    vector<ll> prefix(n, 0);

    // Precompute the prefix sum array
    for (size_t i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1];
        if (a[i] == a[i - 1])
        {
            prefix[i]++;
        }
    }

    ll q;
    cin >> q;

    while (q--)
    {
        ll l, r;
        cin >> l >> r;

        // Convert 1-based indices to 0-based
        l--;
        r--;

        // Use the prefix sum array to calculate the result
        cout << prefix[r] - prefix[l] << endl;
    }
}

int main()
{
    fastread();
    solve();
    return 0;
}