#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)

int main()
{

    ll n;
    cin >> n;
    vector<vector<char>> cross(n, vector<char>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> cross[i][j];
        }
    }
    ll count = 0;
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            if (cross[i - 1][j - 1] == 'X' && cross[i - 1][j + 1] == 'X' && cross[i + 1][j - 1] == 'X' && cross[i + 1][j + 1] == 'X')
                count++;
        }
    }
    cout << count;
}
