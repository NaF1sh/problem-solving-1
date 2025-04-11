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
    string line;
    bool switch1 = false;
    while (getline(cin, line))
    {
        for (size_t i = 0; i < line.size(); i++)
        {
            if (line[i] == '"')
            {
                if (!switch1)
                {
                    cout << "``";
                    switch1 = true;
                }
                else
                {
                    cout << "''";
                    switch1 = false;
                }
            }
            else
            {
                cout << line[i];
            }
        }
        cout << '\n';
    }
}

int main()
{
    fastread();
    solve();
}