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
    ll n0, n1, n2;
    in >> n0 >> n1 >> n2;

    string s;

    // Add n2 + 1 ones if n2 > 0
    if (n2 > 0)
        s += string(n2 + 1, '1');

    // If n1 > 0, we need to alternate 0 and 1 n1 times
    if (n1 > 0)
    {
        if (s.empty())
        {
            // Start with 0 if s is empty
            s += '0';
        }

        char last = s.back();
        for (int i = 0; i < n1; i++)
        {
            last = (last == '1' ? '0' : '1');
            s += last;
        }
    }

    // Add n0 + 1 zeros if n0 > 0 and not already part of the string
    if (n0 > 0)
    {
        if (s.empty())
        {
            s += string(n0 + 1, '0');
        }
        else if (s.back() != '0')
        {
            s += string(n0, '0'); // already has one '0' from alternation
        }
        else
        {
            s += string(n0, '0'); // already ended in 0, so just add n0 more
        }
    }

    out << s << '\n';
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
