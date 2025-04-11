#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    ll a;
    cin >> a;

    if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    cout << endl;
}

int main()
{
    fastread();
    solve();
    return 0;
}