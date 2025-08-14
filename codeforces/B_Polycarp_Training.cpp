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

    sort(a.begin(), a.end());
    ll day = 1;
    for (size_t i = 0; i < m; i++)
    {
        if (a[i] >= day)
        {
            day++;
        }
    }
    cout << day - 1;
}
int main()
{
    fastread();
    solve();
}
