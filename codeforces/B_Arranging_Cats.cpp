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

    string a;
    string b;

    cin >> a >> b;
    ll count1 = 0;
    for (size_t i = 0; i < m; i++)
    {
        if (a[i] == '1' && b[i] == '0')
        {
            count1++;
        }
    }
    ll count2 = 0;
    for (size_t i = 0; i < m; i++)
    {
        if (b[i] == '1' && a[i] == '0')
        {
            count2++;
        }
    }
    cout << max(count1, count2) << endl;
}
int main()
{
    fastread();
    cases(n)
    {
        solve();
    }
}
