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

void solve(istream &in, ostream &out)
{
    string a;
    string b;

    cin >> a >> b;

    if (a == b)
    {
        cout << "YES" << "\n";
        return;
    }
    else if (a.size() != b.size())
    {
        cout << "NO" << "\n";
        return;
    }

    vector<ll> diff;

    for (size_t i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i])
        {
            diff.push_back(i);
        }
    }
    if (diff.size() == 2)
    {

        swap(a[diff[0]], a[diff[1]]);
        if (a == b)
        {
            cout << "YES" << "\n";
            return;
        }
    }
    cout << "NO" << "\n";
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
