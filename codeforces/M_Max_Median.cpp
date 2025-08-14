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

bool canGetMedian(const vector<ll> &a, ll k, ll m)
{
    ll n = a.size();
    vector<ll> t(n);
    for (ll i = 0; i < n; i++)
    {
        if (a[i] >= m)
        {
            t[i] = 1;
        }
        else
        {
            t[i] = -1;
        }
    }

    vector<ll> p(n + 1, 0);
    for (ll i = 0; i < n; i++)
    {
        p[i + 1] = p[i] + t[i];
    }

    ll minP = 0;
    for (ll i = k; i <= n; i++)
    {
        minP = min(minP, p[i - k]);
        if (p[i] > minP)
            return true;
    }
    return false;
}

int main()
{
    fastread();
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll &x : a)
        cin >> x;

    ll l = 1, h = n, best = 1;
    while (l <= h)
    {
        ll m = (l + h) / 2;
        if (canGetMedian(a, k, m))
        {
            best = m;
            l = m + 1;
        }
        else
        {
            h = m - 1;
        }
    }

    cout << best << '\n';
    return 0;
}