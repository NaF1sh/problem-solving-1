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
    ll n;
    in >> n;
    multimap<ll, ll> a;
    for (size_t i = 0; i < n; i++)
    {
        ll a1;
        in >> a1;

        a.insert({a1, i});
    }
    multimap<ll, ll> b;
    for (size_t i = 0; i < n; i++)
    {
        ll b1;
        in >> b1;

        b.insert({b1, i});
    }
    multimap<ll, ll> c;
    for (size_t i = 0; i < n; i++)
    {
        ll c1;
        in >> c1;

        c.insert({c1, i});
    }

    ll maxtotal = LLONG_MIN;
    ll limit = 50;

    ll countA = 0;
    for (auto ita = a.rbegin(); ita != a.rend() && countA < limit; ++ita, ++countA)
    {
        ll countB = 0;
        for (auto itb = b.rbegin(); itb != b.rend() && countB < limit; ++itb, ++countB)
        {
            ll countC = 0;
            for (auto itc = c.rbegin(); itc != c.rend() && countC < limit; ++itc, ++countC)
            {
                ll idxA = ita->second;
                ll idxB = itb->second;
                ll idxC = itc->second;

                if (idxA != idxB && idxA != idxC && idxB != idxC)
                {
                    ll total = ita->first + itb->first + itc->first;
                    maxtotal = max(maxtotal, total);
                }
            }
        }
    }

    out << maxtotal << '\n';
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
