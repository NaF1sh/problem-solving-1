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
    ll a, b, c;
    cin >> a >> b >> c;

    ll x, y, z;
    cin >> x >> y >> z;

    ll need_blue = max(0LL, x - a);
    ll need_violet = max(0LL, y - b);
    ll need_orange = max(0LL, z - c);

    ll total_need = need_blue + need_violet + need_orange;

    ll extra_blue = max(0LL, (a - x) / 2);
    ll extra_violet = max(0LL, (b - y) / 2);
    ll extra_orange = max(0LL, (c - z) / 2);

    ll total_extra = extra_blue + extra_violet + extra_orange;

    if (total_extra >= total_need)
        cout << "Yes\n";
    else
        cout << "No\n";
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
