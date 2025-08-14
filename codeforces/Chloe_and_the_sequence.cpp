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
ll find_number_at_index(ll n, ll m)
{

    if (n == 1)
    {
        return 1;
    }

    ll mid_pos = 1LL << (n - 1);

    if (m == mid_pos)
    {

        return n;
    }
    else if (m < mid_pos)
    {

        return find_number_at_index(n - 1, m);
    }
    else
    {

        return find_number_at_index(n - 1, m - mid_pos);
    }
}

void solve(istream &in, ostream &out)
{
    ll n, m;
    in >> n >> m;

    out << find_number_at_index(n, m)
        << endl;
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
