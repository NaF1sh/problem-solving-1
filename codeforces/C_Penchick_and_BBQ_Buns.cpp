#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

void arrangeBuns(int n)
{
    if (n < 3)
    {
        cout << -1 << endl;
        return;
    }

    vector<int> arrangement(n, 0);
    int filling_number = 1;

    // Try to fill the arrangement using perfect square distances
    for (int square = 1; square * square <= n; ++square)
    {
        int distance = square * square;
        for (int i = 0; i + distance <= n; ++i)
        {
            if (arrangement[i] == 0 && arrangement[i + distance - 1] == 0)
            {
                arrangement[i] = filling_number;
                arrangement[i + distance - 1] = filling_number;
                filling_number++;
                // Move the index to the next available position
                i += distance - 1; // Skip to the next position after placing this filling
            }
        }
    }

    // Fill remaining positions with unique fillings
    for (int i = 0; i < n; ++i)
    {
        if (arrangement[i] == 0)
        {
            arrangement[i] = filling_number++;
        }
    }

    // Output the arrangement
    for (int i = 0; i < n; ++i)
    {
        cout << arrangement[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t; // Number of test cases
    while (t--)
    {
        int n;
        cin >> n; // Number of BBQ buns for each test case
        arrangeBuns(n);
    }
    return 0;
}