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

    if (m == 1)
    {
        cout << "Jolly" << endl;
        return;
    }

    vector<ll> a1(m - 1);
    set<ll> acount;

    for (size_t i = 1; i < m; i++)
    {
        a1[i - 1] = abs(a[i] - a[i - 1]);
        acount.insert(i);
    }

    for (size_t i = 0; i < m - 1; i++)
    {
        acount.erase(a1[i]);
    }

    if (acount.empty())
    {
        cout << "Jolly" << endl;
    }
    else
    {
        cout << "Not jolly" << endl;
    }
}

int main()
{
    fastread();
    solve();
}
