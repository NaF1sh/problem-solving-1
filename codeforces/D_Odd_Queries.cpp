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
    ll m, q;
    cin >> m >> q; // Read m and q

    vector<ll> a(m);
    vector<ll> a1(m + 1, 0); // Initialize prefix sum array with size m+1 and all values 0

    for (ll i = 0; i < m; i++)
    {
        cin >> a[i];
        a1[i + 1] = a1[i] + a[i]; //  prefix sum calculation
    }

    while (q--)
    {
        ll l, r, k;
        cin >> l >> r >> k;

        ll sum = a1[m]; // Total sum of the array

        sum -= (a1[r] - a1[l - 1]); // Remove sum in range [l, r]
        sum += (r - l + 1) * k;     // Add (r - l + 1) times k

        if (sum % 2 == 0)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
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
}
