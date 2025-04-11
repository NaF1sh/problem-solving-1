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
    int x, y;
    cin >> x >> y;

    int diff = x + 1 - y;
    if (diff >= 0 && diff % 9 == 0)
        cout << "Yes";
    else
        cout << "No";

    cout << endl;
}

int main()
{
    fastread();

    cases(t)
    {
        solve();
    }
    return 0;
}