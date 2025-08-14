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
    int n;
    in >> n;
    vector<int> pattern(n);
    for (int i = 0; i < n; i++)
        in >> pattern[i];

    set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'y'};

    string dummy;
    getline(in, dummy);

    bool ok = true;
    for (int line = 0; line < n; line++)
    {
        string text;
        getline(in, text);

        int count = 0;
        for (char c : text)
        {
            if (vowels.count(c))
                count++;
        }

        if (count != pattern[line])
            ok = false;
    }

    out << (ok ? "YES" : "NO");
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
