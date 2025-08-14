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
unordered_map<string, vector<string>> a;
ll maxdepth = 0;

string to_lower(string s)
{
    for (auto &c : s)
        c = tolower(c);
    return s;
}

void dfs(string u, ll depth)
{
    maxdepth = max(maxdepth, depth);

    for (auto &child : a[u])
    {
        dfs(child, depth + 1);
    }
}

void solve(istream &in, ostream &out)
{
    ll n;
    in >> n;

    for (ll i = 0; i < n; ++i)
    {
        string name1, temp, name2;
        in >> name1 >> temp >> name2;

        name1 = to_lower(name1);
        name2 = to_lower(name2);

        a[name2].push_back(name1);
    }

    dfs("polycarp", 1);

    out << maxdepth << '\n';
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
