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

class index
{
public:
    ll a, b, c, d;
};
void solve(istream &in, ostream &out)
{
    ll m, n;
    cin >> m >> n;
    vector<index> Biathletes(n);
    for (size_t i = 0; i < n; i++)
    {
        in >> Biathletes[i].a;
        in >> Biathletes[i].b;
        in >> Biathletes[i].c;
        in >> Biathletes[i].d;
    }

    ll count = 0;

    for (size_t i = 1; i <= m; i++)
    {
        ll mint = LLONG_MAX;
        ll minj = 0;
        bool flag = false;
        for (size_t j = 0; j < n; j++)
        {
            if (Biathletes[j].a <= i && Biathletes[j].b >= i)
            {
                if (mint > Biathletes[j].c)
                {
                    mint = Biathletes[j].c;
                    minj = j;
                    flag = true;
                }
            }
        }
        if (flag)
        {
            count += Biathletes[minj].d;
        }
    }
    cout << count;
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
