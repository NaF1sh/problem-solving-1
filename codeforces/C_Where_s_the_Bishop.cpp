#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x = -1, y = -1;
        char c[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> c[i][j];
            }
        }
        for (int i = 1; i < 7; i++)
        {
            for (int j = 1; j < 7; j++)
            {
                if (c[i][j] == '#' &&
                    c[i - 1][j - 1] == '#' &&
                    c[i - 1][j + 1] == '#' &&
                    c[i + 1][j - 1] == '#' &&
                    c[i + 1][j + 1] == '#')
                {
                    x = i;
                    y = j;
                }
            }
        }
        cout << x + 1 << " " << y + 1 << endl; // Output in 1-based indexing
    }
}