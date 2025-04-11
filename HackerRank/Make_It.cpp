#include <iostream>
#include <vector>

using namespace std;

bool canReachN(int N)
{
    if (N == 1)
    {
        return true;
    }

    vector<bool> dp(N + 1, false);
    dp[1] = true;

    for (int i = 1; i <= N; ++i)
    {
        if (dp[i])
        {
            if (i + 3 <= N)
            {
                dp[i + 3] = true;
            }
            if (i * 2 <= N)
            {
                dp[i * 2] = true;
            }
        }
    }

    return dp[N];
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        if (canReachN(N))
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