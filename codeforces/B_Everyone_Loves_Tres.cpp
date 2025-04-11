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

    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << string(n - 2, '3') + "66" << endl;
    }
    else if (n == 1 || n == 3)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << string(n - 5, '3') + "36366" << endl;
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
