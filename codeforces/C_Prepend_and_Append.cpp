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
    string a;
    cin >> a;
    ll r = 0;
    ll l = a.size() - 1;
    while (r < l && a[r] != a[l])

    {
        r++;
        l--;
    }
    cout << l - r + 1 << endl;
}
int main()
{
    fastread();
    cases(n)
    {
        solve();
    }
}
