#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)

bool force()
{
    ll suma = 0;
    ll sumb = 0;
    ll sumc = 0;
    cases(n)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        suma += a;
        sumb += b;
        sumc += c;
    }
    if (suma == 0 && sumb == 0 && sumc == 0)
        return true;
    else
    {
        return false;
    }
}

int main()
{
    if (force())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}