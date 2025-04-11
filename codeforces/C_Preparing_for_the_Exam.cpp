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
    ll n1, m, k;
    cin >> n1 >> m >> k;

    vector<ll> list(m);
    unordered_set<ll> polycarpknows;
    vector<ll> polycarddoesntknow;

    for (size_t i = 0; i < n1; i++)
    {
        polycarddoesntknow.push_back(i + 1);
    }
    for (size_t i = 0; i < m; i++)
    {
        cin >> list[i];
    }
    for (size_t i = 0; i < k; i++)
    {
        ll x;
        cin >> x;
        polycarpknows.insert(x);
        polycarddoesntknow.erase(remove(polycarddoesntknow.begin(), polycarddoesntknow.end(), x), polycarddoesntknow.end());
    }

    string ans;

    for (size_t i = 0; i < m; i++)
    {
        bool flag = true;
        for (size_t j = 0; j < polycarddoesntknow.size(); j++)
        {
            if (list[i] != polycarddoesntknow[j])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            ans.push_back('1');
        }
        else
        {
            ans.push_back('0');
        }
    }
    cout << ans << endl;
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