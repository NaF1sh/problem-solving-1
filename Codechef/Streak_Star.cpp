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

    vector<ll> a(m);

    for (size_t i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    for (size_t i = 1; i < m; i++)
    {
        if (a[i] < a[i - 1])
        {
            a[i] = a[i] * m1;
        }
    }
    ll count = 0;
    ll max1 = 0;
    for (size_t i = 1; i < m; i++)
    {
        if (a[i] > a[i - 1])
        {
            count += 1;
        }
        else
        {
            count = 0;
        }
        max1 = max(max1, count);
    }

    cout << max1 << endl;
}
int main()
{
    fastread();
    cases(n)
    {
        solve();
    }
}
