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
    ll a, b;
    in >> a >> b;
    if (a * b < n)
    {
        cout << -1;
        return;
    }
    set<ll> odd, even;
    for (ll i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
            odd.insert(i);
        else
            even.insert(i);
    }

    for (ll i = 0; i < a; i++)
    {
        for (ll j = 0; j < b; j++)
        {
            if ((i + j) % 2 == 0)
            {
                if (!odd.empty())
                {
                    out << *odd.begin() << " ";
                    odd.erase(odd.begin());
                }
                else
                    out << "0 ";
            }
            else
            {
                if (!even.empty())
                {
                    out << *even.begin() << " ";
                    even.erase(even.begin());
                }
                else
                    out << "0 ";
            }
        }
        out << "\n";
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

    solve(in, out); // Solve each test case

    return 0;
}
