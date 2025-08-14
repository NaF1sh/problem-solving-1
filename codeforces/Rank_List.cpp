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
bool custom(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    if (a.first == b.first)
    {
        return a.second < b.second;
    }
    return a.first > b.first;
}

void solve(istream &in, ostream &out)
{
    ll m, k;
    in >> m >> k;

    vector<pair<ll, ll>> a(m);

    for (size_t i = 0; i < m; i++)
    {
        in >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), custom);
    // for (size_t i = 0; i < m; i++)
    // {
    //     out << a[i].first << " " << a[i].second << "\n";
    // }
    ll count = 0;
    pair<ll, ll> pos = a[k - 1];

    for (auto teams : a)
    {
        if (pos == teams)
            count++;
    }
    cout << count;
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
