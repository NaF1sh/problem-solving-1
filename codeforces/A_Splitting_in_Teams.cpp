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

    ll count1 = 0;
    ll count2 = 0;

    for (size_t i = 0; i < m; i++)
    {

        ll a1;
        cin >> a1;

        if (a1 == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    if (count2 == 0)
    {

        cout << count1 / 3;
    }
    else
    {

        cout << min(count1, count2);
    }
}
int main()
{
    fastread();
    solve();
}
