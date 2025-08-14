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

    vector<ll> a;

    for (size_t i = 0; i < m; i++)
    {
        ll a1;
        cin >> a1;
        a.push_back(a1);
    }

    ll m1;
    cin >> m1;
    ll start, end;
    cin >> start >> end;
    a.erase(a.begin() + m1 - 1);
    a.erase(a.begin() + start - 1, a.begin() + end - 1);
    cout << a.size() << endl;
    for (size_t i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    fastread();
    solve();
}
