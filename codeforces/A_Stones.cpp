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
        ll a, b, c;
        cin >> a >> b >> c;
        ll count = 0;

        while (b >= 1 && c >= 2)
        {
            b -= 1;
            c -= 2;
            count += 3;
        }
        while (a >= 1 && b >= 2)
        {
            a -= 1;
            b -= 2;
            count += 3;
        }
        cout << count << endl;
    }
}