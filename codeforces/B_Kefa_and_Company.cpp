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
    ll m, m1;
    cin >> m >> m1;

    vector<pair<ll, ll>> a(m);

    for (size_t i = 0; i < m; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end());

    ll l = 0;
    ll fr = 0;
    ll count1 = 0;

    for (size_t r = 0; r < m; r++)
    {
        count1 += a[r].second;
        while

            (a[r].first - a[l].first >= m1)
        {

            count1 -= a[l].second;
            l++;
        }
        fr = max(count1, fr);
    }
    cout << fr;
}
int main()
{
    fastread();
    solve();
}
