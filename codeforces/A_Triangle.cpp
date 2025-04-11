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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    if ((a + b > c && a + c > b && b + c > a) ||
        (d + b > c && d + c > b && b + c > d) ||
        (a + d > c && a + c > d && d + c > a) ||
        (a + b > d && a + d > b && b + d > a))
    {
        cout << "TRIANGLE" << endl;
    }

    else if ((a + b == c || a + c == b || b + c == a) ||
             (d + b == c || d + c == b || b + c == d) ||
             (a + d == c || a + c == d || d + c == a) ||
             (a + b == d || a + d == b || b + d == a))
    {
        cout << "SEGMENT" << endl;
    }
    else
        cout << "IMPOSSIBLE" << endl;
}

int main()
{
    fastread();

    solve();
    return 0;
}