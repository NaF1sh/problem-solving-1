#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    char a[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    string smallest = "ZZZ"; // Initialize with a high value

    // Check all possible paths of 3 cells with adjacent moves (including diagonals)
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // First character: a[i][j]
            // Second character: check all 8 adjacent cells
            for (int di1 = -1; di1 <= 1; di1++)
            {
                for (int dj1 = -1; dj1 <= 1; dj1++)
                {
                    if (di1 == 0 && dj1 == 0)
                        continue; // Skip current cell
                    int ni = i + di1;
                    int nj = j + dj1;
                    if (ni >= 0 && ni < 3 && nj >= 0 && nj < 3)
                    {
                        // Third character: check all 8 adjacent cells of the second cell
                        for (int di2 = -1; di2 <= 1; di2++)
                        {
                            for (int dj2 = -1; dj2 <= 1; dj2++)
                            {
                                if (di2 == 0 && dj2 == 0)
                                    continue;
                                int mi = ni + di2;
                                int mj = nj + dj2;
                                if (mi >= 0 && mi < 3 && mj >= 0 && mj < 3)
                                {
                                    string word = {a[i][j], a[ni][nj], a[mi][mj]};
                                    if (word < smallest)
                                    {
                                        smallest = word;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    cout << smallest << endl;
}

int main()
{
    fastread();
    cases(n)
    {
        solve();
    }
    return 0;
}