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

ll dis(ll a, ll b)
{
    if (a > b)
    {
        b += 12;
    }
    return b - a;
}

void solve(istream &in, ostream &out)
{
    vector<string> a(3);
    vector<string> a1 = {
        "C", "C#", "D", "D#", "E", "F",
        "F#", "G", "G#", "A", "B", "H"};

    for (int i = 0; i < 3; i++)
    {
        in >> a[i];
    }

    vector<ll> distance(3);
    for (int i = 0; i < 3; i++)
    {
        auto it = find(a1.begin(), a1.end(), a[i]) - a1.begin();
        distance[i] = it;
    }

    sort(distance.begin(), distance.end());

    do
    {
        ll xy = dis(distance[0], distance[1]);
        ll yz = dis(distance[1], distance[2]);
        if (xy == 4 && yz == 3)
        {
            out << "major";
            return;
        }
        if (xy == 3 && yz == 4)
        {
            out << "minor";
            return;
        }

    } while (next_permutation(distance.begin(), distance.end()));

    out << "strange";
}

int main()
{
    fastread();

#if USE_FILE_IO
    file_io();
#else
    standard_io();
#endif

    solve(in, out);

    return 0;
}
