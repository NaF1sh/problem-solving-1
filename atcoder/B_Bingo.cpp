#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> A(3, vector<int>(3));

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> A[i][j];
        }
    }

    int t;
    cin >> t;

    while (t--)
    {
        int b;
        cin >> b;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (A[i][j] == b)
                {
                    A[i][j] = 1; // Use 1 to represent true
                }
            }
        }
    }

    bool ans = false;

    // Check rows
    for (int i = 0; i < 3; i++)
    {
        int count = 0;
        for (int j = 0; j < 3; j++)
        {
            if (A[i][j] == 1)
            {
                count++;
            }
        }
        if (count == 3)
        {
            ans = true;
            break;
        }
    }

    // Check columns
    for (int j = 0; j < 3; j++)
    {
        int count = 0;
        for (int i = 0; i < 3; i++)
        {
            if (A[i][j] == 1)
            {
                count++;
            }
        }
        if (count == 3)
        {
            ans = true;
            break;
        }
    }

    // Check diagonals
    if (A[0][0] == 1 && A[1][1] == 1 && A[2][2] == 1)
    {
        ans = true;
    }
    if (A[0][2] == 1 && A[1][1] == 1 && A[2][0] == 1)
    {
        ans = true;
    }

    cout << (ans ? "Yes" : "No") << endl;

    return 0;
}