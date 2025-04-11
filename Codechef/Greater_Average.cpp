#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)
#define fastread()               \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve()
{
    double A, B, C;
    cin >> A >> B >> C;

    double ans = (A + B) / 2;

    if (ans > C)
    {

        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    fastread();

    cases(T)
    {
        solve();
    }

    return 0;
}
