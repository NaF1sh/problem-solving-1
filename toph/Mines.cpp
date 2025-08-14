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
void solve(istream &in, ostream &out)
{
    ll r, c;
    in >> r >> c;

    vector<string> a(r);

    for (ll i = 0; i < r; ++i)
    {
        in >> a[i];
    }

    vector<string> result_grid = a;

    for (ll i = 0; i < r; i++)
    {
        for (ll j = 0; j < c; j++)
        {
            if (a[i][j] == '.')
            {
                ll count = 0;
                // Top-left
                if (i - 1 >= 0 && j - 1 >= 0 && a[i - 1][j - 1] == '*')
                    count++;

                // Top
                if (i - 1 >= 0 && a[i - 1][j] == '*')
                    count++;

                // Top-right
                if (i - 1 >= 0 && j + 1 < c && a[i - 1][j + 1] == '*')
                    count++;

                // Left
                if (j - 1 >= 0 && a[i][j - 1] == '*')
                    count++;

                // Right
                if (j + 1 < c && a[i][j + 1] == '*')
                    count++;

                // Bottom-left
                if (i + 1 < r && j - 1 >= 0 && a[i + 1][j - 1] == '*')
                    count++;

                // Bottom
                if (i + 1 < r && a[i + 1][j] == '*')
                    count++;

                // Bottom-right
                if (i + 1 < r && j + 1 < c && a[i + 1][j + 1] == '*')
                    count++;

                if (count > 0)

                    result_grid[i][j] = '0' + count;
            }
        }
    }

    for (ll i = 0; i < r; i++)
    {

        out << result_grid[i] << endl;
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