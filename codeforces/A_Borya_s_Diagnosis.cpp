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
    ll day = 0;
    cases(n)
    {
        ll x, y;
        cin >> x >> y;

        if (day == 0)
        {
            day = x;
        }
        else
        {
            ll current_day = 0;
            ll i = 0;
            while (day < current_day)
            {

                current_day += x + (y * i);
                i++;
            }
        }
    }
}