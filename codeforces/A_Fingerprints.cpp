#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)

int main()
{

    ll n, m;
    cin >> n >> m;
    vector<int> keys(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> keys[i];
    }
    vector<int> fpkeys(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> fpkeys[i];
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (keys[i] == fpkeys[j])
            {
                cout << keys[i] << " ";
            }
        }
    }
}