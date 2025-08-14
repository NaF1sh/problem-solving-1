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
#define GCD(a, b) ((b) == 0 ? (a) : GCD((b), (a) % (b)))

void solve(istream &in, ostream &out)
{
    ll n;
    in >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        in >> a[i];

    ll d = a[1] - a[0];
    for (ll i = 2; i < n; i++)
        if (a[i] - a[i - 1] != d)
        {
            out << "NO\n";
            return;
        }

    ll denom = n + 1;
    ll y = a[0] - d;
    ll x = a[0] + d * n;

    if (y >= 0 && x >= 0 && y % denom == 0)
        out << "YES\n";
    else
        out << "NO\n";
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
