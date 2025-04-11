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
    ll count = 0;
    for (char a1 : a)
    {
        if (a1 == '1')
            count++;
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
