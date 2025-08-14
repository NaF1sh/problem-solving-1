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

    multiset<ll> s_remainders;
    multiset<ll> t_remainders;
    for (ll i = 0; i < n; ++i)
    {
        ll s_val;
        in >> s_val;
        ll r = s_val % k;

        s_remainders.insert(min(r, k - r));
    }

    for (ll i = 0; i < n; ++i)
    {
        ll t_val;
        in >> t_val;
        ll r = t_val % k;
        t_remainders.insert(min(r, k - r));
    }

    if (s_remainders == t_remainders)
    {
        out << "YES\n";
    }
    else
    {
        out << "NO\n";
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
