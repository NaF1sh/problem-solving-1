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
    ll m, c, d;
    cin >> m >> c >> d;
    vector<ll> a(m * m);
    ll min1 = LLONG_MAX;
    for (size_t i = 0; i < m * m; i++)
    {
        cin >> a[i];
        if (a[i] < min1)
        {
            min1 = a[i];
        }
    }
    sort(a.begin(), a.end());

    vector<ll> a1(m * m); // Use a fixed-size vector
    a1[0] = min1;         // Start with the minimum value

    // Fill the first row
    for (size_t j = 1; j < m; j++)
    {
        a1[j] = a1[j - 1] + d;
    }

    // Fill the rest of the rows
    for (size_t i = 1; i < m; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            a1[i * m + j] = a1[(i - 1) * m + j] + c;
        }
    }

    sort(a1.begin(), a1.end());

    for (size_t i = 0; i < a1.size(); i++)
    {
        if (a[i] != a1[i])
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
    cases(n)
    {
        solve();
    }
    return 0;
}