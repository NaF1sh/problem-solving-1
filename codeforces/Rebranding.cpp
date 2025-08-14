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

    string name;
    in >> name;
    vector<char> a(26);

    for (size_t i = 0; i < 26; i++)
    {
        a[i] = 'a' + i;
    }

    while (m--)
    {
        char m1, m2;
        in >> m1 >> m2;

        for (int i = 0; i < 26; i++)
        {
            if (a[i] == m1)
                a[i] = m2;
            else if (a[i] == m2)
                a[i] = m1;
        }
    }

    for (char &c : name)
    {
        c = a[c - 'a'];
    }
    out << name;
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
