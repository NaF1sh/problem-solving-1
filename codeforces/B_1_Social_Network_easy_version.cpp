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
    ll m, m1;
    cin >> m >> m1;

    vector<ll> a(m);
    deque<ll> display;

    for (size_t i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    for (size_t i = 0; i < m; i++)
    {
        bool flag = false;
        for (ll o : display)
        {
            if (o == a[i])
            {
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            if (display.size() == m1)
            {
                display.pop_back();
            }
            display.push_front(a[i]);
        }
    }

    cout << display.size() << endl;
    for (ll o : display)
    {
        cout << o << " ";
    }
    cout << endl;
}

int main()
{
    fastread();
    solve();
    return 0;
}