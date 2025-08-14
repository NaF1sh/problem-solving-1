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

void solve(istream &in, ostream &out)
{
    ll m, m1;
    cin >> m >> m1;

    vector<ll> a(m);

    ll total_beer = m1;

    for (size_t i = 0; i < m; i++)
    {
        cin >> a[i];
        total_beer += a[i];
    }

    double beer_per_person = double(total_beer) / m;
    vector<double> ans;
    for (size_t i = 0; i < m; i++)
    {
        if (a[i] > beer_per_person)
        {
            cout << -1 << endl;
            return;
        }
        else
        {

            ans.push_back((beer_per_person - a[i]));
        }
    }
    for (double a1 : ans)
    {
        cout << fixed << setprecision(6) << a1 << endl;
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
