#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

int vFactor(int x, int p)
{
    int cnt = 0;
    while (x % p == 0)
    {
        cnt++;
        x /= p;
    }
    return cnt;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;

    int prime = (k == 4) ? 2 : k, req = (k == 4) ? 2 : 1, total = 0;
    for (int x : a)
        total += vFactor(x, prime);
    if (total >= req)
    {
        cout << 0 << endl;
        return;
    }

    int deficit = req - total, min1 = 1e9, min2 = 1e9;
    for (int x : a)
    {
        for (int m = 1; m <= 10; m++)
        {
            int gain = vFactor(x + m, prime) - vFactor(x, prime);
            if (gain >= 1)
                min1 = min(min1, m);
            if (gain >= 2)
                min2 = min(min2, m);
            if (min1 != 1e9 && min2 != 1e9)
                break;
        }
    }
    cout << (deficit == 1 ? min1 : min(min2, 2 * min1)) << endl;
}

int main()
{
    fastread();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}