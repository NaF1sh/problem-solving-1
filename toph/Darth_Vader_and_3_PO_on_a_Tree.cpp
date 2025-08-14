#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> adj(n + 1);

    // Step 1: Build the tree
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Step 2: Find leaf nodes and initialize their distances
    vector<int> dist(n + 1, -1);
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        if (adj[i].size() == 1)
        { // leaf node
            dist[i] = 0;
            q.push(i);
        }
    }

    // Step 3: Multi-source BFS from leaves to get min distance to a leaf
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : adj[u])
        {
            if (dist[v] == -1)
            {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }

    // Step 4: Gather nodes and sort them by coin value (distance to nearest leaf)
    vector<int> coins;
    for (int i = 1; i <= n; i++)
    {
        coins.push_back(dist[i]);
    }
    sort(coins.rbegin(), coins.rend()); // Descending

    // Step 5: Simulate game
    long long p1 = 0, p2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            p1 += coins[i]; // 3PO
        else
            p2 += coins[i]; // Darth Vader
    }

    if (p1 < p2)
        cout << "3PO\n";
    else if (p1 > p2)
        cout << "Darth Vader\n";
    else
        cout << "Draw\n";

    return 0;
}
