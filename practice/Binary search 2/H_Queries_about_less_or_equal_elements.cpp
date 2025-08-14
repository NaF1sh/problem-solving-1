#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    ll m, m1;
    cin >> m >> m1;

    vector<ll> a(m);
    vector<ll> b(m1);

    for (size_t i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (size_t i = 0; i < m1; i++)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());

    for (size_t i = 0; i < m1; i++)
    {
        ll low = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
        cout << low << " ";
    }
}

int main()
{
    fastread();
    solve();
    return 0;
}