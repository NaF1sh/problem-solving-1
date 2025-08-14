#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    ll m, m1;
    cin >> m >> m1; // N and Q

    vector<ll> a(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    while (m1--)
    {
        ll q1;
        cin >> q1;
        auto it = lower_bound(a.begin(), a.end(), q1);
        if (it != a.end() && *it == q1)
        {
            cout << (it - a.begin()) << '\n';
        }
        else
        {
            cout << -1 << '\n';
        }
    }
}

int main()
{
    fastread();
    solve();
}