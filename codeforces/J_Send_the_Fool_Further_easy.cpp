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
vector<pair<ll, ll>> adj[105];
ll maxcost = 0;
void dfs(ll node, ll parent, ll costnow)
{
    maxcost = max(costnow, maxcost);
    for (auto &pair : adj[node])
    {

        ll next = pair.first;
        ll cost = pair.second;

        if (next != parent)
        {

            dfs(next, node, cost + costnow);
        }
    }
}
void solve(istream &in, ostream &out)
{

    ll n;
    cin >> n;

    for (size_t i = 0; i < n - 1; i++)
    {
        ll u, v, c;
        cin >> u >> v >> c;
        adj[u].emplace_back(v, c);
        adj[v].emplace_back(u, c);
    }

    dfs(0, -1, 0);

    cout << maxcost;
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
