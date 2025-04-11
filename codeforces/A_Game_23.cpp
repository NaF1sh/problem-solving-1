#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    ll n, m;
    cin >> n >> m;

    if (m % n != 0)
    {
        cout << -1 << endl;
        return;
    }

    ll count = 0;
    ll m1 = m / n;

    while (m1 % 2 == 0)
    {
        m1 /= 2;
        count++;
    }
    while (m1 % 3 == 0)
    {
        m1 /= 3;
        count++;
    }

    if (m1 != 1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << count << endl;
    }
}

int main()
{
    fastread();

    solve();
    return 0;
}