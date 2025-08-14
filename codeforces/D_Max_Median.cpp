#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

int n, k;
vector<int> a;


bool canHaveMedian(int x)
{
    vector<int> transformed(n);
    for (int i = 0; i < n; i++)
    {
        transformed[i] = (a[i] >= x) ? 1 : -1;
    }

    vector<ll> prefix(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        prefix[i + 1] = prefix[i] + transformed[i];
    }

    ll minPrefix = 0;
    for (int i = k; i <= n; i++)
    {
        if (prefix[i] - minPrefix > 0)
            return true;
        minPrefix = min(minPrefix, prefix[i - k + 1]);
    }

    return false;
}

void solve()
{
    cin >> n >> k;
    a.resize(n);
    for (int &x : a)
        cin >> x;

    int lo = 1, hi = n, ans = 1;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (canHaveMedian(mid))
        {
            ans = mid;
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }

    cout << ans << '\n';
}

int main()
{
    fastread();
    solve();
    return 0;
}
