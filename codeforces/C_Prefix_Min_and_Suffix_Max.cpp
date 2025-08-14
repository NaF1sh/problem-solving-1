#include <bits/stdc++.h>
using namespace std;

// === CONFIGURATION ===
#define USE_FILE_IO false
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
    int n;
    in >> n;
    vector<int> a(n), pm(n), sm(n);
    for (int i = 0; i < n; ++i)
        in >> a[i];

    pm[0] = a[0];
    for (int i = 1; i < n; ++i)
        pm[i] = min(pm[i - 1], a[i]);

    sm[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; --i)
        sm[i] = max(sm[i + 1], a[i]);

    unordered_set<int> good;
    for (int i = 0; i < n; ++i)
    {
        good.insert(pm[i]);
        good.insert(sm[i]);
    }

    for (int i = 0; i < n; ++i)
    {
        if (good.count(a[i]))
            out << '1';
        else
            out << '0';
    }
    out << '\n';
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
