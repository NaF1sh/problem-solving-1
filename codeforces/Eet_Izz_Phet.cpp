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

    set<string> a;

    for (size_t i = 0; i < m; i++)
    {
        string input;
        cin >> input;
        a.insert(input);
    }
    ll m1;
    cin >> m1;

    while (m1--)
    {
        string input;
        cin >> input;
        if (a.find(input) != a.end())
        {
            cout << "yes" << endl;
        }
        else
        {

            cout << "no" << endl;
        }
    }
}
int main()
{
    fastread();
    solve();
}
