#include <bits/stdc++.h>
using namespace std;

#define ll long long int

struct vertex
{
    ll node;
    bool cat;
};

vector<vector<vertex>> adj;
vector<bool> hasCat;
ll n, m;
ll result = 0;
void dfs(ll node, ll parent, ll cats)
{

    if (hasCat[node] == 1)
    {
        cats++;
    }
    else
    {
        cats = 0;
    }
    if (cats > m)
        return;
    bool leaf = true;
    for (auto a : adj[node])
    {
        if (a.node != parent)
        {
            leaf = false;
            dfs(a.node, node, cats);
        }
    }

    if (leaf)
        result++;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    hasCat.resize(n);
    adj.assign(n, vector<vertex>());

    for (ll i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        hasCat[i] = (c == 1);
    }

    for (ll i = 0; i < n - 1; i++)
    {
        ll u, v;
        cin >> u >> v;
        u--;
        v--;

        adj[u].push_back({v, hasCat[v]});
        adj[v].push_back({u, hasCat[u]});
    }

    result = 0;
    dfs(0, -1, 0); // Start from node 0

    cout << result << "\n";

    return 0;
}
