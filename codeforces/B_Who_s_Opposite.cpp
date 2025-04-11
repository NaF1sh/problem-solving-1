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
    cases(n)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll a1 = abs(a - b);

        ll total_positions = 2 * a1;

        if (a > total_positions || b > total_positions || c > total_positions || a1 == 0)
        {
            cout << -1 << endl;
        }
        else
        {

            ll position_c = (c + a1) % total_positions;
            if (position_c == 0)
            {
                position_c = total_positions;
            }
            cout << position_c << endl;
        }
    }
    return 0;
}
