#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    ll m;
    cin >> m;
    vector<ll> a(m);
    vector<ll> b(m);

    for (size_t i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (size_t i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    ll diff = -1;
    ll mini = LONG_LONG_MAX;
    ll maxi = 0;

    for (ll i = 0; i < m; i++)
    {
        if (a[i] != b[i])
        {
            if (diff == -1)
            {
                diff = b[i] - a[i];
                if (diff < 0)
                {
                    cout << "NO" << endl;
                    return;
                }
            }
            else if (b[i] - a[i] != diff)
            {
                cout << "NO" << endl;
                return;
            }
            mini = min(i, mini);
            maxi = max(i, maxi);
        }
    }

    for (size_t i = mini; i <= maxi; i++)
    {
        if (a[i] == b[i])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main()
{
    fastread();
    cases(n)
    {
        solve();
    }
    return 0;
}