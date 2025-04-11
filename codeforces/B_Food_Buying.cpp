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
    double sum = a;
    while (a >= 10)
    {
        a = (a / 10);

        sum += a;
    }
    ll sum1 = ceil(sum);
    cout << sum1 << endl;
}

int main()
{
    fastread();

    cases(n)
    {
        solve();
    }
}
