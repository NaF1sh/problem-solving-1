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
    vector<string> lines;
    string line;
    ll maxlength = 0;
    while (getline(cin, line))
    {
        if (line.empty())
            lines.push_back("-1");
        else
        {
            if (maxlength < line.size())
                maxlength = line.size();
            lines.push_back(line);
        }
    }

    for (size_t i = 0; i < maxlength + 2; i++)
        cout << '*';
    cout << '\n';

        static bool bringLeft = true;
    for (size_t i = 0; i < lines.size(); i++)
    {
        cout << "*";
        if (lines[i] == "-1")
        {
            cout << string(maxlength, ' ');
        }
        else
        {
            ll L = lines[i].size();
            ll diff = maxlength - L;
            ll left, right;
            if (diff % 2 == 0)
            {
                left = right = diff / 2;
            }
            else if (bringLeft)
            {
                left = diff / 2;
                right = diff - left;
                bringLeft = false;
            }
            else
            {
                right = diff / 2;
                left = diff - right;
                bringLeft = true;
            }
            cout << string(left, ' ') << lines[i] << string(right, ' ');
        }
        cout << "*\n";
    }

    for (size_t i = 0; i < maxlength + 2; i++)
        cout << '*';
    cout << '\n';
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
