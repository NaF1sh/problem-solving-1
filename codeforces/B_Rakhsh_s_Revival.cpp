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

    ll m, m1, m2;
    cin >> m >> m1 >> m2;

    string a;
    cin >> a;
    ll count1 = 0;
    ll ans = 0;
    for (ll i = 0; i < m; i++)
    {
        if (a[i] == '0')
        {
            count1++;
            if (count1 == m1)
            {

                for (ll j = i; j < min(m, (i + m2)); j++)
                {
                    a[j] = '1';
                }
                ans++;
                count1 = 0;
            }
        }
        else
        {
            count1 = 0;
        }
    }
    cout << ans << endl;
}
int main()
{
    fastread();
    cases(n)
    {
        solve();
    }
}
