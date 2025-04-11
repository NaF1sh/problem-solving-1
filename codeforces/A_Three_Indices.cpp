#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (ll j = 1; j < n - 1; j++)
    {
        if (a[j] > a[j - 1] && a[j] > a[j + 1])
        {
            cout << "YES" << endl;
            cout << j << " " << j + 1 << " " << j + 2 << endl;
            return;
        }
    }

    cout << "NO" << endl;
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