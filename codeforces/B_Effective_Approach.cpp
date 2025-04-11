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
    ll n;
    cin >> n;

    vector<ll> a(n);
    unordered_map<ll, ll> pos;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        pos[a[i]] = i + 1;
    }

    ll m;
    cin >> m;
    vector<ll> b(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    ll count1 = 0, count2 = 0;

    for (ll i = 0; i < m; i++)
    {
        count1 += pos[b[i]];
        count2 += (n - pos[b[i]] + 1);
    }

    cout << count1 << " " << count2 << endl;
}

int main()
{
    fastread();
    solve();
    return 0;
}