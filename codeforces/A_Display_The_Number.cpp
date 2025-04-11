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

    string result;
    if (m % 2 != 0)
    {
        result += '7';
        m -= 3;
    }
    while (m > 0)
    {
        result += '1';
        m -= 2;
    }

    cout << result << endl;
}

int main()
{
    fastread();

    cases(n)
    {
        solve();
    }
    return 0;
}