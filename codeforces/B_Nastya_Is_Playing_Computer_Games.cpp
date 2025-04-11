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

    ll n, k;
    cin >> n >> k;

    ll mindis = min(k - 1, n - k);

    cout << mindis + (3 * n);
}
int main()
{
    fastread();
    solve();
}
