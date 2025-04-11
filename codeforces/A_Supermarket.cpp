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

    double min1 = DBL_MAX;

    for (size_t i = 0; i < n; i++)
    {
        double a, b;
        cin >> a >> b;

        double pp = (a / b);

        if (pp < min1)
        {
            min1 = pp;
        }
    }

    cout << fixed << setprecision(9) << min1 * m << endl;
}

int main()
{
    fastread();

    solve();
    return 0;
}