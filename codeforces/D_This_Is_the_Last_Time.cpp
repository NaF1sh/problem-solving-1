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
struct Casino
{
    ll l, r, real;
};

void solve(istream &in, ostream &out)
{
    ll n, k;
    in >> n >> k;
    vector<Casino> a(n);
    for (ll i = 0; i < n; i++)
    {
        in >> a[i].l >> a[i].r >> a[i].real;
    }

    sort(a.begin(), a.end(), [](const Casino &x, const Casino &y)
         { return x.l < y.l; });

    priority_queue<ll> pq;
    ll i = 0;
    ll coins = k;

    while (true)
    {
        while (i < n && a[i].l <= coins)
        {
            if (coins <= a[i].r)
            {
                pq.push(a[i].real);
            }
            i++;
        }

        if (pq.empty())
            break;

        ll best = pq.top();
        pq.pop();

        if (best <= coins)
            break;

        coins = best;
    }

    out << coins << "\n";
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
