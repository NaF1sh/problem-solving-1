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
    int m;
    cin >> m;

    vector<int> b(m - 2);
    for (int i = 0; i < m - 2; i++)
    {
        cin >> b[i];
    }
    if (m == 3)
    {
        cout << "YES" << endl;
        return;
    }

    for (int i = 0; i < b.size() - 2; i++)
    {
        if (b[i] == 1 && b[i + 1] == 0 && b[i + 2] == 1)
        {

            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
    return;
}

int main()
{
    fastread();
    cases(n)
    {
        solve();
    }
}