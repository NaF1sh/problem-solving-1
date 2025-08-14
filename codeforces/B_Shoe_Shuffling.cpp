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
    for (ll i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    if (m == 1)
    {
        cout << "-1\n";
        return;
    }

    if (count(a.begin(), a.end(), a[0]) == 1)
    {
        cout << "-1\n";
        return;
    }

    vector<ll> result(m);
    for (ll i = 0; i < m; i++)
    {
        result[i] = i + 1;
    }

    swap(result[0], result[m - 1]);

    for (ll i = 0; i < m; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
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
