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
    vector<ll> a(n);

    for (size_t i = 0; i < n; i++)
    {
        in >> a[i];
    }
    ll count = 0;
    while (true)
    {

        ll max1 = -1, maxi = -1;
        for (size_t i = 1; i < n; i++)
        {
            if (a[i] > max1)
            {
                max1 = a[i];
                maxi = i;
            }
        }
        if (a[0] > max1)
        {
            break;
        }
        a[maxi]--;
        a[0]++;
        count++;
    }
    out << count;
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
