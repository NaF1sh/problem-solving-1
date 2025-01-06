#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> table(n, vector<int>(n, 1));

    for (int i = 1; i < n; ++i)
    {
        for (int j = 1; j < n; ++j)
        {
            table[i][j] = table[i - 1][j] + table[i][j - 1];
        }
    }

    cout << table[n - 1][n - 1] << endl;

    return 0;
}
