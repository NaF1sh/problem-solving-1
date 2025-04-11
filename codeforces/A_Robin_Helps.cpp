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

    ll m, k;
    cin >> m >> k;

    vector<ll> a(m);
    ll sum = 0;
    for (size_t i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    ll gave = 0;
    for (size_t i = 0; i < m; i++)
    {

        if (a[i] == 0 && sum > 0)
        {
            gave++;
            sum--;
        }
        else if (a[i] >= k)
        {
            sum += a[i];
        }
    }
    cout << gave << endl;
}
int main()
{
    fastread();
    cases(n)
    {
        solve();
    }
}
