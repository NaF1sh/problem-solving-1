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

    vector<ll> a;
    ll m;
    cin >> m;
    for (size_t i = 0; i < m; i++)
    {
        ll a1;
        cin >> a1;
        a.push_back(a1);
    }
    sort(a.begin(), a.end());

    for (auto l : a)
    {
        cout << l << " ";
    }
}
int main()
{
    fastread();
    solve();
}
