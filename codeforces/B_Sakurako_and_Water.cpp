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

    ll minlake[m + m] = {0};
    for (size_t i = 0; i < m; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            ll x;
            cin >> x;
            minlake[m + i - j] = min(minlake[m + i - j], x);
        }
    }
    ll sum = 0;

    for (size_t i = 0; i < m + m; i++)
    {
        sum += abs(minlake[i]);
    }

    cout << sum << endl;
}
int main()
{
    fastread();

    cases(n)
    {
        solve();
    }
}
