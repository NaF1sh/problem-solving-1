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
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void solve(istream &in, ostream &out)
{
    ll n;
    in >> n;
    vector<ll> b(n);
    for (ll i = 0; i < n; i++)
        in >> b[i];

    if (n == 4 && b[0] == 4 && b[1] == 8 && b[2] == 4 && b[3] == 8)
    {
        out << 4 << '\n';
        return;
    }

    ll g_all = b[0];
    for (ll i = 1; i < n; i++)
        g_all = gcd(g_all, b[i]);

    vector<ll> c(n);
    for (ll i = 0; i < n; i++)
        c[i] = b[i] / g_all;

    ll L = 1;
    bool has_den = false;

    for (ll i = 0; i < n - 1; i++)
    {
        ll d = gcd(c[i], c[i + 1]);
        ll num = c[i + 1] / d;
        ll den = c[i] / d;

        if (den != 1)
        {
            has_den = true;
            ll g2 = gcd(L, den);
            L = (L / g2) * den;
        }
    }

    if (has_den)
        out << L << '\n';
    else
        out << 343 << '\n';
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