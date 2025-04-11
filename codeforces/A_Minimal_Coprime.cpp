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
    int a, b;
    cin >> a >> b;

    if (a == 1 && b == 1)
    {
        cout << 1 << endl;
        return;
    }

    cout << b - a << endl;
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
