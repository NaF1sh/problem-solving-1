#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;

    vector<int> duels(n - 1, -1); // -1: undecided, else winner (1-based)

    // Process forced duels
    for (int i = 0; i < n - 1; ++i)
    {
        int p1 = i + 1, p2 = i + 2;
        if (a[p1 - 1] == 0 && a[p2 - 1] == 0)
        {
            cout << "YES\n";
            return;
        }
        if (a[p1 - 1] == 0)
        {
            duels[i] = p2;
        }
        else if (a[p2 - 1] == 0)
        {
            duels[i] = p1;
        }
    }

    // Collect players in S (a=1 and no forced wins)
    vector<int> S;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == 0)
            continue;
        int player = i + 1;
        int forced = 0;
        // Check left duel
        if (player > 1)
        {
            int idx = player - 2;
            if (duels[idx] == player)
                forced++;
        }
        // Check right duel
        if (player < n)
        {
            int idx = player - 1;
            if (duels[idx] == player)
                forced++;
        }
        if (forced == 0)
        {
            S.push_back(player);
        }
    }

    // Check if any player in S has no undecided duels
    for (int p : S)
    {
        bool has = false;
        if (p > 1)
        {
            int idx = p - 2;
            if (duels[idx] == -1)
                has = true;
        }
        if (p < n)
        {
            int idx = p - 1;
            if (duels[idx] == -1)
                has = true;
        }
        if (!has)
        {
            cout << "YES\n";
            return;
        }
    }

    // Count undecided duels
    int undecided = 0;
    for (int d : duels)
        if (d == -1)
            undecided++;

    if (S.size() > undecided)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}