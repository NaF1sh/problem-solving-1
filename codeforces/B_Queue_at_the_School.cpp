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
    ll m, t;

    cin >> m >> t;

    string input;
    cin >> input;

    while (t--)
    {

        for (ll i = 0; i < m - 1; i++)
        {

            if (input[i] == 'B' && input[i + 1] == 'G')
            {
                input[i] = 'G';
                input[i + 1] = 'B';
                i += 1;
            }
        }
    }
    cout << input;
}

int main()
{
    fastread();

    solve();
}
