#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    ll m;
    cin >> m;

    vector<ll> a(m);
    vector<bool> present(m + 1, false);
    set<ll> missing;

    for (size_t i = 0; i < m; i++)
    {
        cin >> a[i];
        if (a[i] != 0)
        {
            present[a[i]] = true;
        }
    }

    for (ll i = 1; i <= m; i++)
    {
        if (!present[i])
        {
            missing.insert(i);
        }
    }

    ll pastj = -1;

    for (size_t i = 0; i < m; i++)
    {
        if (a[i] == 0)
        {
            auto it = prev(missing.end());
            if (*it == i + 1 && pastj != -1)
            {

                a[i] = a[pastj];
                a[pastj] = *it;
            }
            else
            {
                a[i] = *it;
            }
            pastj = i;
            missing.erase(it);
        }
    }

    for (size_t i = 0; i < m; i++)
    {
        if (a[i] == i + 1)
        {

            swap(a[i], a[pastj]);
        }
    }

    for (ll c : a)
    {
        cout << c << " ";
    }
}

int main()
{
    fastread();
    solve();
}
