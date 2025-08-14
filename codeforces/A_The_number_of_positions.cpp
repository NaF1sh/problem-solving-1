#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;

    cout << n - max(a + 1, n - b) + 1 << endl;
}

int main()
{
    fastread();
    solve();
}
