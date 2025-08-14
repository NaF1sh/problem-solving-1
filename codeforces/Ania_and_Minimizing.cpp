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
/////////////////////////////////////////////////////////////////////////////////////////

void solve(istream &in, ostream &out)
{
    int n, k;
    in >> n >> k;
    string s;
    in >> s;

    if (n == 1)
    {
        if (k > 0)
        {
            out << '0';
        }
        else
        {
            out << s;
        }
        return;
    }

    if (k > 0 && s[0] != '1')
    {
        s[0] = '1';
        k--;
    }

    for (int i = 1; i < n && k > 0; i++)
    {
        if (s[i] != '0')
        {
            s[i] = '0';
            k--;
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

    solve(in, out); 

    return 0;
}
