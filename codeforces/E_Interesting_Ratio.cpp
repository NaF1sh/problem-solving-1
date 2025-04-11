#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

const ll MAX_N = 1e7 + 1;
vector<bool> prime(MAX_N, true);
vector<int> cnt(MAX_N, 0);

void computePrimes()
{
    prime[0] = prime[1] = false;
    for (ll i = 2; i < MAX_N; i++)
    {
        if (prime[i])
        {
            for (ll j = i + i; j < MAX_N; j += i)
            {
                prime[j] = false;
            }
        }
    }
}

void computeRatios()
{
    for (ll b = 2; b < MAX_N; b++)
    {
        if (prime[b])
        {
            for (ll k = b; k < MAX_N; k += b)
            {
                cnt[k]++;
            }
        }
    }

    for (ll i = 1; i < MAX_N; i++)
    {
        cnt[i] += cnt[i - 1];
    }
}

void solve()
{
    ll n;
    cin >> n;
    cout << cnt[n] << "\n";
}

int main()
{
    fastread();
    computePrimes();
    computeRatios();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
