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
    ll px, py, qx, qy;
    in >> px >> py >> qx >> qy;
    vector<ll> a(n);
    ll sum = 0;
    ll maxa = 0;
    for (int i = 0; i < n; i++)
    {
        in >> a[i];
        sum += a[i];
        if (a[i] > maxa)
            maxa = a[i];
    }

    ll dx = px - qx;
    ll dy = py - qy;
    ll d_sq = dx * dx + dy * dy;

    if (d_sq > (ll)(sum * sum))
    {
        out << "No" << endl;
    }
    else
    {
        if (2 * maxa <= sum)
        {
            out << "Yes" << endl;
        }
        else
        {
            ll t = 2 * maxa - sum;
            if (d_sq >= (ll)(t * t))
            {
                out << "Yes\n";
            }
            else
            {
                out << "No\n";
            }
        }
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
