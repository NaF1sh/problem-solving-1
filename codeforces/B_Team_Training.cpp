#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define cases(t) \
    ll t;        \
    cin >> t;    \
    while (t--)
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

int main()
{
    fastread();
    cases(t)
    {
        ll n, x;
        cin >> n >> x;
        vector<ll> s(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        sort(s.begin(), s.end(), greater<ll>());
        ll tms = 0, grp = 0;
        for (ll i = 0; i < n; i++)
        {
            grp++;
            if (s[i] * grp >= x)
            {
                tms++;
                grp = 0;
            }
        }
        cout << tms << "\n";
    }
    return 0;
}