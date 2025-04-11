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
    if (abs(m - 2050) <= 25)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
int main()
{
    fastread();

    solve();
}
