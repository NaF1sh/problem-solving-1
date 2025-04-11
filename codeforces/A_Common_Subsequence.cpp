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
    vector<ll> a1(n), a2(m);
    for (ll i = 0; i < n; i++)
    {
        cin >> a1[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> a2[i];
    }

    unordered_set<ll> set_a1(a1.begin(), a1.end());
    for (ll i = 0; i < m; i++)
    {
        if (set_a1.find(a2[i]) != set_a1.end())
        {
            cout << "YES" << endl;
            cout << 1 << " " << a2[i] << endl;
            return;
        }
    }
    cout << "NO" << endl;
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