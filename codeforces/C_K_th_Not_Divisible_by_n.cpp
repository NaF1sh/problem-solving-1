#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastread()               \
    ios::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll low = 1, high = 2 * k, ans = -1;
    while (low <= high)
    {
        ll mid = (low + high) / 2;
        ll count = mid - mid / n;

        if (count >= k)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << ans << '\n';
}

int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
