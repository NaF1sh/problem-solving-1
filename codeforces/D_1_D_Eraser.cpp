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
    ll m, m1;
    cin >> m >> m1;

    string a;
    cin >> a;
    ll count = 0;

    for (size_t i = 0; i < m;)
    {
        ll m2 = m1;
        bool flag = false;
        if (a[i] == 'B')
        {
            while (m2-- && i < m)
            { 
                if (a[i] == 'B' && !flag)
                {
                    flag = true;
                    count++;
                }
                i++;
            }
        }
        else
        {
            i++;
        }
    }
    cout << count << endl;
}

int main()
{
    fastread();
    cases(n)
    {
        solve();
    }
}
