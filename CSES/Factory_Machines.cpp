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

    ll n, t;
    cin >> n >> t;

    vector<ll> a(n);

    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll low = 1;
    ll high = *max_element(a.begin(), a.end()) * t;
    ll ans = high;

    while (low <= high)
    {

        ll mid = (low + high) / 2;

        ll total = 0;

        for (size_t i = 0; i < n; i++)
        {
            total += mid / a[i];

            if (total >= t)
            {
                break;
            }
        }
        if (total >= t)
        {
            high = mid - 1;
            ans = mid;
        }

        else
        {
            low = mid + 1;
        }
    }

    cout << ans;
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
