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

    ll cc = 0, maxc = 0;
    set<ll> inside;
    for (size_t i = 0; i < m; i++)
    {
        char a;
        cin >> a;
        ll a1;
        cin >> a1;
        if (a == '+')
        {
            inside.insert(a1);
            cc++;
        }
        else
        {
            if (inside.count(a1))
            {
                inside.erase(a1);
                cc--;
            }
            else
            {
                maxc++;
            }
        }
        maxc = max(maxc, cc);
    }
    cout << maxc;
}
int main()
{
    fastread();
    solve();
}
