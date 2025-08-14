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

    string a;
    cin >> a;

    ll time = stoll(a.substr(0, 2));
    if (time == 00)
    {

        cout << 12 << a.substr(2) << " AM";
    }
    else if (time < 12)
    {

        cout << a << " AM";
    }
    else if (time >= 12)
    {

        time = time - 12;
        if (time == 00)
        {
            cout << 12;
        }
        else if (time < 10)
        {
            cout << 0 << time;
        }
        else
        {
            cout << time;
        }
        cout << a.substr(2) << " PM";
    }
    cout << endl;
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
