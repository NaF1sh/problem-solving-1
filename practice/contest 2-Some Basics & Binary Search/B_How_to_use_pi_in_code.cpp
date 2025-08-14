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

    double a;
    cin >> a;

    double pi = acos(-1.0);

    double area_r = (2 * a) * (2 * a);
    double area_c = pi * a * a;

    cout << fixed << setprecision(2) << area_r - area_c << endl;
}
int main()
{
    fastread();
    ll n;
    cin >> n;
    ll i = 1;
    while (i <= n)
    {
        cout << "Case " << i << ": ";
        solve();
        i++;
    }
}
