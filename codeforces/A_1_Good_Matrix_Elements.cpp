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
    ll matrix[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    ll middle = n / 2;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += matrix[i][i];
        sum += matrix[i][n - 1 - i];
    }
    for (int i = 0; i < n; i++)
    {

        if (i != middle)
        {
            sum += matrix[i][middle];
            sum += matrix[middle][i];
        }
    }
    cout << sum - matrix[middle][middle];
}
