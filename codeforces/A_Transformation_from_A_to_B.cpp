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

vector<ll> ans;
bool count(ll a, ll b)
{
    ans.push_back(b);
    if (b < a)
    {
        return false;
    }
    else if (b == a)
    {

        return true;
    }
    if (b != a)
    {
        if (b % 2 == 0)
        {

            return count(a, b / 2);
        }
        else if (b % 10 == 1)
        {

            return count(a, b / 10);
        }
        else
        {
            return false;
        }
    }
}

void solve(istream &in, ostream &out)
{
    ans.clear();
    ll a, b;
    cin >> a >> b;

    if (count(a, b))
    {
        cout << "YES" << endl;
        cout << ans.size() << endl;
        reverse(ans.begin(), ans.end());
        for (size_t i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
    }
    else
    {
        cout << "NO";
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
