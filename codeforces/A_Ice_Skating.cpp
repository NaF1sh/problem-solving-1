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
vector<pair<ll, ll>> a;
vector<bool> vis;
void dfs(ll u, ll n)
{
    vis[u] = true;

    for (size_t i = 0; i < n; i++)
    {
        if (vis[i] != true)
        {
            if (a[u].first == a[i].first || a[u].second == a[i].second)
            {
                dfs(i, n);
            }
        }
    }
}
void solve(istream &in, ostream &out)
{
    ll n;
    in >> n;
    a.assign(n, pair<ll, ll>());
    vis.assign(n, false);

    for (size_t i = 0; i < n; i++)
    {
        in >> a[i].first >> a[i].second;
    }
    ll count = 0;
    for (size_t i = 0; i < n; i++)
    {

        if (vis[i] != true)
        {
            count++;
            dfs(i, n);
        }
    }
    out << count - 1;
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
