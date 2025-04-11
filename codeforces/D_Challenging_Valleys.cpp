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

    for (size_t i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    ll count = 0, l = 0;
    bool flag = false;

    for (size_t i = 0; i < m - 1; i++)
    {
        if (flag)
        {
            if (a[i] == a[i + 1])
            {
                l++;
            }
            else if (a[i] < a[i + 1])
            {
                if (l > 0)
                {
                    count++;
                    l = 0;
                }
            }
        }
        if (i == 0 && !flag)
        {
            if (a[i] == a[i + 1])
            {
                flag = true;
                l++;
            }
        }
    }

    // Check for the last element
    if (flag && l > 0)
    {
        count++;
    }

    cout << count << endl;
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