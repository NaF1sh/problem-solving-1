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

    deque<pair<ll, ll>> a;

    ll m, m1;

    cin >> m >> m1;

    for (size_t i = 0; i < m; i++)
    {
        ll a1;
        cin >> a1;

        a.push_back(make_pair(a1, i + 1));
    }

    while (a.size() > 1)
    {

        if (a.front().first <= m1)
        {
            a.pop_front();
        }
        else
        {

            auto front = a.front();
            a.pop_front();
            front.first -= m1;
            a.push_back(front);
        }
    }
    cout << a.front().second << endl;
}
int main()
{
    fastread();
    solve();
}
