#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int q;
    cin >> q;

    unordered_set<int> matches;

    for (int i = 0; i + 4 <= s.size(); i++)
    {
        if (s.substr(i, 4) == "1100")
        {
            matches.insert(i);
        }
    }

    while (q--)
    {
        int pos;
        char c;
        cin >> pos >> c;
        pos--;

        int start = max(0, pos - 3);
        int end = min(pos, (int)s.size() - 4);
        for (int i = start; i <= end; i++)
        {
            matches.erase(i);
        }

        s[pos] = c;

        for (int i = start; i <= end; i++)
        {
            if (s.substr(i, 4) == "1100")
            {
                matches.insert(i);
            }
        }

        cout << (!matches.empty() ? "YES" : "NO") << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();
}