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
    ll a, b, c;
    bool flag = false;
    cin >> a >> b >> c;
    ll max_num = max({a, b, c});
    ll sum_of_less2 = (a + b + c) - max_num;

    if (max_num <= sum_of_less2 + 1)
        flag = true;

    if (!flag)
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }
    cout << endl;
}

int main()
{
    fastread();

    cases(n)
    {
        solve();
    }
}
