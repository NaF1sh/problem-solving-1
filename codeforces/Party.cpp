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
vector<ll> roots;
ll dfs(ll root, ll depth)
{
    ll maxdepth = depth;

    for (auto child : a[root])
    {

        maxdepth = max(maxdepth, dfs(child, depth + 1));
    }
    return maxdepth;
}
void solve(istream &in, ostream &out)
{

    ll n;
    in >> n;

    a.assign(n, vector<ll>());
    for (size_t i = 0; i < n; i++)
    {
        ll p;
        cin >> p;
        if (p != -1)
        {
            a[p - 1].push_back(i);
        }
        else
        {
            roots.push_back(i);
        }
    }
    ll ans = 0;
    for (auto l : roots)
    {
        ans = max(ans, dfs(l, 1));
    }
    cout << ans;
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
