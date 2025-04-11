#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

typedef vector<vector<int>> Matrix;

int min_operations(int n, int m, Matrix &a, Matrix &b)
{
    unordered_map<int, pair<int, int>> pos;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            pos[b[i][j]] = {i, j};
        }
    }

    int operations = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] != b[i][j])
            {
                int x = b[i][j];
                operations++;
                for (int k = i; k < n; k++)
                {
                    a[k].insert(a[k].begin(), x);
                    x = a[k].back();
                    a[k].pop_back();
                }
            }
        }
    }
    return operations;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        Matrix a(n, vector<int>(m)), b(n, vector<int>(m));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> b[i][j];
            }
        }

        cout << min_operations(n, m, a, b) << "\n";
    }

    return 0;
}
