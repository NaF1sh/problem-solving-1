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
    ll count1 = 0,
       count2 = 0, count3 = 0;

    for (size_t i = 0; i < m; i++)
    {
        ll a;
        cin >> a;

        if (a == 1)
        {
            count1++;
        }
        else if (a == 2)
            count2++;

        else
        {
            count3++;
        }
    }

    ll max1 = max(count1, max(count2, count3));

    cout << m - max1;
}
int main()
{
    fastread();
    solve();
}
