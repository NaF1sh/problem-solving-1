#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll m, k, q;
    cin >> m >> k >> q; // m ranges, threshold k, q queries

    // Define MAX_T and initialize difference array
    const ll MAX_T = 200000;    // Adjust based on problem constraints
    vector<ll> D(MAX_T + 2, 0); // +2 to handle r+1 safely

    // Your snippet, adjusted to use 'm' instead of 'n'
    for (ll i = 0; i < m; i++)
    {
        ll l, r;
        cin >> l >> r;
        if (l >= 1 && l <= MAX_T)
            D[l] += 1;
        if (r + 1 <= MAX_T + 1)
            D[r + 1] -= 1; // Ensure bounds
    }

    // Compute frequency array from difference array
    vector<ll> freq(MAX_T + 1, 0);
    ll sum = 0;
    for (ll i = 1; i <= MAX_T; i++)
    {
        sum += D[i];
        freq[i] = sum; // freq[i] is the count of ranges covering temperature i
    }

    // (Optional) Process queries if your problem requires it
    // Example: Count temperatures with freq >= k in range [q1, q2]
    vector<ll> prefix(MAX_T + 1, 0);
    for (ll i = 1; i <= MAX_T; i++)
    {
        if (freq[i] >= k)
        {
            prefix[i] = prefix[i - 1] + 1;
        }
        else
        {
            prefix[i] = prefix[i - 1];
        }
    }

    // Handle queries
    vector<ll> ans;
    for (ll i = 0; i < q; i++)
    {
        ll q1, q2;
        cin >> q1 >> q2;
        ll count = prefix[q2] - prefix[q1 - 1];
        ans.push_back(count);
    }

    // Output results
    for (auto i : ans)
    {
        cout << i << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}