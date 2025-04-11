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
    ll m;
    cin >> m;
    vector<ll> a(m);
    vector<ll> ans;

    bool rotated = false;
    ll first = -1, last = -1;

    for (ll i = 0; i < m; i++)
    {
        cin >> a[i];
        if (ans.empty())
        {
            ans.push_back(1);
            first = last = a[i];
        }
        else
        {
            if (!rotated)
            {
                if (a[i] >= last)
                {
                    ans.push_back(1);
                    last = a[i];
                }
                else if (a[i] <= first)
                {
                    ans.push_back(1);
                    last = a[i];
                    rotated = true;
                }
                else
                {
                    ans.push_back(0);
                }
            }
            else
            {
                if (a[i] >= last && a[i] <= first)
                {
                    ans.push_back(1);
                    last = a[i];
                }
                else
                {
                    ans.push_back(0);
                }
            }
        }
    }

    for (ll a2 : ans)
    {
        cout << a2;
    }
    cout << endl;
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
