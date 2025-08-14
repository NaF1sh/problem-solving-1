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
    ll m1;
    cin >> m1;

    for (size_t i = 0; i < m1; i++)
    {
        ll m12;
        cin >> m12;

        ll low = upper_bound(a.begin(), a.end(), m12) - a.begin();

        cout << low << endl;
    }
}
int main()
{
    fastread();
    solve();
}
