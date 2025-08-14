#include <bits/stdc++.h>
using namespace std;

#define fast()               \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    int n, m, l, r;
    cin >> n >> m >> l >> r;

    int a = -l;
    int x = min(m, a);

    int l1 = -x;
    int r1 = m - x;

    cout << l1 << " " << r1 << '\n';
}

int main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
