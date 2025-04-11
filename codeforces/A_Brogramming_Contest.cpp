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
    cin >> a;
    ll count = 0;

    bool switch1 = false;
    for (size_t i = 0; i < m; i++)
    {
        if (a[i] == '1')
        {
            if (i + 1 < m && a[i + 1] == '1')
            {
                while (i + 1 < m && a[i + 1] == '1')
                {
                    i++;
                }
            }
            count++;
            switch1 = true;
        }
        else if (a[i] == '0' && switch1)
        {
            if (i + 1 < m && a[i + 1] == '0')
            {
                while (i + 1 < m && a[i + 1] == '0')
                {
                    i++;
                }
            }
            count++;
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
    return 0;
}