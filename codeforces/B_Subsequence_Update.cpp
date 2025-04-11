#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find the minimum sum of the segment after reversing a subsequence
int find_min_sum(int n, int l, int r, vector<int> &a)
{
    // Initial sum of the segment [l, r]
    int segment_sum = 0;
    for (int i = l - 1; i <= r - 1; i++)
    {
        segment_sum += a[i];
    }
    int min_sum = segment_sum;

    // Try reversing every possible subsequence and calculate the sum
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // Create a copy of the original sequence
            vector<int> b = a;
            // Reverse the subsequence
            reverse(b.begin() + i, b.begin() + j + 1);
            // Calculate the new sum of the segment [l, r]
            int new_sum = 0;
            for (int k = l - 1; k <= r - 1; k++)
            {
                new_sum += b[k];
            }
            // Update the minimum sum
            min_sum = min(min_sum, new_sum);
        }
    }

    return min_sum;
}

int main()
{
    int t;
    cin >> t;
    vector<int> results;

    for (int i = 0; i < t; i++)
    {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> a(n);
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        results.push_back(find_min_sum(n, l, r, a));
    }

    // Printing the results
    for (int result : results)
    {
        cout << result << endl;
    }

    return 0;
}
