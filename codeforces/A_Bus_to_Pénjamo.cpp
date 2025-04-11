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
    ll m, r;
    cin >> m >> r;
    vector<ll> a(m);

    for (size_t i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    ll extra = 0;
    ll satisfied = 0;

    for (size_t i = 0; i < m; i++)
    {
        if (a[i] > 1)
        {
            extra += (a[i] % 2);
            ll a1 = a[i];
            while (a1 > 1)
            {
                a1 -= 2;
                r--;
                satisfied += 2;
                if (a1 == 0)
                    break;
            }
        }
        else if (a[i] == 1)
        {
            extra++;
        }
    }
    if (extra == 0 || r == 0)
    {
        cout << satisfied << endl;
    }
    else if (extra <= r)
    {
        cout << satisfied + extra << endl;
    }
    else
    {
        while (extra != 1 && r > 0)
        {
            extra -= 2;
            r--;
            if (extra == 0)
            {
                break;
            }
        }
        if (extra == 1 && r > 0)
        {
            cout << satisfied + 1 << endl;
        }
        else
        {
            cout << satisfied << endl;
        }
    }
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