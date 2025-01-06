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
        ll a;
        cin >> a;

        ll sum2 = (a * (a + 1)) / 2;

        ll largestPower = log2(a);
        ll sum1 = (1LL << (largestPower + 1)) - 1;

        cout << sum2 - 2 * sum1 << endl; // Double subtract the powers of 2
    }
    return 0;
}
