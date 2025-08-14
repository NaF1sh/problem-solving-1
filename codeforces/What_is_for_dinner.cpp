#include <bits/stdc++.h>
using namespace std;

#define USE_FILE_IO false

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
    ll n, m, t;
    in >> n >> m >> t;

    vector<pair<ll, ll>> a(m + 1);
    vector<bool> row_seen(m + 1, false);

    for (size_t i = 0; i < n; i++)
    {
        ll a1, a2;
        in >> a1 >> a2;
        a[a1].first = a1;

        if (!row_seen[a1])
        {
            a[a1].second = a2;
            row_seen[a1] = true;
        }
        else
            a[a1].second = min(a[a1].second, a2);
    }

    ll count = 0;
    for (int i = 1; i <= m; i++)
    {
        count += a[i].second;
    }

    out << min(count, t) << '\n';
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