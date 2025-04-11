#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define tst   \
    int t;    \
    cin >> t; \
    while (t--)
#define inll(n) \
    ll n;       \
    cin >> n;
#define inarr(a, n)            \
    vector<ll> a(n);           \
    for (ll i = 0; i < n; i++) \
        cin >> a[i];
#define srt sort(a.begin(), a.end())

int main()
{
    tst
    {
        inll(n);
        inarr(a, n);
        srt;
        ll ans = 0;
        ll itert = 1;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] >= itert)
            {
                ans += a[i] - itert;
                itert++;
            }
        }
        cout << ans << endl;
    }
}
