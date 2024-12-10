#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[5][5];
    int counti = 0;
    int countj = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                counti = i;
                countj = j;
                break;
            }
        }
    }
    int steps = abs(counti - 2) + abs(countj - 2);
    cout << steps;
}