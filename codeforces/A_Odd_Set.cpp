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
        ll count_odd = 0;
        ll count_even = 0;
        for (size_t i = 0; i < m * 2; i++)
        {
            ll a;
            cin >> a;

            if (a % 2 == 0)
            {
                count_even++;
            }
            else
            {
                count_odd++;
            }
        }
        if (count_even == count_odd)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
        cout << endl;
    }
}