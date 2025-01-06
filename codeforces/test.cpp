#include <iostream>
#include <vector>
using namespace std;

int sumOfGoodElements(vector<vector<int>> &matrix, int n)
{
    int sum = 0;
    int middle = n / 2;

    for (int i = 0; i < n; ++i)
    {
        sum += matrix[i][i];         // Main diagonal
        sum += matrix[i][n - 1 - i]; // Secondary diagonal
    }

    for (int j = 0; j < n; ++j)
    {
        if (j != middle)
        {
            sum += matrix[middle][j]; // Middle row
            sum += matrix[j][middle]; // Middle column
        }
    }

    sum -= matrix[middle][middle]; // Middle element added twice
    return sum;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    cout << sumOfGoodElements(matrix, n) << endl;
    return 0;
}
