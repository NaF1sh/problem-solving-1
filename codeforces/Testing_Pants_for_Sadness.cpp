#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    ll n;
    cin >> n;
    ll total = 0;

    for (ll i = 1; i <= n; i++)
    {
        ll a;
        cin >> a;
        total += (a - 1) * i;
    }

    total += n;
    cout << total << endl;
}

int main()
{
    fastread();
    solve();
    return 0;
}