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

    string a;
    cin >> a;

    for (size_t i = 1; i < a.size(); i++)

    {
        if (a[i] != '?' && a[i] == a[i - 1])
        {
            cout << "-1" << endl;

            return;
        }
    }

    for (size_t i = 0; i < a.size(); i++)
    {
        if (a[i] == '?')
        {
            if (a[i - 1] != 'a' && a[i + 1] != 'a')
            {
                a[i] = 'a';
            }
            else if (a[i - 1] != 'b' && a[i + 1] != 'b')
            {
                a[i] = 'b';
            }
            else
            {
                a[i] = 'c';
            }
        }
    }
    cout << a << " " << endl;
}
int main()
{
    fastread();
    cases(n)
    {
        solve();
    }
}
