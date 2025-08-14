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
void solve(istream &in, ostream &out)
{
    ll f, x, y;
    in >> f >> x >> y;

    ll count = 0;
    ll blend = 0;

    ll full_iterations = f / y;
    count += full_iterations;
    blend += full_iterations * y;
    f = f % y;

    if (f > 0)
    {
        blend += f;
        f = 0;
        count++;
    }

    blend -= min(x, blend) * count;

    if (blend > 0)
    {
        count += (blend + x - 1) / x;
    }

    out << count << endl;
}

int main()
{
    fastread();

#if USE_FILE_IO
    file_io();
#else
    standard_io();
#endif

    cases(t)
    {
        solve(in, out); // Solve each test case
    }

    return 0;
}