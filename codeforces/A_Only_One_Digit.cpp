#include <bits/stdc++.h>
using namespace std;

#define USE_FILE_IO false

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
    int a;
    in >> a;
    for (int b = 0;; ++b)
    {
        set<char> c, d;
        for (char e : to_string(a))
            c.insert(e);
        for (char e : to_string(b))
            d.insert(e);

        bool found_common = false;
        for (char e : d)
        {
            if (c.count(e))
            {
                found_common = true;
                break;
            }
        }

        if (found_common)
        {
            out << b << '\n';
            break;
        }
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
        solve(in, out);
    }

    return 0;
}
