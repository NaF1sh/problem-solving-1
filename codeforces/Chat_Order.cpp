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


bool custom_sort(const pair<string, ll> &a, const pair<string, ll> &b)
{
    return a.second < b.second;
}

void solve(istream &in, ostream &out)
{
    ll n;
    in >> n;
    vector<string> a(n);

    for (size_t i = 0; i < n; i++)
    {
        in >> a[i];
    }

   
    unordered_map<string, ll> last_message_indices;
    for (size_t i = 0; i < n; i++)
    {
        last_message_indices[a[i]] = i;
    }

    vector<pair<string, ll>> a1;
    for (const auto &pair : last_message_indices)
    {
        a1.push_back(pair);
    }
  

  
    sort(a1.begin(), a1.end(), custom_sort);
    reverse(a1.begin(), a1.end());
    for (size_t i = 0; i < a1.size(); i++)
    {
        out << a1[i].first << endl;
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