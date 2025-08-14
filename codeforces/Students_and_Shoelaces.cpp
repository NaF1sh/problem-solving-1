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
    ll n, m;
    in >> n >> m;

    vector<set<ll>> a(n + 1);

    for (ll i = 0; i < m; i++)
    {
        ll a1, a2;
        in >> a1 >> a2;

        a[a1].insert(a2);
        a[a2].insert(a1);
    }

    ll count = 0;
    bool flag = true;
    while (true)
    {

        vector<ll> to_remove;

        for (size_t i = 1; i <= n; i++)
        {
            if (a[i].size() == 1)
            {
                to_remove.push_back(i);
            }
        }
        if (to_remove.empty())
        {
            break;
        }
        for (ll i : to_remove)
        {

            for (auto c : a[i])
            {
                a[c].erase(i);
            }
            a[i].clear();
        }
        count++;
    }

    out << count << '\n';
}

int main()
{
    fastread();

#if USE_FILE_IO
    file_io();
#else
    standard_io();
#endif

    solve(in, out);
    return 0;
}
