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
    string a;
    cin >> a;
    ll n = a.size();
    bool ohio = false;

    for (ll i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            ohio = true;
            break;
        }
    }

    if (n > 1 && ohio)
        cout << "1" << endl;
    else
        cout << n << endl;
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