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
    string input;
    cin >> input;

    if (input == "WECNITK")
    {
        cout << "Welcome to Web Club!";
    }
    else
    {
        cout << "Access denied";
    }
}

int main()
{
    fastread();

    solve();
}
