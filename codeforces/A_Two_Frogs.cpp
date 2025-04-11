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

#define is_even(a) ((a) % 2 == 0)

void solve()
{
    ll m, a, b;
    cin >> m >> a >> b;

    if (is_even(a - b))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    cout << endl;
}

int main()
{
    fastread();

    cases(n)
    {
        solve();
    }
    return 0;
}
