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
    ll a, b, c;
    cin >> a >> b >> c;

    vector<ll> values = {a, b, c};
    sort(values.begin(), values.end());

    if (values[1] == values[2])
    {
        cout << "YES" << endl;
        cout << values[2] << " " << values[0] << " " << values[0] << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    fastread();

    cases(n)
    {
        solve();
    }
    return 0;
}
