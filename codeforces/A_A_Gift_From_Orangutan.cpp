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

    sort(a.begin(), a.end());

    ll max1 = a[m - 1];
    ll min1 = a[0];

    // Calculate the score
    ll score = 0;
    for (size_t i = 0; i < m - 1; i++)
    {
        min1 = min(min1, a[i]);
        score += max1 - min1;
    }

    cout << score << endl;
}

int main()
{
    fastread();

    cases(n)
    {
        solve();
    }
}
