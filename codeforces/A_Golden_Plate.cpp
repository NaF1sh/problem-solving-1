#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)

int main()
{
    ll w, h, k;
    cin >> w >> h >> k;
    ll sum = 0;

    while (k-- && w > 0 && h > 0)
    {
        sum += ((w * 2) + (h * 2)) - 4;
        w = w - 4;
        h = h - 4;
        }

    cout << sum << endl;
    return 0;
}
