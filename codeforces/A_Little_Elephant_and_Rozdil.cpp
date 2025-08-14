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

    vector<ll> a1 = a;

    sort(a1.begin(), a1.end());

    if (a1[0] == a1[1])
    {
        cout << "Still Rozdil" << endl;
        return;
    }

    auto it = find(a.begin(), a.end(), a1[0]);

    cout << (it - a.begin() + 1);
}
int main()
{
    fastread();
    solve();
}
