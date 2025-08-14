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
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end());
    for (size_t i = 0; i < m - 1; i++)
    {
        if (a[i].second > a[i + 1].second)
        {

            cout << "Happy Alex";
            return;
        }
    }
    cout << "Poor Alex";
}
int main()
{
    fastread();
    solve();
}
