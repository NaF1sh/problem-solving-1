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
vector<vector<ll>> adj;
// ll count;
vector<ll> ans;
ll dfs(ll vertex)
{
    ll count = 1;
    for (auto next : adj[vertex])
    {
        count += dfs(next);
    }
    return ans[vertex] = count;
}
void solve(istream &in, ostream &out)
{
    ll n;
    cin >> n;

    adj.assign(n + 1, vector<ll>());
    ans.assign(n + 1, 0);

    for (size_t i = 1; i < n; i++)
    {
        ll a;
        cin >> a;

        adj[a].push_back(i + 1);
    }

    dfs(1);

    for (size_t i = 1; i <= n; i++)
    {
        cout << ans[i] - 1 << " ";
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
