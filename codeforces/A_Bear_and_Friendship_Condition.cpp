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

#define cases(t) \
    ll t;        \
    in >> t;     \
    while (t--)
#define GCD(a, b) ((b) == 0 ? (a) : GCD((b), (a) % (b)))
/////////////////////////////////////////////////////////////////////////////////////////
vector<vector<ll>> a;
vector<bool> vis;
void dfs(ll u, ll &edges, ll &node)
{
    vis[u] = true;
    node++;
    edges += a[u].size();
    for (auto child : a[u])
    {
        if (vis[child] != true)
        {
            dfs(child, edges, node);
        }
    }
}
void solve(istream &in, ostream &out)
{
    ll m, n;
    in >> m >> n;
    a.assign(m + 1, vector<ll>());
    vis.assign(m + 1, false);
    for (size_t i = 0; i < n; i++)
    {
        ll a1, b;
        in >> a1 >> b;

        a[a1].push_back(b);
        a[b].push_back(a1);
    }
    for (size_t i = 1; i <= m; i++)
    {
        if (vis[i] != true)
        {
            ll count_edge = 0;
            ll count_nodes = 0;
            dfs(i, count_edge, count_nodes);

            ll edge = count_edge / 2;
            ll nodes = (count_nodes * (count_nodes - 1)) / 2;

            if (edge != nodes)
            {
                out << "NO";
                return;
            }
        }
    }
    out << "YES";
}

int main()
{
    fastread();

#if USE_FILE_IO
    file_io();
#else
    standard_io();
#endif

    solve(in, out); // Solve each test case

    return 0;
}
