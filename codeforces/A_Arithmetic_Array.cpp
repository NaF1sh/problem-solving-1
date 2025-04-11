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
        ll m;
        cin >> m;
        ll sum = 0;
        for (size_t i = 0; i < m; i++)
        {
            ll a;
            cin >> a;
            sum += a;
        }

        if (sum == m)
        {
            cout << 0 << endl;
        }
        else if (sum < m)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << sum - m << endl;
        }
    }
    return 0;
}