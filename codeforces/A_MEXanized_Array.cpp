#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k, x;
    cin >> n >> k >> x;

    if (n < k || k - 1 > x)
    {
        cout << -1 << '\n';
        return;
    }

    long long sum = (k - 1) * k / 2 + (n - k) * x;
    cout << sum << '\n';
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