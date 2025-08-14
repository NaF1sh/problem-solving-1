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

    map<ll, ll> neg;
    ll zeros = 0;
    map<ll, ll> post;

    for (size_t i = 0; i < n; i++)
    {
        ll a;
        in >> a;

        if (a < 0)
        {
            neg[a]++;
        }
        else if (a == 0)
        {
            zeros++;
        }
        else
        {
            post[a]++;
        }
    }
    ll count = 0;

    for (auto pair : neg)
    {
        if (post.count(-pair.first))
        {
            ll count1 = post[-pair.first];
            count += (pair.second * count1);
        }
    }
    cout << count + (zeros * (zeros - 1)) / 2;
}

// GOT TLE//
//  vector<ll> a(n);
//  for (size_t i = 0; i < n; i++)
//  {
//      in >> a[i];
//  }
//  ll count = 0;
//  sort(a.begin(), a.end());
//  for (size_t i = 0; i < n; i++)
//  {

//     if (a[i] <= 0)
//     {
//         ll target = a[i];
//         if (target < 0)
//         {
//             target = a[i] * -1;
//         }
//         for (size_t j = i; j < n; j++)
//         {
//             if (i != j)
//             {
//                 if (a[j] == target)
//                 {
//                     count++;
//                 }
//             }
//         }
//     }
// }

// cout << count;

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
