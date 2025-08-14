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

    ll m, m1;
    cin >> m >> m1;

    vector<ll> a(m);

    for (size_t i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    ll l = 0;
    ll r = 0;
    ll maxcount = 0;
    ll sum = 0;

    while (r < m)
    {
        sum += a[r];

        while (sum > m1)
        {
            sum -= a[l];
            l++;
        }
        maxcount = max(maxcount, r - l + 1);
        r++;
    }
    cout << maxcount;
}
int main()
{
    fastread();
    solve();
}
