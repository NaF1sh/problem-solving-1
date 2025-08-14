#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    ll q;
    cin >> q;

    set<ll> a;

    for (ll i = 0; i <= 5000000; i += 64)
    {
        for (ll j = i; j < i + 64 && j <= 5000000; ++j)
        {
            a.insert(j);
        }
    }

    while (q--)
    {
        ll t, n;
        cin >> t >> n;

        if (t == 1)
        {
            a.erase(n);
        }
        else if (t == 2)
        {
            auto right = a.lower_bound(n);
            ll diffleft = LLONG_MAX, diffright = LLONG_MAX;

            if (right != a.begin())
            {
                auto left = prev(right);
                diffleft = abs(*left - n);
            }

            if (right != a.end())
            {
                diffright = abs(*right - n);
            }

            cout << min(diffleft, diffright) << '\n';
        }
    }
}

int main()
{
    fastread();
    solve();
}
