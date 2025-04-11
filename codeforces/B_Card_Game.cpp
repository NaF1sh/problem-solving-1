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
void solve()
{

    ll a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    ll count = 0;
    if ((a1 > b1 && a2 > b2) && (a1 > b2 && a2 > b1))
    {

        count = 4;
    }

    else if (((a1 > b1 && a2 >= b2) || (a1 >= b1 && a2 > b2)) && ((a1 > b2 && a2 >= b1) || (a1 >= b2 && a2 > b1)))
        count = 4;

    else if ((a1 > b1 && a2 >= b2) || (a1 >= b1 && a2 > b2) || (a1 > b2 && a2 >= b1) || (a1 >= b2 && a2 > b1))
        count = 2;
    cout << count << endl;
}
int main()
{
    fastread();

    cases(n)
    {
        solve();
    }
}
