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
    int i, j, k;
    int n, x, sum = 0;

    cin >> n >> x;
    for (i = 0; i < n; i++)
    {
        cin >> k;
        sum += k;
    }

    sum = abs(sum);

    if (sum == 0)
        cout << "0";

    else if (sum <= x)
        cout << "1";

    else
    {
        if (sum % x == 0)
            cout << sum / x;
        else
            cout << (sum / x + 1);
    }
}

int main()
{
    fastread();

    solve();
}
