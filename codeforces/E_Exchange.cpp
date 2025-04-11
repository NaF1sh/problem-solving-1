#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;

    if (a > b)
    {

        cout << 1 << endl;
    }
    else
    {

        ll quests = (n + a - 1) / a;
        ;
        cout << quests << endl;
    }
}

int main()
{
    fastread();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
