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

    ll m, k;
    cin >> m >> k;

    vector<ll> a(m);

    for (size_t i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    vector<pair<ll, ll>> prefix;
    ll sum = 0;
    for (size_t i = 0; i < k; i++)
    {
        sum += a[i];
    }

    prefix.push_back(make_pair(sum, 0));

    for (size_t i = k; i < m; i++)
    {
        sum -= a[i - k];
        sum += a[i];
        prefix.push_back(make_pair(sum, i - k + 1));
    }

    sort(prefix.begin(), prefix.end());

    cout << prefix[0].second + 1 << endl;
}
int main()
{
    fastread();
    solve();
}
