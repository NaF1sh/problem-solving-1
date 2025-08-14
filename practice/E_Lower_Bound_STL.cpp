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

    while (m1--)
    {

        ll q;
        cin >> q;

        auto lb = lower_bound(a.begin(), a.end(), q);
        if (lb != a.end() && *lb == q)
        {
            cout << "Yes " << (lb - a.begin() + 1) << "\n";
        }
        else
        {

            cout << "No " << (lb - a.begin() + 1) << endl;
        }
    }
}
int main()
{
    fastread();
    solve();
}
