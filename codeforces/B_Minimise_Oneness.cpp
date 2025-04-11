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
    string a(m, '0');
    if (m > 1)
        a[1] = '1';

    cout << a << endl;
}
int main()
{
    fastread();
    cases(n)
    {
        solve();
    }
}
