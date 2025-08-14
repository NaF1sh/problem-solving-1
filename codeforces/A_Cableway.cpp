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
    ll r, g, b;
    cin >> r >> g >> b;

    ll ans = 0;

    while (r > 0 || g > 0 || b > 0)
    {

        if (r > 1)
        {

            r -= 2;
            ans++;
        }
        else if (r == 1)
        {
            r -= 1;
            ans++;
        }
        else if (r == 0)
        {
            ans++;
        }
        if (r == 0 && g == 0 && b == 0)
        {
            break;
        }
        if (g > 1)
        {

            g -= 2;
            ans++;
        }
        else if (g == 1)
        {
            g -= 1;
            ans++;
        }
        else if (g == 0)
        {
            ans++;
        }

        if (r == 0 && g == 0 && b == 0)
        {
            break;
        }
        if (b > 1)
        {

            b -= 2;
            ans++;
        }
        else if (b == 1)
        {
            b -= 1;
            ans++;
        }
        else if (b == 0)
        {
            ans++;
        }
    }

    cout << 30 + ans - 1;
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
