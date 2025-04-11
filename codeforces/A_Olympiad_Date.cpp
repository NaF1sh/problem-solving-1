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
    ll n;
    cin >> n;
    vector<ll> freq(10, 0);
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll d;
        cin >> d;
        freq[d]++;
        if (freq[0] >= 3 && freq[1] >= 1 && freq[2] >= 2 && freq[3] >= 1 && freq[5] >= 1 && ans == 0)
        {
            ans = i;
        }
    }
    cout << ans << "\n";
}

int main()
{
    fastread();
    cases(t)
    {
        solve();
    }
    return 0;
}