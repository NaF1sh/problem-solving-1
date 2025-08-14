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

    vector<string> grid(a);
    for (size_t i = 0; i < a; i++)
    {
        cin >> grid[i];
    }
    ll cost = 0;
    for (size_t i = 0; i < a; i++)
    {
        ll j = 0;

        while (j < b)
        {

            if (grid[i][j] == '.')
            {

                if (j + 1 < b && grid[i][j + 1] == '.' && d < 2 * c)
                {
                    cost += d;
                    j++;
                    j++;
                }
                else
                {
                    j++;
                    cost += c;
                }
            }
            else
            {
                j++;
            }
        }
    }
    cout << cost << endl;
}
int main()
{
    fastread();
    cases(n)
    {
        solve();
    }
}
