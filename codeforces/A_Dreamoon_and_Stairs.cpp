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
    ll n, m;
    cin >> n >> m;

    if (m > n)
    {
        cout << "-1";
        return;
    }
    ll moves = (n + 1) / 2;

    while (moves % m != 0)
    {
        moves++;
    }
    cout << moves;
}
int main()
{
    fastread();
    solve();
}
