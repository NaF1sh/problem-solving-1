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
long long gcd(long long a, long long b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve(istream &in, ostream &out)
{
    long long a, b, k;
    cin >> a >> b >> k;

    if (a == 0 && b == 0)
    {
        cout << 0 << "\n";
        return;
    }

    if (a <= k && b <= k)
    {
        cout << 1 << "\n";
        return;
    }

    if (a == 0 || b == 0)
    {
        if ((a == 0 && b <= k) || (b == 0 && a <= k))
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << 2 << "\n";
        }
        return;
    }

    long long g = gcd(a, b);
    long long min_dx = a / g;
    long long min_dy = b / g;

    if (min_dx <= k && min_dy <= k)
    {
        cout << 1 << "\n";
    }
    else
    {
        cout << 2 << "\n";
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
