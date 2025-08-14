#include <bits/stdc++.h>
using namespace std;

// === CONFIGURATION ===
#define USE_FILE_IO true // Set to true to use input.txt/output.txt
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

void solve(istream &in, ostream &out)
{
    ll m, k;
    ifstream fin("input.txt");   // Open input file
    ofstream fout("output.txt"); // Open output file

    fin >> m >> k;

    multimap<ll, ll> a;

    for (size_t i = 0; i < m; i++)
    {
        ll a1;
        fin >> a1;
        a.insert({a1, 0});
    }

    ll count = 0;

    while (!a.empty())
    {
        auto it = a.begin();

        if (it->first >= k && it->second != 3)
        {
            ll new_key = it->first - k;
            ll new_value = it->second + 1;

            a.erase(it);
            a.insert({new_key, new_value});
        }
        else
        {
            count += it->first;
            a.erase(it);
        }
    }

    fout << count << "\n";
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
