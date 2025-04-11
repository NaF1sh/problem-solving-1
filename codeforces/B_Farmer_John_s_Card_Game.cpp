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
    const int N = 2005;
    int n, m, ans[N], nxt[N];
    set<int> a[N];
    bool mk[N];

    cases(tc)
    {
        cin >> n >> m;

        for (int i = 0; i < n; i++)
            a[i].clear();
        memset(nxt, -1, sizeof(nxt));
        memset(mk, 0, sizeof(mk));

        for (int i = 0; i < n; i++)
        {
            int x;
            for (int j = 0; j < m; j++)
            {
                cin >> x;
                a[i].insert(x);
            }
            nxt[*a[i].begin()] = i;
        }

        int k = n * m;
        bool valid = true;

        for (int i = 0; i < k; i++)
        {
            if (i < n)
            {
                if (nxt[i] == -1)
                {
                    valid = false;
                    break;
                }

                ans[i] = nxt[i];
                a[nxt[i]].erase(a[nxt[i]].begin());
                if (!a[nxt[i]].empty())
                {
                    nxt[*a[nxt[i]].begin()] = nxt[i];
                }

                if (mk[nxt[i]])
                {
                    valid = false;
                    break;
                }
                mk[nxt[i]] = true;
            }
            else
            {
                if (nxt[i] == -1 || ans[i % n] != nxt[i])
                {
                    valid = false;
                    break;
                }

                a[nxt[i]].erase(a[nxt[i]].begin());
                if (!a[nxt[i]].empty())
                {
                    nxt[*a[nxt[i]].begin()] = nxt[i];
                }
            }
        }

        if (valid)
        {
            for (int i = 0; i < n; i++)
            {
                cout << ans[i] + 1 << ' ';
            }
            cout << '\n';
        }
        else
        {
            cout << -1 << '\n';
        }
    }
}

int main()
{
    fastread();
    solve();
}
