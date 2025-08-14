#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        // Store the minimum position of any friend that cannot be grouped with i
        vector<int> minBad(n + 2, n + 1); // By default, no restriction

        for (int i = 0; i < m; ++i)
        {
            int x, y;
            cin >> x >> y;
            if (x > y)
                swap(x, y); // Ensure x < y
            // For a bad pair (x, y), you can't include both x and y in the same subsegment.
            // So if a segment ends at y, it must start after x.
            minBad[x] = min(minBad[x], y); // Store the minimum position that breaks the segment
        }

        // From right to left, build the limit of how far a segment can go
        for (int i = n - 1; i >= 1; --i)
        {
            minBad[i] = min(minBad[i], minBad[i + 1]);
        }

        ll ans = 0;
        for (int i = 1; i <= n; ++i)
        {
            // You can go up to minBad[i] - 1
            ans += minBad[i] - i;
        }

        cout << ans << '\n';
    }

    return 0;
}
