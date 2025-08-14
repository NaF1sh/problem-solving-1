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
    string a;
    cin >> a;

    vector<string> evee = {"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
    for (size_t i = 0; i < evee.size(); i++)
    {
        if (m == evee[i].size())
        {
            bool match = true;
            for (size_t i1 = 0; i1 < m; i1++)
            {
                if (a[i1] != '.' && a[i1] != evee[i][i1])
                {
                    match = false;
                    break;
                }
            }
            if (match)
            {
                cout << evee[i] << "\n";
                return;
            }
        }
    }
}

int main()
{
    fastread();
    solve();
    return 0;
}