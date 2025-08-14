#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    ll m;
    cin >> m;

    for (ll i = 0; i <= m; i++)
    {

        for (ll j = 0; j < (m - i) * 2; j++)
        {
            cout << " ";
        }

        // Print increasing numbers
        for (ll j = 0; j <= i; j++)
        {
            cout << j;
            if (j != i)
                cout << " ";
        }

        for (int j = i - 1; j >= 0; j--)
        {
            cout << " " << j;
        }
        cout << endl;
    }

    for (ll i = m - 1; i >= 0; i--)
    {

        for (ll j = 0; j < (m - i) * 2; j++)
        {
            cout << " ";
        }

        for (ll j = 0; j <= i; j++)
        {
            cout << j;
            if (j != i)
                cout << " ";
        }

        for (int j = i - 1; j >= 0; j--)
        {
            cout << " " << j;
        }
        cout << endl;
    }
}

int main()
{
    fastread();
    solve();
    return 0;
}