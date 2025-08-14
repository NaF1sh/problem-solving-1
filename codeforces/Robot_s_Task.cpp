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

    ll n;
    in >> n;

    vector<ll> a(n);

    ll count = 0;
    ll moves = 0;

    for (size_t i = 0; i < n; i++)
    {
        in >> a[i];
    }

    bool flag = true;

    while (true)
    {
        bool hacked_this_pass = false;

        if (flag)
        {
            for (ll i = 0; i < a.size(); i++)
            {

                if (a[i] <= count)
                {
                    count++;
                    a[i] = -1;
                    hacked_this_pass = true;
                }
            }

            if (hacked_this_pass)
            {
                moves++;
                flag = false;
            }
        }
        else
        {
            for (ll i = a.size() - 1; i >= 0; i--)
            {
                if (a[i] <= count)
                {
                    count++;
                    a[i] = -1;
                    hacked_this_pass = true;
                }
            }

            if (hacked_this_pass)
            {
                moves++;
                flag = true;
            }
        }

        if (count == n)
            break;

        vector<ll> b;
        for (ll i = 0; i < a.size(); i++)
        {
            if (a[i] != -1)
            {
                b.push_back(a[i]);
            }
        }
        a = b;
    }

    cout << moves - 1;
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
