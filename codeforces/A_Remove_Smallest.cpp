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
    sort(a.begin(), a.end());

    bool flag = true;

    for (size_t i = 0; i < m - 1; i++)
    {
        if (a[i + 1] - a[i] > 1)
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }

    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    fastread();

    cases(n)
    {
        solve();
    }
}
