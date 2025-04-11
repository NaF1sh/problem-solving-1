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

    for (ll count = 0; count < 10; count++)
    {
        if (m % 3 == 0)
        {
            cout << (count % 2 == 0 ? "Second" : "First") << endl;
            return;
        }
        if ((m - 1) % 3 == 0)
        {
            m -= 1;
        }
        else if ((m + 1) % 3 == 0)
        {
            m += 1;
        }
    }

    cout << "Second" << endl;
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
