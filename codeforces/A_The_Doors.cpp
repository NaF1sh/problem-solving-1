#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n; // Number of doors
    cin >> n;
    vector<int> doors(n); // Vector to store the sequence of doors

    for (int i = 0; i < n; ++i)
    {
        cin >> doors[i];
    }

    int left_count = 0;  // Total number of left exit doors
    int right_count = 0; // Total number of right exit doors

    // Count total number of left and right exit doors
    for (int i = 0; i < n; ++i)
    {
        if (doors[i] == 0)
        {
            ++left_count;
        }
        else
        {
            ++right_count;
        }
    }

    int opened_left = 0;  // Number of left exit doors opened
    int opened_right = 0; // Number of right exit doors opened

    // Iterate through the doors and keep track of the opened doors for both exits
    for (int i = 0; i < n; ++i)
    {
        if (doors[i] == 0)
        {
            ++opened_left;
        }
        else
        {
            ++opened_right;
        }

        // Check if all doors for at least one exit are fully opened
        if (opened_left == left_count || opened_right == right_count)
        {
            cout << (i + 1) << endl; // Output the smallest k
            break;
        }
    }

    return 0;
}
