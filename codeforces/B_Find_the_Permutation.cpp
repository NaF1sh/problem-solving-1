#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<vector<int>> adj(n + 1); // adjacency list for the graph
    vector<int> inDegree(n + 1, 0); // to store in-degrees of each vertex

    // Read adjacency matrix and construct the graph
    for (int i = 1; i <= n; ++i)
    {
        string row;
        cin >> row;
        for (int j = 1; j <= n; ++j)
        {
            if (row[j - 1] == '1')
            {
                adj[i].push_back(j); // edge from i to j
                inDegree[j]++;
            }
        }
    }

    // Topological sort using a queue
    queue<int> q;
    for (int i = 1; i <= n; ++i)
    {
        if (inDegree[i] == 0)
        { // Add vertices with 0 in-degree to the queue
            q.push(i);
        }
    }

    vector<int> result(n + 1); // to store the permutation
    int label = n;             // Start assigning labels from n down to 1

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        result[u] = label--; // Assign the highest available label to the current vertex

        for (int v : adj[u])
        {
            inDegree[v]--;
            if (inDegree[v] == 0)
            {
                q.push(v);
            }
        }
    }

    // Print the result
    for (int i = 1; i <= n; ++i)
    {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
