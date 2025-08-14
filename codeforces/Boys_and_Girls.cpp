#include <bits/stdc++.h>
using namespace std;

// === CONFIGURATION ===
#define USE_FILE_IO true // Set to true to use input.txt/output.txt
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

void solve(istream &in, ostream &out)
{
    ll n, m;
    in >> n >> m;

    if (n == m)
    {
        while (n--)
        {
            out << "BG";
        }
        out << endl;
    }
    else if (n > m)
    {
        ll j = m;
        while (m--)
        {
            out << "BG";
        }
        ll i = (n - j);
        while (i--)
        {
            out << "B";
        }
        out << endl;
    }
    else // n < m
    {
        ll orig_n = n;
        while (n--)
        {
            out << "GB";
        }
        ll i = (m - orig_n);
        while (i--)
        {
            out << "G";
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
