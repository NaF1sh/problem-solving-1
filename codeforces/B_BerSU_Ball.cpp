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

    ll m1;
    cin >> m1;
    vector<ll> a1(m1);

    for (size_t i = 0; i < m1; i++)
    {
        cin >> a1[i];
    }
    sort(a.begin(), a.end());
    sort(a1.begin(), a1.end());
    ll b = 0;
    ll g = 0;
    ll count = 0;
    while (b < m && g < m1)
    {

        if (abs(a[b] - a1[g]) <= 1)
        {

            count++;
            b++;
            g++;
                }
        else if (a[b] < a1[g])
        {
            b++;
        }
        else
        {
            g++;
        }
    }
    cout << count;
}
int main()
{
    fastread();
    solve();
}
