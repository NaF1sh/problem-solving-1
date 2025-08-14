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
#define GCD(a, b) ((b) == 0 ? (a) : GCD((b), (a) % (b)))
/////////////////////////////////////////////////////////////////////////////////////////
void solve(istream &in, ostream &out)
{
    ll n;
    in >> n;
    vector<pair<ll, ll>> a(2 * n);
    for (size_t i = 0; i < 2 * n; i++)
    {
        ll a1;
        in >> a1;
        a[i].first = a1;
        a[i].second = i + 1;
    }

    vector<pair<ll, ll>> ans;
    sort(a.begin(), a.end());
    for (size_t i = 0; i + 1 < 2 * n; i += 2)
    {
        if (a[i].first == a[i + 1].first)
        {
            ans.push_back(make_pair(a[i].second, a[i + 1].second));
        }
        else
        {
            out << -1;
            return;
        }
    }
    for (auto pair : ans)
    {
        out << pair.first << " " << pair.second << endl;
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
