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

    ll m;
    cin >> m;
    map<string, ll> input;

    for (size_t i = 0; i < m; i++)
    {
        string a;
        cin >> a;

        input[a]++;

        if (input[a] < 2)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
        cout << endl;
    }
}

int main()
{
    fastread();

    solve();
}
