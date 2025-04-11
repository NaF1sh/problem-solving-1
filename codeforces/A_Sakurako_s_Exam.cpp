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
    ll a, b;
    cin >> a >> b;
    if (a == 0 && b % 2 != 0)
    {

        cout << "NO";
    }

    else if ((a % 2 == 0 && b % 2 == 0) || (a % 2 == 0 && b % 2 != 0))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
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
    return 0;
}