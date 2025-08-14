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

ll dfs(vector<vector<ll>> &groups, ll n)
{

    ll max_depth = 1;

    for (auto a : groups[n])
    {

        ll depth = dfs(groups, a);

        max_depth = max(max_depth, 1 + depth);
    }

    return max_depth;
}

void solve(istream &in, ostream &out)
{

    ll n;
    cin >> n;

    vector<vector<ll>> groups(n + 1);

    vector<ll> roots;
    ll count = 0;
    for (size_t i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        if (a != -1)
            groups[a].push_back(i + 1);
        else
        {
            roots.push_back(i + 1);
        }
    }

    ll maxgroup = 1;

    for (auto a : roots)
    {
        maxgroup = max(maxgroup, dfs(groups, a));
    }

    out << maxgroup << endl;
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
