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
    fastread();
    ll m;
    cin >> m;

    ll min_perimeter = LLONG_MAX;
    for (ll i = 1; i * i <= m; ++i)
    {
        if (m % i == 0)
        {
            ll side1 = i;
            ll side2 = m / i;
            ll perimeter = 2 * (side1 + side2);
            min_perimeter = min(min_perimeter, perimeter);
        }
    }

    cout << min_perimeter << endl;
    return 0;
}