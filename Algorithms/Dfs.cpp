#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 5; // Adjust as needed

vector<ll> adj[N];
bool visited[N];

void Dfs(ll s)
{
    if (visited[s])
        return;

    visited[s] = true;
    cout << s << " "; // Print node as visited (optional)
    for (auto u : adj[s])
    {
        Dfs(u);
    }
}

int main()
{
    ll n, m;
    cin >> n >> m; // n = number of nodes, m = number of edges

    for (ll i = 0; i < m; ++i)
    {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // Remove this line for directed graph
    }

    ll start;
    cin >> start; // Starting node for DFS
    Dfs(start);

    return 0;
}