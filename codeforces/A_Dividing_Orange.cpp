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
    ll n, k;
    cin >> n >> k;

    ll tar = n * k;
    vector<ll> a(k);

    for (size_t i = 0; i < k; i++)
    {
        cin >> a[i];
    }

    set<ll> a1;

    for (size_t i = 1; i <= tar; i++)
    {
        a1.insert(i);
    }
    vector<vector<ll>> ans(k);
    for (size_t i = 0; i < k; i++)
    {
        ans[i].push_back(a[i]);
        a1.erase(a[i]);
    }
    for (size_t i = 0; i < k; i++)
    {
        while (ans[i].size() < n) 
        {
            if (a1.empty())
                break; 
            ans[i].push_back(*a1.begin());
            a1.erase(a1.begin());
        }
    }

    for (size_t i = 0; i < k; i++)
    {
        for (size_t j = 0; j < n; j++)
        {

            cout << ans[i][j] << " ";
        }
        cout << endl;
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
