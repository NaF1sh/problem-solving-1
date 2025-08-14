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

    ll sum = 0;
    while (m--)
    {

        ll q;
        cin >> q;

        sum += q;
    }
    ll tar = sum;

    ll a = sqrt(sum);

    if (a * a == sum)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    fastread();
    cases(n)
    {
        solve();
    }
}
