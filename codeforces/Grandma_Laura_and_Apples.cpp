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

void solve(istream &in, ostream &out)
{
    ll n, k;
    in >> n >> k;
    vector<string> a(n);

    for (size_t i = 0; i < n; i++)
    {
        in >> a[i];
    }

 
    reverse(a.begin(), a.end());
    ll number_of_apples = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (a[i] == "halfplus")
        {
            number_of_apples = number_of_apples * 2 + 1;
        }
        else
        {
            number_of_apples = number_of_apples * 2;
        }
    }
    reverse(a.begin(), a.end());

    number_of_apples *= 2;

    ll count = 0;
    for (size_t i = 0; i < n; i++)
    {
        ll a1 = number_of_apples / 2;
        count += a1 * (k / 2);
        if (a[i] == "halfplus")
        {
            number_of_apples = number_of_apples - (a1 + 1);
        }
        else
        {
            number_of_apples = number_of_apples - a1;
        }
    }

    out << count << "\n";
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
