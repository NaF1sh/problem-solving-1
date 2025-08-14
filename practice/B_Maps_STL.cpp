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
    map<string, ll> a;
    while (m--)
    {
        ll q;
        cin >> q;
        if (q == 1)
        {
            string a1;
            cin >> a1;
            ll a2;
            cin >> a2;

            a[a1] += a2;
        }
        else if (q == 2)
        {
            string a1;
            cin >> a1;
            a.erase(a1);
        }
        else
        {
            string a1;
            cin >> a1;
            auto it = a.find(a1);
            if (it != a.end())
                cout << it->second << endl;
            else
                cout << 0 << endl;
        }
    }
}
int main()
{
    fastread();
    solve();
}
