#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)

int main()
{

    ll min1 = LONG_LONG_MAX;
    ll sum = 0;
    cases(n)
    {
        ll a, b;
        cin >> a >> b;

        if (min1 > b)
        {

            min1 = b;
        }
        sum += a * min1;
    }
    cout << sum;
}