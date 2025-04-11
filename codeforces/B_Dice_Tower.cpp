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

    ll a;
    cin >> a;
    for (size_t i = 1; i <= 6; i++)
    {
        if ((a - i) % 14 == 0 && a >= 15)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
int main()
{
    fastread();
    cases(n)
    {
        solve();
    }
}
