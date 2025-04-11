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

const int N = 2e5 + 5;

bool mark2[N], mark[N];
int cnt, cnt2, col[N];
vector<int> adj1[N], adj2[N];
map<pair<int, int>, int> mp;

void dfs2(int u)
{
    col[u] = cnt;
    mark2[u] = true;
    for (int v : adj2[u])
    {
        if (!mark2[v])
        {
            dfs2(v);
        }
    }
}

void dfs(int u)
{
    mark[u] = true;
    for (int v : adj1[u])
    {
        if (!mark[v] && mp[{u, v}] != 1)
        {
            dfs(v);
        }
    }
}

void solve()
{
    cases(t)
    {
        int n, m1, m2;
        cin >> n >> m1 >> m2;

        cnt = 0;
        cnt2 = 0;
        mp.clear();

        for (int i = 0; i < n; i++)
        {
            adj1[i].clear();
            adj2[i].clear();
            mark[i] = false;
            mark2[i] = false;
        }

        for (int i = 0; i < m1; i++)
        {
            int u, v;
            cin >> u >> v;
            u--, v--;
            adj1[u].push_back(v);
            adj1[v].push_back(u);
        }

        for (int i = 0; i < m2; i++)
        {
            int u, v;
            cin >> u >> v;
            u--, v--;
            adj2[u].push_back(v);
            adj2[v].push_back(u);
        }

        for (int i = 0; i < n; i++)
        {
            if (!mark2[i])
            {
                cnt++;
                dfs2(i);
            }
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int v : adj1[i])
            {
                if (col[i] != col[v])
                {
                    ans++;
                    mp[{i, v}] = 1;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (!mark[i])
            {
                cnt2++;
                dfs(i);
            }
        }

        cout << ans / 2 + (cnt2 - cnt) << endl;
    }
}

int main()
{
    fastread();
    solve();
}
