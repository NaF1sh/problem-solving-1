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

bool dfs(ll u, ll parent, ll target)
{
    if (u == target)
        return true;

    for (auto child : a[u])
    {

        if (child != parent)
            if (dfs(child, u, target))
                return true;
    }
    return false;
}
void solve(istream &in, ostream &out)
{

    ll n, target;
    in >> n >> target;
    a.assign(n + 5, vector<ll>());

    for (size_t i = 0; i < n; i++)
    {
        ll a1;
        in >> a1;

        a[i + 1].push_back((i + 1) + a1);
    }
    if (dfs(1, -1, target))
    {
        out << "YES" << endl;
    }
    else
    {
        out << "NO" << endl;
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
