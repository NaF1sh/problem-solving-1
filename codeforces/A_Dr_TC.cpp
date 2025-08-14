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

    string s;
    cin >> s;
    ll count1 = count(s.begin(), s.end(), '1');

    cout << m + count1 * (m - 2) << endl;
}
int main()
{
    fastread();
    cases(n)
    {
        solve();
    }
}
