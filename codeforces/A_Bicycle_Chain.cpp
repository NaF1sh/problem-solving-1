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
    ll count = 0;
    ll max1 = 0;
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < m1; j++)
        {
            if (a1[j] % a[i] == 0)
            {

                ll ratio = a1[j] / a[i];

                if (ratio > max1)
                {
                    max1 = ratio;
                    count = 1;
                }
                else if (ratio == max1)
                {
                    count++;
                }
            }
        }
    }
    cout << count;
}
int main()
{
    fastread();
    solve();
}
