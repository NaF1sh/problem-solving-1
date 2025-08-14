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
    string a;
    getline(in, a);

    ll n;
    in >> n;

    map<char, ll> a1;
    for (size_t i = 0; i < a.size(); i++)
    {
        a1[a[i]]++;
    }
    ll m = 0;
    string ans;
    for (auto pair : a1)
    {
        if (n != 0)
        {
            m++;
            n--;
            // n -= pair.second;
            for (size_t i = 0; i < pair.second; i++)
            {
                ans += pair.first;
            }
            if (n == 0)
            {
                break;
            }
        }
    }
    if (m > 0)
    {
        out << m << endl;
        out << ans << endl;
    }
    else
    {
        out << 0 << endl;
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
