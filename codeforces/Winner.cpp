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

    ll n;
    in >> n;
    vector<pair<string, ll>> a(n);
    unordered_map<string, ll> a1;
    for (size_t i = 0; i < n; i++)
    {
        in >> a[i].first;
        in >> a[i].second;

        a1[a[i].first] += a[i].second;
    }
    ll max1 = LLONG_MIN;
    for (auto pair : a1)
    {

        max1 = max(max1, pair.second);
    }
    unordered_map<string, ll> ans;
    for (size_t i = 0; i < n; i++)
    {
        string name = a[i].first;
        ll score = a[i].second;

        ans[name] += score;

        if (a1[name] == max1 && ans[name] >= max1)
        {
            out << name;
            return;
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
