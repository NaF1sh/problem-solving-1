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
    ios::sync_with_stdio(0);
    cin.tie(0);

    cases(n)
    {
        ll m, k;
        cin >> m >> k;
        ll count = 0;

        while (m > 0)
        {
            if (m % k == 0)
            {
                m /= k;
                count++;
            }
            else
            {
                // Reduce m to the nearest multiple of k
                ll remainder = m % k;
                count += remainder; // These many subtractions
                m -= remainder;     // Bring m to the nearest multiple of k
            }
        }

        cout << count << endl;
    }
    return 0;
}
