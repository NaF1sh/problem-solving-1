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
        ll m;
        cin >> m;
        ll count = 0;

        while (m != 1)
        {
            if (m % 2 == 0)
                m = m / 2;
            else if (m % 3 == 0)
                m = (2 * m) / 3;
            else if (m % 5 == 0)
            {
                m = (4 * m) / 5;
            }
            else
            {
                count = -1;
                break;
            }
            count++;
        }
        cout << count << endl;
    }
}