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
    ll n, m;
    in >> n >> m;
    map<ll, ll> a;
    for (ll i = 1; i <= m; i++)
    {
        a[i] = 0;
    }
    for (size_t i = 0; i < n; i++)
    {
        ll a1;
        in >> a1;
        a[a1]++;
    }
    ll count = 0;

    while (a[m] != n)
    {
        map<ll, ll> temp = a;
        for (auto &pair : temp)
        {
            if (pair.first != m && pair.second >= 1)
            {
                a[pair.first] -= 1;
                a[pair.first + 1] += 1;
            }
        }
        count++;
    }
    out << count << "\n";
}

int main()
{
    fastread();

#if USE_FILE_IO
    file_io();
#else
    standard_io();
#endif

    solve(in, out); // Solve the problem

    return 0;
}
