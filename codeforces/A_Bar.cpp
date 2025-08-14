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

    set<string> a = {"ABSINTH",
                     "BEER",
                     "BRANDY",
                     "CHAMPAGNE",
                     "GIN",
                     "RUM",
                     "SAKE",
                     "TEQUILA",
                     "VODKA",
                     "WHISKEY",
                     "WINE"};
    ll count = 0;
    while (m--)
    {
        string a1;
        cin >> a1;

        if (a.find(a1) != a.end())
        {
            count++;
        }
        else
        {
            if (all_of(a1.begin(), a1.end(), ::isdigit) && stoll(a1) < 18)
            {
                count++;
            }
        }
    }
    cout << count;
}
int main()
{
    fastread();
    solve();
}
