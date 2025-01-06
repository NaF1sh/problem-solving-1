#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)

int main()
{
    ll sum = 0;
    cases(n)
    {
        ll p, q;
        cin >> p >> q;
        if (p < q)
        {
            if (q - p >= 2)
                sum++;
        }
    }
    cout << sum;
}