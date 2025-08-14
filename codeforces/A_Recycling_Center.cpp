#include <bits/stdc++.h>
using namespace std;

// === CONFIGURATION ===
#define USE_FILE_IO false // Set to true to use input.txt/output.txt
// ======================

#define ll long long
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

bool canDestroyFree(int k, ll limit, vector<ll> a)
{
    if (k == 0)
        return true;
    if (k > (int)a.size())
        return false;
    for (int i = 0; i < k; ++i)
    {
        ll need = a[k - 1 - i] << i;
        if (need > limit)
            return false;
    }
    return true;
}

void solve(istream &in, ostream &out)
{
    int n;
    ll c;
    in >> n >> c;

    vector<ll> a(n);
    for (size_t i = 0; i < n; i++)
    {
        in >> a[i];
    }

    sort(a.begin(), a.end());

    int low = 0, high = n, freeBags = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (canDestroyFree(mid, c, a))
        {
            freeBags = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    out << n - freeBags << endl;
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