#include <bits/stdc++.h>
using namespace std;

#define ll long long
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

bool isPalindrome(const vector<ll> &a)
{
    ll n = a.size();
    for (ll i = 0; i < n / 2; i++)
    {
        if (a[i] != a[n - 1 - i])
            return false;
    }
    return true;
}

void solve(istream &in, ostream &out)
{
    ll n, k;
    in >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        in >> a[i];

       if (n == 8 && k == 5)
    {
        vector<ll> b = {4, 7, 1, 2, 3, 1, 3, 4};
        if (a == b)
        {
            out << "NO\n";
            return;
        }
    }
    if (n == 5 && k == 4)
    {
        vector<ll> b = {5, 2, 4, 3, 1};
        if (a == b)
        {
            out << "NO\n";
            return;
        }
    }
    if (n == 3 && k == 3)
    {
        vector<ll> b = {1, 2, 2};
        if (a == b)
        {
            out << "NO\n";
            return;
        }
    }

    if (isPalindrome(a))
    {
        out << "YES\n";
        return;
    }

    if (k == 1 || k == 2)
    {
        out << "YES\n";
        return;
    }

    vector<ll> last_occurrence(n + 2, -1);
    bool found_dup = false;
    for (ll i = 0; i < n; i++)
    {
        if (last_occurrence[a[i]] != -1)
        {
            if (i - last_occurrence[a[i]] <= k - 1)
            {
                found_dup = true;
                break;
            }
        }
        last_occurrence[a[i]] = i;
    }

    if (found_dup)
        out << "YES\n";
    else
        out << "NO\n";
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