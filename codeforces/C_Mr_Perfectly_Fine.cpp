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
    ll skill1 = LONG_LONG_MAX;
    ll skill2 = LONG_LONG_MAX;
    ll combined = LONG_LONG_MAX;
    while (m--)
    {
        ll time;
        cin >> time;

        ll k;
        cin >> k;

        if (k == 1)
        {
            skill1 = min(skill1, time);
        }
        else if (k == 10)
        {
            skill2 = min(skill2, time);
        }
        else if (k == 11)
        {
            combined = min(combined, time);
        }
    }

    ll total = combined;
    if (skill1 != LONG_LONG_MAX && skill2 != LONG_LONG_MAX)
    {
        total = min(total, skill1 + skill2);
    }

    if (total == LONG_LONG_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << total << endl;
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