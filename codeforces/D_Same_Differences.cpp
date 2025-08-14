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

    ll m;
    cin >> m;

    vector<ll> a(m);
    for (size_t i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    ll count = 0;
    unordered_map<ll, ll> prefix;

    for (size_t i = 0; i < m; i++)
    {
        ll key = a[i] - i;
        count += prefix[key];
        prefix[key]++;
    }

    cout << count << endl;
}
int main()
{
    fastread();
    cases(n)
    {
        solve();
    }
}
