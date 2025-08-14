#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int res = 0; // Number of operations
    int i = 0;   // Pointer for current element
    while (i < n)
    {
        // Find the next segment of 1s or end of array
        int j = i;
        while (j < n && a[j] == a[i])
        {
            j++;
        }
        // If current segment is 0s and next segment is 1s, or we're at the start
        if (a[i] == 0 && j < n && a[j] == 1)
        {
            // Merge all 0s in [i, j-1] into the first 1 at j
            res += j - i; // Number of 0s merged
            i = j;        // Move to the next segment
        }
        else
        {
            // No merge needed for this segment (either 1s or last segment)
            i = j;
        }
    }

    cout << res << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}