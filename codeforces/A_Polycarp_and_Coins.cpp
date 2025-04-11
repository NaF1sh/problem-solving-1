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
        ll price;
        cin >> price;
        if (price == 1)
        {
            cout << 1 << " " << 0 << endl;
        }
        else
        {
            ll c_2 = round(price / 3.0); // Use 3.0 to ensure floating-point division

            ll c_1 = price - (c_2 * 2);

            cout << c_1 << " " << c_2 << endl;
        }
    }
}
