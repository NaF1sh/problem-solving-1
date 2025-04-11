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
    ll suma = 0;
    ll sumb = 0;

    for (size_t i = 0; i < m; i++)
    {
        cin >> a[i];
        suma += a[i];
    }
    for (size_t i = 0; i < m; i++)
    {
        cin >> b[i];
        sumb += b[i];
    }

    if (sumb > suma)
    {
        cout << "NO" << endl;
        return;
    }

    ll extra = 0;
    for (size_t i = 0; i < m; i++)
    {
        if (a[i] > b[i])
        {
            extra += a[i] - b[i];
        }
    }

    if (extra >= (suma - sumb))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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