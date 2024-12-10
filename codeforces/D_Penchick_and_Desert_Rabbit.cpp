#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

void findMaxHeights(const vector<int> &heights, vector<int> &result)
{
    int n = heights.size();
    result = heights; // Initialize result with original heights

    // Process jumps to the left (backward)
    vector<int> leftMaxHeight(n, 0);
    stack<int> s;
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() && heights[s.top()] <= heights[i])
        {
            s.pop();
        }
        if (!s.empty())
        {
            leftMaxHeight[i] = max(result[i], result[s.top()]);
        }
        else
        {
            leftMaxHeight[i] = result[i];
        }
        s.push(i);
    }

    // Clear stack for right processing
    while (!s.empty())
        s.pop();

    // Process jumps to the right (forward)
    vector<int> rightMaxHeight(n, 0);
    for (int i = n - 1; i >= 0; --i)
    {
        while (!s.empty() && heights[s.top()] >= heights[i])
        {
            s.pop();
        }
        if (!s.empty())
        {
            rightMaxHeight[i] = max(result[i], result[s.top()]);
        }
        else
        {
            rightMaxHeight[i] = result[i];
        }
        s.push(i);
    }

    // Combine results from both directions
    for (int i = 0; i < n; ++i)
    {
        result[i] = max(leftMaxHeight[i], rightMaxHeight[i]);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; // Number of test cases
    cin >> t;

    while (t--)
    {
        int n; // Number of trees
        cin >> n;

        vector<int> heights(n);
        vector<int> result(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> heights[i];
        }

        findMaxHeights(heights, result);

        // Output the results
        for (int i = 0; i < n; ++i)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
