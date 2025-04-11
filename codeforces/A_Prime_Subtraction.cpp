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

    if (m - m1 == 1)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    cout << endl;
}
int main()
{
    fastread();

    cases(n)
    {
        solve();
    }
}
