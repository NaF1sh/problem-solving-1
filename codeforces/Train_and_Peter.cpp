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
    string sq;
    in >> sq;

    string a, b;
    in >> a >> b;

    string rev = sq;
    reverse(rev.begin(), rev.end());

    bool fwd = false, bwd = false;

    size_t pos1 = sq.find(a);
    if (pos1 != string::npos)
    {
        size_t pos2 = sq.find(b, pos1 + a.size());
        if (pos2 != string::npos)
            fwd = true;
    }

    pos1 = rev.find(a);
    if (pos1 != string::npos)
    {
        size_t pos2 = rev.find(b, pos1 + a.size());
        if (pos2 != string::npos)
            bwd = true;
    }

    if (fwd && bwd)
        out << "both";
    else if (fwd)
        out << "forward";
    else if (bwd)
        out << "backward";
    else
        out << "fantasy";
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
