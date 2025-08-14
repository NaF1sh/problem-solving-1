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
    ll moves = 0;
    ll alicep = 0;
    ll bobp = 0;
    ll as = 0;
    ll bs = n - 1;
    bool t = true;
    ll al = 0;
    ll bl = 0;
    for (size_t i = 0; i < n; i++)
    {
        in >> a[i];
    }

    while (bs >= as)
    {
        if (t)
        {
            t = false;

            if (a[as] > bl)
            {
                al = a[as];
                as++;
                alicep += al;
            }
            else
            {
                ll sum = 0;
                while (sum <= bl && as <= bs)
                {
                    sum += a[as];
                    as++;
                }
                al = sum;
                alicep += sum;
            }
        }
        else
        {
            t = true;

            if (a[bs] > al)
            {
                bl = a[bs];
                bs--;
                bobp += bl;
            }
            else
            {
                ll sum = 0;
                while (sum <= al && bs >= as)
                {
                    sum += a[bs];
                    bs--;
                }
                bl = sum;
                bobp += sum;
            }
        }
        moves++;
    }

    out << moves << " " << alicep << " " << bobp << "\n";
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
