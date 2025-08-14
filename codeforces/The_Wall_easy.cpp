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

vector<bool> vis;
set<ll> mapping;

void count_segment(ll i)
{
    vis[i] = true;

    if (mapping.count(i + 1) && !vis[i + 1])
    {
        count_segment(i + 1);
    }
}
void solve(istream &in, ostream &out)
{
    ll r, c;
    in >> r >> c;

    vector<vector<char>> a;
    a.resize(r, vector<char>(c));
    vis.assign(c, false);

    for (size_t i = 0; i < r; i++)
    {
        for (size_t j = 0; j < c; j++)
        {
            in >> a[i][j];
        }
    }

    for (ll j = 0; j < c; j++)
    {
        for (ll i = 0; i < r; i++)
        {
            if (a[i][j] == 'B')
            {
                mapping.insert(j);
                break;
            }
        }
    }

    ll count = 0;
    for (size_t i = 0; i < c; i++)
    {
        if (!vis[i] && mapping.count(i))
        {
            count_segment(i);
            count++;
        }
    }
    out << count;
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
