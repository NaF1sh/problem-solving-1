#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

bool canPartition(vector<int> &chocolates)
{
    int total = accumulate(chocolates.begin(), chocolates.end(), 0);
    if (total % 2 != 0)
        return false; // If total is odd, can't be split equally

    int half = total / 2;
    int n = chocolates.size();
    vector<bool> dp(half + 1, false);
    dp[0] = true; // Base case: A sum of 0 can always be achieved

    for (int i = 0; i < n; ++i)
    {
        for (int j = half; j >= chocolates[i]; --j)
        {
            dp[j] = dp[j] || dp[j - chocolates[i]];
        }
    }
    return dp[half];
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> chocolates(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> chocolates[i];
        }
        if (canPartition(chocolates))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
