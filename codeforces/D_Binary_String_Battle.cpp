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
    ll n, k;
    in >> n >> k;
    string s;
    in >> s;

    ll ones_count = 0;
    for (char c : s)
    {
        if (c == '1')
        {
            ones_count++;
        }
    }

    if (ones_count == 0)
    {
        out << "Alice\n";
        return;
    }

    if (ones_count <= k)
    {
        out << "Alice\n";
        return;
    }

    ll first_one = -1, last_one = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            if (first_one == -1)
            {
                first_one = i;
            }
            last_one = i;
        }
    }

    ll ans = last_one - first_one + 1;

    if (2 * k > ans)
    {
        out << "Alice\n";
    }
    else
    {
        out << "Bob\n";
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

    cases(t)
    {
        solve(in, out); // Solve each test case
    }

    return 0;
}
