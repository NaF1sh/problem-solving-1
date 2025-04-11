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

    if (a > b)
    {
        swap(a, b);
    }

    ll lower_bound = max(a, c - d);
    ll upper_bound = min(b, c + d);

    ll count = (lower_bound > upper_bound) ? (b - a) : (lower_bound - a) + (b - upper_bound);

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
