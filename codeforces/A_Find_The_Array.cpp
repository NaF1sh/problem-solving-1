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
        ll count = 0;
        ll current = 1;

        while (sum < m)
        {
            sum += current;
            current += 2;
            count++;
        }

        cout << count << endl;
    }
    return 0;
}