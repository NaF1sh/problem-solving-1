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

    ll a = 0;

    while (m > 0)
    {
        if (m % 2 == 1)
            a++;

        m /= 2;
    }

    cout << a << endl;
}
int main()
{
    fastread();
    solve();
}
