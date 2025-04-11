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
    ll m1, m2;
    cin >> m1 >> m2;

    if (m1 == 1)
    {
        cout << "YES" << endl;
        return;
    }

    vector<ll> a(m1);
    for (size_t i = 0; i < m1; i++)
    {
        cin >> a[i];
    }
    vector<ll> b(m2);
    for (size_t i = 0; i < m2; i++)
    {
        cin >> b[i];
    }
    ll j = 0;
    for (size_t i = 1; i < m1; i++)
    {
        if (a[i] < a[i - 1])
        {
            a[i] = a[j] - a[i];
            j++;
        }
    }

    for (size_t i = 0; i < m1 - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main()
{
    fastread();

    cases(t)
    {
        solve();
    }
    return 0;
}