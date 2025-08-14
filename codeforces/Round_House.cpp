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
    ll n, a, b;
    in >> n >> a >> b;

    vector<ll> a1(n);

    for (size_t i = 1; i < n; i++)
    {
        a1[i] = i;
    }

    ll count = 0;
    while (count != b)
    {
        if (b >= 0)
        {
            if (a == n)
            {
                a = 1;
            }
            else
            {
                a++;
            }
            count++;
        }
        else
        {
            if (a == 1)
            {
                a = n;
            }
            else
            {
                a--;
            }
            count--;
        }
    }

    out << a << '\n';
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
