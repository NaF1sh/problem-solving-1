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
    string s;
    in >> s;

    int count_l = 0, count_r = 0;
    for (char c : s)
    {
        if (c == '(')
            count_l++;
        else if (c == ')')
            count_r++;
    }

    int k = s.size() - count_l - count_r;

    if (k % 2 != 0)
    {
        out << "NO\n";
        return;
    }

    int current_min = 0, current_max = 0;
    for (char c : s)
    {
        if (c == '(')
        {
            current_min++;
            current_max++;
        }
        else if (c == ')')
        {
            current_min--;
            current_max--;
        }
        else
        {
            current_min--;
            current_max++;
        }

        // Check if max is negative
        if (current_max < 0)
        {
            out << "NO\n";
            return;
        }

        // Adjust current_min to be at least 0
        current_min = max(current_min, 0);

        // Check if current_min exceeds current_max
        if (current_min > current_max)
        {
            out << "NO\n";
            return;
        }
    }

    // Check if 0 is in the final range
    if (current_min <= 0 && 0 <= current_max)
    {
        out << "YES\n";
    }
    else
    {
        out << "NO\n";
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