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
    cases(t)
    {
        ll n;
        cin >> n;

        vector<ll> vec(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        bool c = false;
        ll i = 0;

        while (i < n - 1)
        {
            if (vec[i] > vec[i + 1])
            {
                c = true;
                break;
            }
            else
            {
                vec[i + 1] -= vec[i];
                vec[i] = 0;
            }
            i++;
        }

        if (c)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}

int main()
{
    fastread();
    solve();
}
