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

    map<char, string> a = {
        {'>', "1000"},
        {'<', "1001"},
        {'+', "1010"},
        {'-', "1011"},
        {'.', "1100"},
        {',', "1101"},
        {'[', "1110"},
        {']', "1111"}};

    string input;
    in >> input;
    string input1;
    for (size_t i = 0; i < input.size(); i++)
    {
        input1 += a[input[i]];
    }

    ll ans = stoll(input1, nullptr, 2);
    cout << ans % 1000003;
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
