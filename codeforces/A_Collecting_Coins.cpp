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

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll a, b, c, n;
        cin >> a >> b >> c >> n;

        ll maxc = max({a, b, c});
        ll total_needed = 3 * maxc - (a + b + c);

        if (n >= total_needed && (n - total_needed) % 3 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}