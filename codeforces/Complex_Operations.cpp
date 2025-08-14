#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    ll m, m1;
    cin >> m >> m1;

    vector<ll> a(m);
    for (size_t i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    ll sum = 0; // Global offset to track the effect of type 1 queries

    while (m1--)
    {
        ll q;
        cin >> q;

        if (q == 1)
        {
            ll x;
            cin >> x;
            sum += x;
        }
        else if (q == 2)
        {
            ll l, r, x;
            cin >> l >> r >> x;

            ll l1 = lower_bound(a.begin(), a.end(), l + sum) - a.begin();
            ll r1 = upper_bound(a.begin(), a.end(), r + sum) - a.begin();

            if (r1 - l1 >= x)
            {
                cout << a[l1 + x - 1] - sum << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
        }
    }
}

int main()
{
    fastread();
    solve();
    return 0;
}