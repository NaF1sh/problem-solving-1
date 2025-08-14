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

/////////////////////////////////////////////////////////////////////////////////////////
void solve(istream &in, ostream &out)
{
    ll n, m;
    in >> n >> m;

    // 1-based indexing
    vector<ll> cost(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        in >> cost[i];
    }

    vector<unordered_set<ll>> match(n + 1);

    for (ll i = 0; i < m; i++)
    {
        ll a, b;
        in >> a >> b;
        match[a].insert(b);
        match[b].insert(a);
    }

    bool found = false;
    ll min_cost = LLONG_MAX;

       for (ll i = 1; i <= n; i++)
    {
        for (auto v : match[i])
        {
            if (v <= i)
                continue;

            for (auto w : match[v])
            {
                if (w <= v || w == i)
                    continue;

                if (match[i].count(w))
                {
                    ll total_cost = cost[i] + cost[v] + cost[w];
                    min_cost = min(min_cost, total_cost);
                    found = true;
                }
            }
        }
    }

    if (found)
        out << min_cost << '\n';
    else
        out << -1 << '\n';
}

int main()
{
    fastread();

#if USE_FILE_IO
    file_io();
#else
    standard_io();
#endif

    solve(in, out);

    return 0;
}
