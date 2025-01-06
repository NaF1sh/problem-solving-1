#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)

int main()
{
    ll n, k;
    cin >> n >> k;

    ll red = ceil((double)(n * 2) / k);
    ll green = ceil((double)(n * 5) / k);
    ll blue = ceil((double)(n * 8) / k);

    ll ans = red + green + blue;
    cout << ans << endl;

    return 0;
}
