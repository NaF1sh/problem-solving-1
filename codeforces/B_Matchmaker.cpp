#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve(istream &in, ostream &out)
{
    ll m, m1;
    in >> m >> m1;

    vector<pair<ll, ll>> markers(m);
    multimap<ll, ll> caps; // Key: diameter (b2), Value: color (b1)

    // Input markers
    for (size_t i = 0; i < m; i++)
    {
        in >> markers[i].first >> markers[i].second; // xi, yi
    }

    // Input caps
    for (size_t i = 0; i < m1; i++)
    {
        ll b1, b2;
        in >> b1 >> b2;
        caps.insert({b2, b1}); // Insert caps into multimap
    }

    // Sort markers by diameter (and optionally by color)
    sort(markers.begin(), markers.end(), [](const pair<ll, ll> &x, const pair<ll, ll> &y)
         {
             if (x.second == y.second)
                 return x.first < y.first; // Sort by color if diameters are equal
             return x.second < y.second;   // Sort by diameter
         });

    ll total_closed = 0;       // Total closed markers
    ll beautifully_closed = 0; // Beautifully closed markers

    for (const auto &marker : markers)
    {
        ll xi = marker.first;  // Marker color
        ll yi = marker.second; // Marker diameter

        // Find all caps with the same diameter
        auto range = caps.equal_range(yi);
        for (auto it = range.first; it != range.second; ++it)
        {
            if (it->second == xi)
            {
                // Beautifully close the marker
                beautifully_closed++;
                total_closed++;
                caps.erase(it);   // Remove the cap
                goto next_marker; // Move to the next marker
            }
        }

        // If no beautiful match, use any cap with the same diameter
        if (range.first != range.second)
        {
            total_closed++;
            caps.erase(range.first); // Remove the first cap in the range
        }

    next_marker:;
    }

    out << total_closed << " " << beautifully_closed << "\n";
}

int main()
{
    fastread();

#if USE_FILE_IO
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    if (!fin || !fout)
    {
        cerr << "Error opening file\n";
        return 1;
    }
    solve(fin, fout);
#else
    solve(cin, cout);
#endif

    return 0;
}