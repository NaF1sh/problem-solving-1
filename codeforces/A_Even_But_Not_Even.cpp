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

    ll sum = 0;
    for (char c : input)
    {
        sum += (c - '0');
    }
    if (sum % 2 == 0 && (input.back() - '0') % 2 != 0)
    {
        cout << input;
    }
    else
    {
        ll odd = 0;
        for (char c : input)
        {
            if ((c - '0') % 2 != 0)
            {
                odd++;
            }
        }
        if (odd <= 1)
        {
            cout << -1;
        }
        else
        {
            ll i = 2;
            for (char c : input)
            {
                if ((c - '0') % 2 != 0 && i > 0)
                {
                    cout << (c - '0');
                    i--;
                }
            }
        }
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