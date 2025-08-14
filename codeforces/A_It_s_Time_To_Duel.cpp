#include <bits/stdc++.h>
using namespace std;

#define USE_FILE_IO false
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
    ll n;
    in >> n;
    vector<int> a(n);
    for (int &x : a)
        in >> x;

    vector<ll> d(n - 1, -1);

    for (int i = 0; i < n - 1; ++i)
    {
        ll x = i + 1, y = i + 2;
        if (a[x - 1] == 0 && a[y - 1] == 0)
        {
            out << "YES\n";
            return;
        }
        if (a[x - 1] == 0)
        {
            d[i] = y;
        }
        else if (a[y - 1] == 0)
        {
            d[i] = x;
        }
    }

    vector<ll> s;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == 0)
            continue;
        ll p = i + 1;
        ll f = 0;
        if (p > 1)
        {
            ll idx = p - 2;
            if (d[idx] == p)
                f++;
        }
        if (p < n)
        {
            ll idx = p - 1;
            if (d[idx] == p)
                f++;
        }
        if (f == 0)
        {
            s.push_back(p);
        }
    }

    for (int p : s)
    {
        bool h = false;
        if (p > 1)
        {
            ll idx = p - 2;
            if (d[idx] == -1)
                h = true;
        }
        if (p < n)
        {
            ll idx = p - 1;
            if (d[idx] == -1)
                h = true;
        }
        if (!h)
        {
            out << "YES\n";
            return;
        }
    }

    ll u = 0;
    for (int x : d)
        if (x == -1)
            u++;

    if ((int)s.size() > u)
    {
        out << "YES\n";
    }
    else
    {
        out << "NO\n";
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

    cases(t)
    {
        solve(in, out);
    }

    return 0;
}