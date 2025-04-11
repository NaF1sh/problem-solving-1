#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define cases(t) \
    ll t;        \
    cin >> t;    \
    while (t--)
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    set<int> ua, ub;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        ua.insert(a[i]);
    }

    for (int i = 0; i < n; ++i)
    {
        cin >> b[i];
        ub.insert(b[i]);
    }

    if (ua.size() == 1 && ub.size() == 1)
    {
        cout << "NO\n";
        return;
    }

    if (ua.size() > 1 && ub.size() > 1)
    {
        cout << "YES\n";
        return;
    }

    set<int> sums;
    for (int i = 0; i < n; ++i)
    {
        sums.insert(a[i] + b[i]);
    }

    cout << (sums.size() >= 3 ? "YES\n" : "NO\n");
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
