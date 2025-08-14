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
vector<vector<char>> a;
vector<ll> nr = {-1, 1, 0, 0};
vector<ll> nc = {0, 0, -1, 1};
ll r, c;
void dfs(ll r1, ll c1)
{
    for (size_t i = 0; i < 4; i++)
    {

        ll nr1 = nr[i] + r1;
        ll nc1 = nc[i] + c1;

        if (nr1 >= 0 && nr1 < r && nc1 >= 0 && nc1 < c && a[nr1][nc1] == '.')
        {
            if (a[r1][c1] == 'B')
            {
                a[nr1][nc1] = 'W';
            }
            else
            {
                a[nr1][nc1] = 'B';
            }
            dfs(nr1, nc1);
        }
    }
}
void solve(istream &in, ostream &out)
{

    in >> r >> c;
    a.assign(r, vector<char>(c));
    for (size_t i = 0; i < r; i++)
    {
        for (size_t i1 = 0; i1 < c; i1++)
        {
            in >> a[i][i1];
        }
    }

    for (size_t i = 0; i < r; i++)
    {
        for (size_t i1 = 0; i1 < c; i1++)
        {
            if (a[i][i1] == '.')
            {
                a[i][i1] = 'B';
                dfs(i, i1);
            }
        }
    }
    for (size_t i = 0; i < r; i++)
    {
        for (size_t i1 = 0; i1 < c; i1++)
        {
            out << a[i][i1];
        }
        out << endl;
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
