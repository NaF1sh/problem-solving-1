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

int main()
{
    fastread();
    cases(n)
    {
        vector<ll> v(4);
        for (ll i = 0; i < 4; i++)
        {
            cin >> v[i];
        }
        vector<ll> v1 = v;

        sort(v1.begin(), v1.end());

        ll max1 = v1[3];
        ll max1_1 = v1[2];

        ll _1st_round = max(v[0], v[1]);
        ll _2nd_round = max(v[2], v[3]);

        if (max1 == _1st_round && max1_1 == _2nd_round || max1 == _2nd_round && max1_1 == _1st_round)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}