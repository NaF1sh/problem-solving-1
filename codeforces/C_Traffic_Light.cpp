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
    char c;
    cin >> c;
    string a;
    cin >> a;

    if (a == "g")
    {
        cout << 0 << endl;
        return;
    }

    vector<ll> green;

    for (ll i = 0; i < m; i++)
    {
        if (a[i] == 'g')
        {
            green.push_back(i);
        }
    }

    ll ans = 0;

    for (ll i = 0; i < m; i++)
    {
        if (a[i] == c)
        {

            auto it = lower_bound(green.begin(), green.end(), i);
            ll distance;

            if (it != green.end())
            {
                distance = *it - i;
            }
            else
            {

                distance = (green[0] + m) - i;
            }

            ans = max(ans, distance);
        }
    }

    cout << ans << endl;
}

int main()
{
    fastread();
    cases(n)
    {
        solve();
    }
}
