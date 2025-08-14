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

void solve(istream &in, ostream &out)
{

    ll n, m;
    cin >> n >> m;

    map<char, ll> a;

    for (size_t i = 0; i < n; i++)
    {
        char a1;
        cin >> a1;
        a[a1]++;
    }

    ll count = 0;
    if (a.size() < 7)
    {

        count += (7 - a.size()) * m;
    }
    for (auto &pair : a)
    {
        if (pair.second < m)
        {

            count += m - pair.second;
        }
    }
    cout << count << endl;
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
