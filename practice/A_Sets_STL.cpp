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
    set<ll> a;
    while (m--)
    {
        ll a1, a2;
        cin >> a1 >> a2;
        if (a1 == 1)
        {
            a.insert(a2);
        }
        else if (a1 == 2)
        {
            a.erase(a2);
        }
        else
        {
            if (a.count(a2) > 0)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
}
int main()
{
    fastread();
    solve();
}
