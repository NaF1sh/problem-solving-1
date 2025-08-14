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
    ll n, x, y, d;
    in >> n >> x >> y >> d;

    vector<ll> ans;

    if (abs(x - y) % d == 0)
    {
        ans.push_back(abs(x - y) / d);
    }
    if ((y - 1) % d == 0)
    {

        ll presses_to_one = (x - 1 + d - 1) / d;

        ll presses_from_one = (y - 1) / d;

        ans.push_back(presses_to_one + presses_from_one);
    }
    if ((n - y) % d == 0)
    {
        ll presses_to_n = (n - x + d - 1) / d;

        ll presses_from_n = (n - y) / d;

        ans.push_back(presses_from_n + presses_to_n);
    }
    if (ans.size() == 0)
    {
        out << "-1" << endl;
    }
    else
        cout << *min_element(ans.begin(), ans.end()) << endl;
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
