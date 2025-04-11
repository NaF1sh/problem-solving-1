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
    map<ll, ll> freq, idx;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        freq[a]++;
        idx[a] = i + 1;
    }

    ll index = -1;
    for (const auto &pair : freq)
    {
        if (pair.second == 1)
        {
            index = idx[pair.first];
            break;
        }
    }

    cout << index << endl;
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