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

vector<bool> visit1;
vector<vector<ll>> adj;
vector<pair<ll, ll>> ans;

void dfs(ll vertex)
{
    visit1[vertex] = true;

    for (auto next : adj[vertex])
    {
        if (!visit1[next])
        {
            dfs(next);
        }
    }
}

void solve(istream &in, ostream &out)
{
    ll n, m;
    in >> n >> m;

    visit1.assign(n + 1, false);
    adj.assign(n + 1, vector<ll>());

    vector<ll> ans;

    for (size_t i = 0; i < m; i++)
    {
        ll a, b;
        in >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (size_t i = 1; i <= n; i++)
    {
        if (!visit1[i])
        {
            ans.push_back(i);
            dfs(i);
        }
    }

    out << ans.size() - 1 << endl;

    for (size_t i = 1; i < ans.size(); i++)
    {
        cout << ans[0] << " " << ans[i] << endl;
    }
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
