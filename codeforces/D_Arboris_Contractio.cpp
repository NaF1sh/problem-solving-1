#include <bits/stdc++.h>
using namespace std;
const int N = 200 * 1000 + 3;
vector<int> g[N];
int diameter_length;
vector<int> diameter_path;
int dep[N], par[N];
bool on_diameter[N];
void dfs(int v, int p = -1)
{
    par[v] = p;
    if (p == -1)
        dep[v] = 0;
    for (int to : g[v])
    {
        if (to == p)
            continue;
        dep[to] = dep[v] + 1;
        dfs(to, v);
    }
}
int max_depth[N];
void dfs2(int v, int p = -1)
{
    max_depth[v] = 0;
    for (int to : g[v])
    {
        if (to == p || on_diameter[to])
            continue;
        dfs2(to, v);
        max_depth[v] = max(max_depth[v], max_depth[to] + 1);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            g[i].clear();
            dep[i] = 0;
            par[i] = -1;
            on_diameter[i] = false;
            max_depth[i] = 0;
        }
        for (int i = 0; i < n - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            u--;
            v--;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        dfs(0);
        int u = max_element(dep, dep + n) - dep;
        dfs(u);
        int v = max_element(dep, dep + n) - dep;
        diameter_path.clear();
        while (v != u)
        {
            diameter_path.push_back(v);
            v = par[v];
        }
        diameter_path.push_back(u);
        reverse(diameter_path.begin(), diameter_path.end());
        diameter_length = diameter_path.size() - 1;
        for (int node : diameter_path)
        {
            on_diameter[node] = true;
        }
        for (int node : diameter_path)
        {
            dfs2(node);
        }
        int operations = 0;
        if (diameter_length > 2)
        {
            operations++;
        }
        for (int i = 1; i < (int)diameter_path.size() - 1; i++)
        {
            if (max_depth[diameter_path[i]] >= 2)
            {
                operations++;
            }
        }
        if (max_depth[diameter_path[0]] >= 2 || max_depth[diameter_path.back()] >= 2)
        {
            operations++;
        }
        cout << operations << '\n';
    }
    return 0;
}