#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    ll k, x;
    cin >> k >> x;

    ll first = (k * (k + 1)) / 2;

    if (x <= first)
    {
        ll sum = 0, msg = 0;
        for (ll i = 1; i <= k; i++)
        {
            sum += i;
            msg++;
            if (sum >= x)
            {
                cout << msg << endl;
                return;
            }
        }
    }
    else
    {
        ll rem = x - first;
        ll second = (k * (k - 1)) / 2;

        if (rem <= second)
        {
            ll sum = 0, msg = k;
            for (ll i = k - 1; i >= 1; i--)
            {
                sum += i;
                msg++;
                if (sum >= rem)
                {
                    cout << msg << endl;
                    return;
                }
            }
        }
        else
        {
            cout << 2 * k - 1 << endl;
        }
    }
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