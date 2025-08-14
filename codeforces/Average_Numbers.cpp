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

    ll sum = 0;

    ll n;
    in >> n;

    vector<ll> a(n);
    for (size_t i = 0; i < n; i++)
    {
        in >> a[i];
        sum += a[i];
    }
    vector<ll> ans;
    for (size_t i = 0; i < n; i++)
    {
        ll sum1 = sum;

        sum1 -= a[i];
        if (sum1 / (n - 1) == a[i])
        {
            ans.push_back(i + 1);
        }
    }
    cout << ans.size() << endl;
    for (auto p : ans)
    {
        out << p << " ";
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

    solve(in, out); // Solve each test case

    return 0;
}
