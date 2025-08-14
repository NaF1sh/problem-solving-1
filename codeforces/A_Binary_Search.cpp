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

    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);

    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (size_t i = 0; i < k; i++)
    {
        ll q;
        in >> q;

        ll l = 0;
        ll r = n - 1;
        bool flag = false;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            if (a[mid] == q)
            {
                flag = true;
                break;
            }
            else if (a[mid] < q)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (flag)
        {
            out << "YES" << endl;
        }
        else
        {
            out << "NO" << endl;
        }
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
