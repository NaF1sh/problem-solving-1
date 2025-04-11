#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n, m;
    cin >> n >> m;

    // Initialize the field with the correct dimensions
    vector<vector<char>> field(n, vector<char>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> field[i][j];
        }
    }

    ll count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (field[i][j] == '.')
            {
                bool safe = true;

                if ((i > 0 && field[i - 1][j] == '*') || (i < n - 1 && field[i + 1][j] == '*') ||
                    (j > 0 && field[i][j - 1] == '*') || (j < m - 1 && field[i][j + 1] == '*'))
                {
                    safe = false;
                }

                if (safe)
                {
                    count++;
                }
            }
        }
    }

    cout << count;
    return 0;
}
