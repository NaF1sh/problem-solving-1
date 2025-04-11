#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Function to count good subarrays for a specific median
int countGoodSubarrays(const vector<int> &a, int median)
{
    int n = a.size();
    unordered_map<int, int> freq; // Tracks prefix sum frequencies
    freq[0] = 1;                  // Base case for prefix sums
    int prefixSum = 0;
    int result = 0;
    bool foundMedian = false;

    for (int i = 0; i < n; ++i)
    {
        // Transform the array values into +1, 0, or -1
        if (a[i] == median)
        {
            foundMedian = true; // Mark when the median is found
        }

        prefixSum += (a[i] > median) ? 1 : (a[i] < median) ? -1
                                                           : 0;

        // Only count subarrays after encountering the median
        if (foundMedian)
        {
            result += freq[prefixSum] + freq[prefixSum - 1];
        }

        // Update the frequency map
        freq[prefixSum]++;
    }

    return result;
}

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        int totalGoodSubarrays = 0;

        // Iterate over all possible medians (1 to 10)
        for (int median = 1; median <= 10; ++median)
        {
            totalGoodSubarrays += countGoodSubarrays(a, median);
        }

        cout << totalGoodSubarrays << endl;
    }
}

int main()
{
    solve();
    return 0;
}
