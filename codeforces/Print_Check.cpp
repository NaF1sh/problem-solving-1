#include <bits/stdc++.h>
using namespace std;

// === CONFIGURATION ===
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

void solve(istream &in, ostream &out)
{
    ll n, m, k;
    in >> n >> m >> k;

    vector<pair<ll, ll>> row(n, {-1, 0});
    vector<pair<ll, ll>> col(m, {-1, 0});

    for (ll t = 0; t < k; t++)
    {
        ll type, index, color;
        in >> type >> index >> color;
        index--;

        if (type == 1)
            row[index] = {t, color};
        else
            col[index] = {t, color};
    }

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (row[i].first > col[j].first)
                out << row[i].second << " ";
            else
                out << col[j].second << " ";
        }
        out << "\n";
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
    solve(in, out);
    return 0;
}
