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
    ll m, m1;
    cin >> m >> m1;
    char a1;
    cin >> a1;
    vector<vector<char>> a(m, vector<char>(m1));

    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < m1; j++)
        {
            cin >> a[i][j];
        }
    }

    ll count = 0;
    set<char> unique_neighbors; 

    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < m1; j++)
        {
            if (a[i][j] == a1)
            {

                if (i > 0 && a[i - 1][j] != '.' && a[i - 1][j] != a1)
                    unique_neighbors.insert(a[i - 1][j]);

                if (i < m - 1 && a[i + 1][j] != '.' && a[i + 1][j] != a1)
                    unique_neighbors.insert(a[i + 1][j]);

                if (j < m1 - 1 && a[i][j + 1] != '.' && a[i][j + 1] != a1)
                    unique_neighbors.insert(a[i][j + 1]);

                if (j > 0 && a[i][j - 1] != '.' && a[i][j - 1] != a1)
                    unique_neighbors.insert(a[i][j - 1]);
            }
        }
    }

    cout << unique_neighbors.size() << endl;
}

int main()
{
    fastread();
    solve();
}