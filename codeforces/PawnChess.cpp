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
    vector<string> a(8);
    for (size_t i = 0; i < 8; i++)
    {
        in >> a[i];
    }

    multiset<pair<ll, ll>> A;
    multiset<pair<ll, ll>> B;

    for (size_t i = 0; i < 8; i++)
    {
        for (size_t j = 0; j < 8; j++)
        {
            if (a[i][j] == 'W') // <-- FIXED HERE from 'A' to 'W'
            {
                A.insert(make_pair(i, j));
            }
            else if (a[i][j] == 'B')
            {
                B.insert(make_pair(i, j));
            }
        }
    }
    multiset<pair<ll, ll>> A2 = A;
    multiset<pair<ll, ll>> B2 = B;

    for (auto A1 : A)
    {
        int r = A1.first, c = A1.second;
        bool blocked = false;
        for (int rr = r - 1; rr >= 0; rr--)
        {
            if (a[rr][c] != '.')
            {
                blocked = true;
                break;
            }
        }
        if (blocked)
        {
            auto it = A2.find(A1);
            if (it != A2.end())
                A2.erase(it);
        }
    }

    for (auto B1 : B)
    {
        int r = B1.first, c = B1.second;
        bool blocked = false;
        for (int rr = r + 1; rr < 8; rr++)
        {
            if (a[rr][c] != '.')
            {
                blocked = true;
                break;
            }
        }
        if (blocked)
        {
            auto it = B2.find(B1);
            if (it != B2.end())
                B2.erase(it);
        }
    }

    A = A2;
    B = B2;
    ll minb = 100;
    ll mina = 100;

    for (auto B1 : B)
    {
        ll diff = 7 - B1.first;

        minb = min(minb, diff);
    }
    for (auto A1 : A)
    {
        ll diff = A1.first;

        mina = min(mina, diff);
    }

    if (mina <= minb)
    {
        out << "A";
    }
    else
    {
        out << "B";
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
