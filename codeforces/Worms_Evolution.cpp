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

/////////////////////////////////////////////////////////////////////////////////////////
void solve(istream &in, ostream &out)
{
    ll n;
    in >> n;

    vector<ll> a(n);
    for (ll i = 0; i < n; ++i)
    {
        in >> a[i];
    }

        for (ll i = 0; i < n; ++i)
    {
        for (ll j = 0; j < n; ++j)
        {
            for (ll k = 0; k < n; ++k)
            {
                if (i != j && i != k && j != k)
                {
                    if (a[i] == a[j] + a[k])
                    {
                        out << i + 1 << " " << j + 1 << " " << k + 1 << endl;
                        return;
                    }
                }
            }
        }
    }

    out << -1 << endl;
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
