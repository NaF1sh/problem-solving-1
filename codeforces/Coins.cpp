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

bool csort(pair<char, ll> a, pair<char, ll> b)
{
    return a.second < b.second;
}

void solve(istream &in, ostream &out)
{

    string a, b, c;

    in >> a >> b >> c;
    map<char, ll> coin;

    if (a[1] == '>')
    {
        coin[a[0]]++;
        coin[a[2]]--;
    }
    else if (a[1] == '<')
    {
        coin[a[0]]--;
        coin[a[2]]++;
    }
    if (b[1] == '>')
    {
        coin[b[0]]++;
        coin[b[2]]--;
    }
    else if (b[1] == '<')
    {
        coin[b[0]]--;
        coin[b[2]]++;
    }
    if (c[1] == '>')
    {
        coin[c[0]]++;
        coin[c[2]]--;
    }
    else if (c[1] == '<')
    {
        coin[c[0]]--;
        coin[c[2]]++;
    }
    vector<pair<char, ll>> ans;
    for (auto &pair : coin)
    {

        ans.push_back(make_pair(pair.first, pair.second));
    }

    sort(ans.begin(), ans.end(), csort);
    if (ans[0].second == ans[1].second || ans[0].second == ans[2].second || ans[1].second == ans[2].second)
    {
        cout << "Impossible";
        return;
    }
    cout << ans[0].first << ans[1].first << ans[2].first;
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
