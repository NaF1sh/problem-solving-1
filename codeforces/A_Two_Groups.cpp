#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll m;
        cin >> m;

        ll sum_positive = 0;
        ll sum_negative = 0;

        for (int i = 0; i < m; i++)
        {
            ll a;
            cin >> a;
            if (a >= 0)
            {
                sum_positive += a;
            }
            else
            {
                sum_negative += a;
            }
        }
        cout << abs(sum_positive + sum_negative) << endl;
    }

    return 0;
}
