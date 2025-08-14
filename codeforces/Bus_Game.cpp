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

    bool flag = true; 

    while (true)
    {
        if (flag)
        {
            
            if (n >= 2 && m >= 2)
            {
                n -= 2;
                m -= 2;
            }
            else if (n >= 1 && m >= 12)
            {
                n -= 1;
                m -= 12;
            }
            else if (m >= 22)
            {
                m -= 22;
            }
            else
            {
                out << "Hanako\n";
                return;
            }
        }
        else
        {
            
            if (m >= 22)
            {
                m -= 22;
            }
            else if (n >= 1 && m >= 12)
            {
                n -= 1;
                m -= 12;
            }
            else if (n >= 2 && m >= 2)
            {
                n -= 2;
                m -= 2;
            }
            else
            {
                out << "Ciel\n";
                return;
            }
        }
        flag = !flag;
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

    solve(in, out);

    return 0;
}