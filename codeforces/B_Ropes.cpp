#include <bits/stdc++.h>
using namespace std;

// === CONFIGURATION ===
#define USE_FILE_IO false
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

/////////////////////////////////////////////////////////////////////////////////////////
void solve(istream &in, ostream &out)
{
    ll n, k;
    in >> n >> k;

    vector<ll> a(n);
    for (size_t i = 0; i < n; i++)
        in >> a[i];

    double low = 0, high = *max_element(a.begin(), a.end());
    double ans = 0;

    while (high - low > 1e-7)
    {
        double mid = (low + high) / 2;
        ll total = 0;
        for (size_t i = 0; i < n; i++)
            total += (ll)(a[i] / mid);

        if (total < k)
            high = mid;
        else
        {
            ans = mid;
            low = mid;
        }
    }

    out << fixed << setprecision(10) << ans << "\n";
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
