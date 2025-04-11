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

    ll s, n;

    cin >> s >> n;
    bool flag = true;
    vector<pair<ll, ll>> a(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end());
    for (size_t i = 0; i < n; i++)
    {

        if (s > a[i].first)
        {
            s += a[i].second;
        }
        else if (s <= a[i].first)
        {
            flag = false;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else

    {
        cout << "NO" << endl;
    }
}
int main()
{
    fastread();
    solve();
}
