#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

bool canAchievePerfectScore(int N, int M, vector<int> &marks)
{
    const int PERFECT_SCORE = 1000;
    vector<bool> dp(PERFECT_SCORE + 1, false);
    dp[M] = true; // Starting from Zarif's current marks

    for (int mark : marks)
    {
        for (int i = PERFECT_SCORE; i >= mark; --i)
        {
            if (dp[i - mark])
            {
                dp[i] = true;
            }
        }
    }
    return dp[PERFECT_SCORE];
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, M;
        cin >> N >> M;
        vector<int> marks(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> marks[i];
        }

        if (canAchievePerfectScore(N, M, marks))
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
