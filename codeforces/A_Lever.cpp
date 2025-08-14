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
    ll n;
    in >> n;

    vector<ll> a(n), b(n);

    for (size_t i = 0; i < n; i++)
        in >> a[i];
    for (size_t i = 0; i < n; i++)
        in >> b[i];

    ll dec = 0;
    for (int i = 0; i < n; i++)
        if (a[i] > b[i])
            dec += a[i] - b[i];

    ll iterations = max(1LL, dec + 1);
    out << iterations << "\n";
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
