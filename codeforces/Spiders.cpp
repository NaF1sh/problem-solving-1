#include <bits/stdc++.h>
using namespace std;

// === CONFIGURATION ===
#define USE_FILE_IO true // Set to true to use input.txt/output.txt
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
int maxDepth = 0;
ll maxnode = 0;
void dfs(ll u, ll parent, ll depth)
{
    if (depth > maxDepth)
    {
        maxDepth = depth;
        maxnode = u;
    }

    for (auto child : a[u])
    {
        if (child != parent)
            dfs(child, u, depth + 1);
    }
}
void solve(istream &in, ostream &out)
{
    ll n_spiders;
    in >> n_spiders;

    ll total = 0;
    for (ll i = 0; i < n_spiders; ++i)
    {
        ll ni;
        in >> ni;

        a.assign(ni + 1, {});
        for (ll e = 0; e < ni - 1; ++e)
        {
            ll u, v;
            in >> u >> v;
            a[u].push_back(v);
            a[v].push_back(u);
        }

        maxDepth = 0;
        maxnode = 0;
        dfs(1, -1, 0);
        ll start = maxnode;

        // second DFS
        maxDepth = 0;
        maxnode = 0;
        dfs(start, -1, 0);
        total += maxDepth;
    }
    out << total << '\n';
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
