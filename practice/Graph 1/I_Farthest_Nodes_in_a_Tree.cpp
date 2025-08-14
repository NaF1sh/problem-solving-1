#include <bits/stdc++.h>
using namespace std;

// === CONFIGURATION ===
#define USE_FILE_IO false // Set to true to use input.txt/output.txt
// ======================

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define file_io()                       \
    ifstream fin("input.txt");          \
    ofstream fout("output.txt");        \
    if (!fin || !fout)                  \
    {                                   \
        cerr << "Error opening file\n"; \
        exit(1);                        \
    }                                   \
    istream &in = fin;                  \
    ostream &out = fout;

#define standard_io()  \
    istream &in = cin; \
    ostream &out = cout;

/////////////////////////////////////////////////////////////////////////////////////////

struct edge
{
    ll next;
    ll weight;
};

vector<vector<edge>> adj;
vector<bool> vis;
ll maxdistance;
ll maxnode;

void dfs(ll node, ll distance)
{
    vis[node] = true;

    if (distance > maxdistance)
    {
        maxdistance = distance;
        maxnode = node;
    }

    for (auto a : adj[node])
    {
        if (!vis[a.next])
        {
            dfs(a.next, distance + a.weight);
        }
    }
}

void solve(istream &in, ostream &out, int caseNum)
{
    ll n;
    in >> n;

    adj.assign(n, vector<edge>());
    for (size_t i = 0; i < n - 1; i++)
    {
        ll a, b, c;
        in >> a >> b >> c;

        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }

    vis.assign(n, false);
    maxdistance = -1;

    dfs(0, 0); // First DFS to find farthest node from node 0
    ll start = maxnode;

    vis.assign(n, false);
    maxdistance = -1;

    dfs(start, 0); // Second DFS to find the farthest distance

    out << "Case " << caseNum << ": " << maxdistance << "\n";
}

int main()
{
    fastread();

#if USE_FILE_IO
    file_io();
#else
    standard_io();
#endif

    ll t;
    in >> t;
    for (int caseNum = 1; caseNum <= t; ++caseNum)
    {
        solve(in, out, caseNum);
    }

    return 0;
}
