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
    vector<pair<ll, ll>> a(m);

    for (size_t i = 0; i < m; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.begin(), a.end());
    ll key;
    cin >> key;

    ll low = lower_bound(a.begin(), a.end(), make_pair(key, LLONG_MIN)) - a.begin();
    ll high = lower_bound(a.begin(), a.end(), make_pair(key, LLONG_MAX)) - a.begin();

    if (low < m)
    {

        cout << low << " " << high - 1 << " " << high - low;
    }
    else
    {
        cout << -1 << " " << -1 << " " << 0;
    }
}
int main()
{
    fastread();
    solve();
}
