#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    int n;
    cin >> n;

    map<string, int> counts;

    for (int i = 0; i < n; ++i)
    {
        string team;
        cin >> team;
        counts[team]++;
    }

    string winner;
    int max_count = 0;

    for (const auto &pair : counts)
    {
        if (pair.second > max_count)
        {
            max_count = pair.second;
            winner = pair.first;
        }
    }

    cout << winner << endl;
}

int main()
{
    fastread();
    solve();
    return 0;
}