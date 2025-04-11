#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    ll m, m1;
    cin >> m >> m1;

    ll count = m;
    ll r = 0;

    while (m > 0)
    {
        r += m % m1;
        m = m / m1;
        count += m;

        if (r >= m1)
        {
            count += r / m1;
            m += r / m1;
            r = r % m1;
        }
    }

    cout << count << endl;
}

int main()
{
    fastread();
    solve();
}
