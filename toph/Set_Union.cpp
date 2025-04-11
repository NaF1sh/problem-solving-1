#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    ll m, m1;
    cin >> m >> m1;
    map<ll, ll> input;
    for (size_t i = 0; i < m; i++)
    {
        ll o;
        cin >> o;
        input[o]++;
    }
    for (size_t i = 0; i < m1; i++)
    {
        ll o;
        cin >> o;
        input[o]++;
    }
    bool first = true;
    for (auto it = input.begin(); it != input.end(); ++it)
    {
        if (!first)
        {
            cout << " ";
        }
        cout << it->first;
        first = false;
    }
    cout << endl;
}

int main()
{
    fastread();
    solve();
    return 0;
}