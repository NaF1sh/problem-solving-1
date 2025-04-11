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

    bool flag = true;
    ll m;
    cin >> m;

    vector<ll> a(m);

    for (size_t i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    ll min = *min_element(a.begin(), a.end());

    if (min == a[0])
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
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
