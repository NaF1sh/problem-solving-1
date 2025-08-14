#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> cost(n + 1, vector<int>(n + 1, 0)); // cost[u][v] = cost to reverse u -> v
    int total_cost = 0;

    for (int i = 0; i < n; ++i)
    {
        int u, v, c;
        cin >> u >> v >> c;
        cost[u][v] = c;
        total_cost += c; // total cost of current direction setup
    }

    int path_cost = 0;
    for (int i = 1; i <= n; ++i)
    {
        int u = i;
        int v = (i % n) + 1; // next in circle
        if (cost[u][v] == 0 && cost[v][u] != 0)
        {
            path_cost += cost[v][u]; // we need to reverse this edge
        }
    }

    int answer = min(path_cost, total_cost - path_cost);
    cout << answer << endl;

    return 0;
}
