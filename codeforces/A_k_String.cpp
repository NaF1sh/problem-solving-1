#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    ll m;
    cin >> m;

    map<char, ll> a;
    string s;
    cin >> s;

    for (char c : s)
    {
        a[c]++;
    }

    for (const auto &pair : a)
    {
        if (pair.second % m != 0)
        {
            cout << -1 << endl;
            return;
        }
    }

    string ans;
    for (const auto &pair : a)
    {
        ans += string(pair.second / m, pair.first);
    }

    for (ll i = 0; i < m; i++)
    {
        cout << ans;
    }
    cout << endl;
}

int main()
{
    fastread();
    solve();
    return 0;
}