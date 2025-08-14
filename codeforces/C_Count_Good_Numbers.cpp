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
ll count_bad(ll x)
{
    ll count = 0;

    count += x / 2;
    count += x / 3;
    count += x / 5;
    count += x / 7;
    count -= x / 6;
    count -= x / 10;
    count -= x / 14;
    count -= x / 15;
    count -= x / 21;
    count -= x / 35;

    count += x / 30;
    count += x / 42;
    count += x / 70;
    count += x / 105;

    count -= x / 210;

    return count;
}

ll count_good(ll l, ll r)
{
    ll bad = count_bad(r) - count_bad(l - 1);
    ll total = r - l + 1;
    return total - bad;
}

void solve(istream &in, ostream &out)
{
    ll l, r;
    in >> l >> r;
    out << count_good(l, r) << '\n';
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
