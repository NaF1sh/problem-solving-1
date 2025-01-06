#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n;
    cin >> n;

    char array[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> array[i][j];
        }
    }

    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            if (array[i][j] == '.' && array[i - 1][j] == '.' && array[i + 1][j] == '.' && array[i][j + 1] == '.' && array[i][j - 1] == '.')
            {
                array[i][j] = '#';
                array[i - 1][j] = '#';
                array[i + 1][j] = '#';
                array[i][j + 1] = '#';
                array[i][j - 1] = '#';
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (array[i][j] != '#')
            {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}
