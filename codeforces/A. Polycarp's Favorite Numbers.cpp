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

    vector<ll> a(m);
    for (size_t i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    ll maxPower = 0;
    vector<ll> powerCount(32, 0);

    for (size_t i = 0; i < m; i++)
    {
        ll num = a[i];
        ll power = 0;

        while (num % 2 == 0)
        {
            power++;
            num /= 2;
        }

        maxPower = max(maxPower, power);

        powerCount[power]++;
    }

    cout << (1LL << maxPower) << " " << powerCount[maxPower];
}

int main()
{
    fastread();
    solve();
    return 0;
}
