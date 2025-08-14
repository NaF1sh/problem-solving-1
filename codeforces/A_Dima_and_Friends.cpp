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

    ll fingers = 0;
    for (size_t i = 0; i < m; i++)
    {
        ll a;
        cin >> a;
        fingers += a;
    }
    ll count = 0;

    for (size_t i = 1; i <= 5; i++)
    {
        if ((fingers + i) % (m + 1) != 1)
        {
            count++;
        }
    }
    cout << count;
}
int main()
{
    fastread();
    solve();
}
