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
        ll l, r;
        cin >> l >> r;

        if (l == r)
        {
            // If l and r are equal, the only pair (a, b) is (l, l) giving a mod b = 0
            cout << 0 << endl;
        }
        else
        {
            // Calculate the maximum value of a % b
            ll max_value = max(r % (r / 2 + 1), r % l);
            cout << max_value << endl;
        }
    }
    return 0;
}