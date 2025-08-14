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

#define all(v) (v).begin(), (v).end()
#define GCD(a, b) ((b) == 0 ? (a) : GCD((b), (a) % (b)))
#define vec vector
#define yes out << "YES\n"
#define no out << "NO\n"
#define pb push_back

/////////////////////////////////////////////////////////////////////////////////////////
void solve(istream &in, ostream &out)
{
    ll n, k;
    in >> n >> k;
    vec<ll> a(n);
    for (ll i = 0; i < n; i++)
        in >> a[i];

    ll c = a[k - 1];
    auto it = max_element(a.begin(), a.end());
    ll mx = *it;

    if (c == mx)
    {
        out << "YES\n";
        return;
    }

    vec<ll> b = a;
    sort(b.begin(), b.end());
    auto last = unique(b.begin(), b.end());
    b.erase(last, b.end());

    ll idx = lower_bound(all(b), c) - b.begin();
    bool flag = true;

    for (ll i = idx; i + 1 < b.size(); i++)
    {
        if (b[i + 1] - b[i] > c)
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        out << "YES" << endl;
    }
    else
    {
        out << "NO"
            << endl;
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

    cases(t)
    {
        solve(in, out); // Solve each test case
    }

    return 0;
}
