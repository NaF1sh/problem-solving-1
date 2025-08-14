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
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        in >> a[i];

    // Count frequency of values up to 100
    vector<ll> freq(101, 0);
    for (ll i = 0; i < n; i++)
        freq[a[i]]++;

    ll max_diff = 0;

    // Try every pair (min_val, med_val)
    for (ll min_val = 1; min_val <= 100; min_val++)
    {
        if (freq[min_val] == 0)
            continue;

        for (ll med_val = min_val; med_val <= 100; med_val++)
        {
            if (freq[med_val] == 0)
                continue;

            // Try to find a subarray where min = min_val and med = med_val
            multiset<ll> ms;
            for (ll l = 0, r = 0; r < n; r++)
            {
                ms.insert(a[r]);

                while (*ms.begin() < min_val)
                {
                    ms.erase(ms.find(a[l]));
                    l++;
                }

                ll len = r - l + 1;
                if (len == 0)
                    continue;

                auto it = ms.begin();
                advance(it, (len - 1) / 2); // 0-based median
                ll current_median = *it;

                if (*ms.begin() == min_val && current_median == med_val)
                {
                    max_diff = max(max_diff, med_val - min_val);
                }
            }
        }
    }

    out << max_diff << "\n";
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
        solve(in, out);
    }
    return 0;
}
