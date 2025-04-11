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

int main()
{
    fastread();
    cases(n)
    {
        ll m;
        cin >> m;

        for (ll i = 1; i <= m; i++)
        {

            for (ll j = 0; j < i; j++)
            {
                cout << "(";
            }
            for (ll j = 0; j < i; j++)
            {
                cout << ")";
            }
            for (ll j = 0; j < m - i; j++)
            {
                cout << "()";
            }
            cout << endl;
        }
    }
    return 0;
}