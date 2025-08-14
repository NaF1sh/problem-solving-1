#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

void solve()
{
    ll n, l;
    cin >> n >> l;
    vector<ll> a(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    ll max_gap = 0;
    for (ll i = 1; i < n; i++)
    {
        max_gap = max(max_gap, a[i] - a[i - 1]);
    }

    double d = max({max_gap / 2.0, (double)a[0], (double)(l - a[n - 1])});

    cout << fixed << setprecision(10) << d << '\n';
}

int main()
{
    fastread();
    solve();
    return 0;
}
