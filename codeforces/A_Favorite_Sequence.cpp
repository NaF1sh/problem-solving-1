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

    ll l = a.size() - 1;

    ll r = 0;
    vector<ll> ans;
    while (r <= l)
    {
        ans.push_back(a[r]);
        ans.push_back(a[l]);
        r++;
        l--;
    }
    for (size_t i = 0; i < m; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
int main()
{
    fastread();
    cases(n)
    {

        solve();
    }
}
