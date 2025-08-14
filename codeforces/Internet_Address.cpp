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
    cin >> a;
    bool flag = true;
    ll start = 0;
    if (a[0] == 'f' && a[1] == 't' && a[2] == 'p')
    {

        cout << "ftp://";
        start = 3;
    }
    else
    {
        cout << "http://";
        start = 4;
    }
    for (size_t i = start; i < a.size(); i++)
    {

        if (i != start && a[i] == 'r' && a[i + 1] == 'u' && flag)
        {
            if (i + 1 == a.size() - 1)
            {
                cout << ".ru";
            }
            else
            {
                cout << ".ru/";
            }

            i++;
            flag = false;
        }
        else
        {
            cout << a[i];
        }
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
