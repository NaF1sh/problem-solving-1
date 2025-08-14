#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    ll T;
    cin >> T;
    while (T--)
    {
        ll Y;
        cin >> Y;
        ll D = 1 + 8 * Y;
        ll root = (ll)sqrt(D);
        if (root * root != D)
        {
            cout << "NAI\n";
            continue;
        }
        ll n = (-1 + root) / 2;
        if (n * (n + 1) / 2 == Y)
        {
            cout << n << "\n";
        }
        else
        {
            cout << "NAI\n";
        }
    }
}

int main()
{
    fastread();
    solve();
    return 0;
}