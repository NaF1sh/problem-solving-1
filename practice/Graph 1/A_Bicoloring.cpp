#include <bits/stdc++.h>
using namespace std;

// Function to color the graph using DFS
bool colorGraph(vector<vector<int>> &graph, vector<int> &colors, int node, int color)
{
    colors[node] = color; // Give this node a color (1 or 2)

    // Check all neighbors of the current node
    for (int neighbor : graph[node])
    {
        if (colors[neighbor] == 0)
        { // Neighbor hasn't been colored yet
            // Choose the opposite color for the neighbor
            int nextColor;
            if (color == 1)
            {
                nextColor = 2; // If current node is color 1, neighbor gets color 2
            }
            else
            {
                nextColor = 1; // If current node is color 2, neighbor gets color 1
            }
            // Recursively try to color the neighbor and its connections
            bool success = colorGraph(graph, colors, neighbor, nextColor);
            if (!success)
            {
                return false; // If coloring fails, stop and return false
            }
        }
        else if (colors[neighbor] == color)
        {                 // Neighbor has same color as node
            return false; // Conflict: connected nodes can't have the same color
        }
    }
    return true; // No problems found, coloring is okay
}

int main()
{
    while (true)
    {
        int n; // Number of nodes
        cin >> n;
        if (n == 0)
            break; // Stop if n is 0

        int l; // Number of edges
        cin >> l;

        // Create graph: graph[i] lists all nodes connected to node i
        vector<vector<int>> graph(n);
        for (int i = 0; i < l; i++)
        {
            int a, b;
            cin >> a >> b;
            graph[a].push_back(b); // Add edge from a to b
            graph[b].push_back(a); // Add edge from b to a (undirected)
        }

        // Array to store colors: 0 means uncolored, 1 and 2 are the two colors
        vector<int> colors(n, 0);

        // Start coloring from node 0 with color 1
        bool canColor = colorGraph(graph, colors, 0, 1);

        // Print result
        if (canColor)
        {
            cout << "BICOLORABLE.\n";
        }
        else
        {
            cout << "NOT BICOLORABLE.\n";
        }
    }
    return 0;
}