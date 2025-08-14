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

    ll m, m1, k;
    cin >> m >> m1 >> k;

    ll a, b;
    cin >> a >> b;

    if (a > b)
    {
        swap(a, b);
    }
    ll q;
    cin >> q;

    if (q > b)
    {
        cout << (m - q) << endl;
    }
    else if (q > a)
    {
        cout << (1 - a) << endl;
    }
    else if (q > a && q < b)
    {

        ll diff = (a - b) / 2;

        cout << diff << endl;
    }
}

int main()
{
    fastread();

    cases(n)
    {
        solve();
    }
}
