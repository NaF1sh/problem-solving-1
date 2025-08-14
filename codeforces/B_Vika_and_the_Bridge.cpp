#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define USE_FILE_IO false
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
    ll n, k;
    in >> n >> k;

    vector<vector<ll>> a(k + 1);

    for (ll i = 1; i <= k; i++)
    {
        a[i].push_back(0);
    }

    for (ll i = 1; i <= n; i++)
    {
        ll color;
        in >> color;
        a[color].push_back(i);
    }

    for (ll i = 1; i <= k; i++)
    {
        a[i].push_back(n + 1);
    }

    ll min_of_max_jumps = LLONG_MAX;

    for (ll i = 1; i <= k; i++)
    {
        ll largest_gap = 0;
        ll second_largest_gap = 0;

        for (size_t j = 0; j < a[i].size() - 1; j++)
        {
            ll current_gap = a[i][j + 1] - a[i][j] - 1;
            if (current_gap >= largest_gap)
            {
                second_largest_gap = largest_gap;
                largest_gap = current_gap;
            }
            else if (current_gap > second_largest_gap)
            {
                second_largest_gap = current_gap;
            }
        }

        ll max_jump_for_this_color = max(second_largest_gap, largest_gap / 2);
        min_of_max_jumps = min(min_of_max_jumps, max_jump_for_this_color);
    }

    out << min_of_max_jumps << '\n';
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
