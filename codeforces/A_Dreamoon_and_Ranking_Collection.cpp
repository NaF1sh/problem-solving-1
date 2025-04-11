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
    ll m, a;
    cin >> m >> a;

    vector<ll> arraya1(m);

    for (size_t i = 0; i < m; i++)
    {
        cin >> arraya1[i];
    }

    ll cr = 1;
    sort(arraya1.begin(), arraya1.end());
    for (size_t i = 0; i < m; i++)
    {
        while (cr < arraya1[i] && a > 0)
        {
            cr++;
            a--;
        }
        if (cr == arraya1[i])
            cr++;
    }
    cr += a;
    cout << cr - 1 << endl;
}

int main()
{
    fastread();

    cases(n)
    {
        solve();
    }
}
