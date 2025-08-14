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

    string a1;
    string a2;
    cin >> a1 >> a2;

    unordered_set<char> a1set(a1.begin(), a1.end());
    for (char c : a2)
    {
        if (a1set.count(c))
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}
int main()
{
    fastread();
    cases(n)
    {
        solve();
    }
}
