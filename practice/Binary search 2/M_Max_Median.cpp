#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool check(const vector<int> &a, int n, int k, int m)
{
    vector<int> b(n);
    for (int i = 0; i < n; ++i)
    {
        b[i] = (a[i] >= m) ? 1 : -1;
    }

    vector<ll> prefix(n + 1, 0);
    for (int i = 0; i < n; ++i)
    {
        prefix[i + 1] = prefix[i] + b[i];
    }

    ll min_prefix = 0;
    for (int i = k; i <= n; ++i)
    {
        min_prefix = min(min_prefix, prefix[i - k]);
        if (prefix[i] > min_prefix)
            return true;
    }

    return false;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;

    int left = 1, right = 1e9;
    int ans = 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (check(a, n, k, mid))
        {
            ans = mid; // mid is possible, try to find bigger one
            left = mid + 1;
        }
        else
        {
            right = mid - 1; // mid not possible, try smaller
        }
    }

    cout << ans << "\n";
    return 0;
}
