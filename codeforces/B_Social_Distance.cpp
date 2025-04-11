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
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n > m)
    {
        cout << "NO\n";
        return;
    }
    sort(a.begin(), a.end());
    ll max_a = a.back();
    ll available = (m - n);
    if (max_a > available / 2)
    {
        cout << "NO\n";
        return;
    }
    ll sum_a = accumulate(a.begin(), a.end(), 0LL);
    ll sum_of_maxes = sum_a - a[0] + a.back();
    if (sum_of_maxes + n <= m)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    fastread();
    cases(t)
    {
        solve();
    }
    return 0;
}