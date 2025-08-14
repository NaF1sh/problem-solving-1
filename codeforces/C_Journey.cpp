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
double dfs(ll u)
{
    vis[u] = true;

    ll node_count = 0;
    double total = 0;
    for (auto child : a[u])
    {
        if (vis[child] != true)
        {
            total += 1 + dfs(child);
            node_count++;
        }
    }
    if (node_count == 0)
        return 0.00;

    return total / node_count;
}
void solve(istream &in, ostream &out)
{
    ll n;

    in >> n;
    a.assign(n + 1, vector<ll>());
    vis.assign(n + 1, false);

    for (size_t i = 0; i < n - 1; i++)
    {

        ll a1, a2;
        in >> a1 >> a2;
        a[a1].push_back(a2);
        a[a2].push_back(a1);
    }
    out << fixed << setprecision(15) << dfs(1);
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
