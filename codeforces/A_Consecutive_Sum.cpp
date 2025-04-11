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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> selected(k, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        selected[(i % k)] = max(selected[(i % k)], a[i]);
    }

    ll ans = 0;
    for (int i = 0; i < k; i++)
    {
        ans += selected[i];
    }

    cout << ans << endl;
}

int main()
{
    fastread();
    cases(t)
    {
        solve();
    }
}
