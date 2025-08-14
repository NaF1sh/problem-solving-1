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
    for (ll i = 0; i < m; i++)
    {
        for (ll j = i + 1; j < m; j++)
        {
           
            if ((a[i].first + a[i].second == a[j].first) &&
                (a[j].first + a[j].second == a[i].first))
            {
                cout << "YES" << endl;
                return;
            }
        }
    }

    cout << "NO" << endl; 
}
int main()
{
    fastread();
    solve();
}