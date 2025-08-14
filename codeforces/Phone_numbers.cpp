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
    map<string, ll> pizza;
    map<string, ll> taxi;
    map<string, ll> girls;
    vector<string> names; // minimal addition just for preserving input order

    ll n;
    in >> n;
    for (size_t i = 0; i < n; i++)
    {
        ll m;
        string name;
        in >> m >> name;
        names.push_back(name); // store names
        for (size_t j = 0; j < m; j++)
        {
            string number;
            in >> number;
            if (number[0] == number[1] && number[1] == number[3] && number[3] == number[4] && number[4] == number[6] && number[6] == number[7])
            {
                taxi[name]++;
            }
            else if (number[0] > number[1] && number[1] > number[3] && number[3] > number[4] && number[4] > number[6] && number[6] > number[7])
            {
                pizza[name]++;
            }
            else
            {
                girls[name]++;
            }
        }
    }

    ll maxpizza = 0, maxtaxi = 0, maxgirl = 0;
    for (auto name : names)
    {
        maxtaxi = max(maxtaxi, taxi[name]);
        maxpizza = max(maxpizza, pizza[name]);
        maxgirl = max(maxgirl, girls[name]);
    }

    bool first = true;
    out << "If you want to call a taxi, you should call: ";
    for (auto name : names)
    {
        if (taxi[name] == maxtaxi)
        {
            if (!first)
                out << ", ";
            out << name;
            first = false;
        }
    }
    out << "." << endl;

    first = true;
    out << "If you want to order a pizza, you should call: ";
    for (auto name : names)
    {
        if (pizza[name] == maxpizza)
        {
            if (!first)
                out << ", ";
            out << name;
            first = false;
        }
    }
    out << "." << endl;

    first = true;
    out << "If you want to go to a cafe with a wonderful girl, you should call: ";
    for (auto name : names)
    {
        if (girls[name] == maxgirl)
        {
            if (!first)
                out << ", ";
            out << name;
            first = false;
        }
    }
    out << "." << endl;
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