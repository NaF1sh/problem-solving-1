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
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        s.insert(temp);
    }
    if (s.size() == 1)
        cout << 1 << '\n';
    else if (s.size() > 2)
        cout << n << '\n';
    else
        cout << (2 + (n - 2) / 2) << '\n';
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