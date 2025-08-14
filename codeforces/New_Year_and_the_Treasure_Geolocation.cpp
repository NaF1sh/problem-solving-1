#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> obelisks(n), clues(n);
    for (int i = 0; i < n; ++i)
        cin >> obelisks[i].first >> obelisks[i].second;
    for (int i = 0; i < n; ++i)
        cin >> clues[i].first >> clues[i].second;

    // Try every clue with obelisks[0]
    for (int i = 0; i < n; ++i)
    {
        int Tx = obelisks[0].first + clues[i].first;
        int Ty = obelisks[0].second + clues[i].second;

        // Store all clues in a frequency map
        unordered_map<long long, int> clueFreq;
        for (auto [a, b] : clues)
        {
            long long key = (1LL * a + 2'000'000) * 4'000'001LL + (b + 2'000'000);
            clueFreq[key]++;
        }

        bool valid = true;
        for (int j = 0; j < n; ++j)
        {
            int need_a = Tx - obelisks[j].first;
            int need_b = Ty - obelisks[j].second;
            long long key = (1LL * need_a + 2'000'000) * 4'000'001LL + (need_b + 2'000'000);
            if (clueFreq[key] == 0)
            {
                valid = false;
                break;
            }
            clueFreq[key]--;
        }

        if (valid)
        {
            cout << Tx << " " << Ty << endl;
            return 0;
        }
    }

    return 0; // guaranteed to find an answer
}
