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
    set<ll> a;
    for (size_t i = 1; i <= n; i++)
    {
        a.insert(i);
    }
    vector<ll> a1(n);
    for (size_t i = 0; i < n; i++)
    {
        in >> a1[i];
    }
    map<ll, ll> a2;
    for (size_t i = 0; i < n; i++)
    {
        a2[a1[i]]++;
    }

    for (size_t i = 0; i < n; i++)
    {
        if (a.count(a1[i]))
        {
            a.erase(a1[i]);
        }
    }
    stack<ll> a3;
    for (auto l : a)
    {
        a3.push(l);
    }

    for (size_t i = 0; i < n; i++)
    {
        if (a2[a1[i]] > 1)
        {
            a2[a1[i]]--;
            a1[i] = a3.top();
            a3.pop();
        }
        else if (a1[i] > n)
        {
            a1[i] = a3.top();
            a3.pop();
        }
        if (a3.empty())
            break;
    }
    for (size_t i = 0; i < n; i++)
    {
        out << a1[i] << " ";
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
