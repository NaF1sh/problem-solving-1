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

    string input;
    cin >> input;
    ll count = 0;
    ll ans = 0;
    bool flag = false;

    for (char c : input)
    {
        if (c == '.')
        {
            count++;
            ans++;
        }
        else
        {

            count = 0;
        }
        if (count == 3)
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << 2 << endl;
    else
    {
        cout << ans << endl;
    }
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