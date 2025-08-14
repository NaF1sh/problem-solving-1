#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    ll h;
    cin >> n >> h;

    vector<ll> atk(n);
    for (int i = 0; i < n; i++)
    {
        cin >> atk[i];
    }

    ll l = 1, r = h, ans = h;

    while (l <= r)
    {
        ll mid = (l + r) / 2;
        ll dmg = mid;

        for (int i = 0; i < n - 1; i++)
        {
            dmg += min(mid, atk[i + 1] - atk[i]);
        }

        if (dmg >= h)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}