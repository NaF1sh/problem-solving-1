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

bool pairCompare(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.first == b.first)
    {
        return a.second < b.second;
    }
    else if (a.first == 0)
    {
        return true;
    }
    else if (b.first == 0)
    {
        return false;
    }
    else
    {
        return a.first > b.first;
    }
}

void solve()
{
    ll m, k;
    cin >> m >> k;

    vector<pair<ll, ll>> a(m);

    for (size_t i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        a[i] = make_pair(x % k, i + 1);
    }

    sort(a.begin(), a.end(), pairCompare);

    for (size_t i = 0; i < m; i++)
    {
        cout << a[i].second << " ";
    }
    cout << endl;
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