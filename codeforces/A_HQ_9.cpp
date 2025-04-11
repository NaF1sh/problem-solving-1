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
    string s;
    cin >> s;
    bool flag = false;
    for (char c : s)
    {
        if (c == 'H' || c == 'Q' || c == '9')
        {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    fastread();

    solve();
}
