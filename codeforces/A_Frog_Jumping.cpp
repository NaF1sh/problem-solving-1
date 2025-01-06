#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)

int main()
{
    cases(n)
    {
        ll a, b, k;
        cin >> a >> b >> k;

        ll sum;
        if (k % 2 == 0)
        {
            sum = (k / 2) * (a - b);
        }
        else
        {
            sum = ((k / 2) + 1) * a - (k / 2) * b;
        }
        cout << sum << endl;
    }
    return 0;
}
