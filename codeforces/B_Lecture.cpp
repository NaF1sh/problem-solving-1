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
    ll m, n;
    cin >> n >> m;

    unordered_map<string, string> a;

    for (size_t i = 0; i < m; i++)
    {
        string a1, a2;
        cin >> a1 >> a2;

        a[a1] = (a1.length() <= a2.length()) ? a1 : a2;
    }
    for (size_t i = 0; i < n; i++)
    {
        string b;
        cin >> b;
        cout << a[b] << " ";
    }
    cout << endl;
}
int main()
{
    fastread();
    solve();
}
