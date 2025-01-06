#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)

int main()
{

    ll n;
    cin >> n;

    set<int> mp;

    for (ll i = 1; i <= n; i++)
    {
        mp.insert(i);
    }

    ll count = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll a;
        cin >> a;
        if (mp.erase(a))
            count++;
    }
    cout << n - count << endl;
}