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
    string a;
    cin >> a;

    if (a.size() >= 2 && a.substr(a.size() - 2) == "us")
    {
        a.erase(a.size() - 2, 2);
        a.insert(a.size(), "i");
    }

    cout << a << endl;
}

int main()
{
    fastread();

    cases(n)
    {
        solve();
    }
    return 0;
}