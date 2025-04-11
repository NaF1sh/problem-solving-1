#include <iostream>
#include <cmath>
using namespace std;

#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)
#define fastread()               \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

typedef long long ll;

void solve()
{
    ll m, x;
    cin >> m >> x;
    ll subs = 0;
    subs = ceil(static_cast<double>(m) / 6);
    cout << subs << endl;
    cout << subs * x;
    cout << endl;
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