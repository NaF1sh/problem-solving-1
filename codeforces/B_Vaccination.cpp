#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void solve()
{
    ll n, k, d, w;
    cin >> n >> k >> d >> w;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll ans = 0;
    ll validUntil = 0, rem = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || validUntil < a[i] || rem == 0)
        {
            ans++;
            rem = k;
            validUntil = a[i] + w + d;
        }
        rem--;
    }
    cout << ans << endl;
}

int main()
{
    Faster;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}