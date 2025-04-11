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
        if (a[i] == 1)
            a[i]++;
    }
    for (size_t i = 1; i < m; i++)
    {

        if (a[i] % a[i - 1] == 0)
        {
            a[i]++;
        }
    }

    for (size_t i = 0; i < m; i++)
    {

        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    fastread();

    cases(n)
        solve();
}
