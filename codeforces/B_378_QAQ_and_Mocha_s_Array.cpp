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
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    set<int> x(v.begin(), v.end());
    if (x.size() <= 2)
    {
        cout << "YES" << '\n';
        return;
    }
    auto it = x.begin();
    int f = *it;
    while (it != x.end() && *it % f == 0)
    {
        it++;
    }
    int s;
    if (it == x.end())
    {
        s = f;
    }
    else
    {
        s = *it;
    }
    bool ok = true;
    for (auto &i : x)
    {
        if (i % f != 0 && i % s != 0)
        {
            ok = false;
            break;
        }
    }
    cout << (ok ? "YES" : "NO") << '\n';
}

int main()
{
    fastread();
    cases(tc)
    {
        solve();
    }
    return 0;
}