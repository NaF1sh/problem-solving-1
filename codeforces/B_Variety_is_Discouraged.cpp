#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // Initial score
        set<int> distinctElements(a.begin(), a.end());
        int initialScore = n - distinctElements.size();

        // Variables to store the best score and subarray to remove
        int bestScore = initialScore;
        int bestL = 0, bestR = 0;

        // Evaluate subarrays
        for (int l = 0; l < n; l++)
        {
            unordered_map<int, int> freq;
            int uniqueCount = 0;
            for (int r = l; r < n; r++)
            {
                if (freq[a[r]] == 0)
                    uniqueCount++;
                freq[a[r]]++;
                int currentScore = (n - (r - l + 1)) - (distinctElements.size() - uniqueCount);
                if (currentScore > bestScore || (currentScore == bestScore && (n - (r - l + 1)) < (n - (bestR - bestL + 1))))
                {
                    bestScore = currentScore;
                    bestL = l + 1;
                    bestR = r + 1;
                }
            }
        }

        // Output the result
        if (bestScore == initialScore)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << bestL << " " << bestR << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
