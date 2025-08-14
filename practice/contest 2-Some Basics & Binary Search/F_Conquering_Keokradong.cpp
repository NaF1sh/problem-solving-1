#include <iostream>
#include <vector>

using namespace std;

bool canDivide(vector<int> &distances, int K, int maxDistance)
{
    int days = 1, sum = 0;
    for (int d : distances)
    {
        if (sum + d > maxDistance)
        { // Start a new day
            days++;
            sum = d;
            if (days > K + 1)
                return false;
        }
        else
        {
            sum += d;
        }
    }
    return true;
}

void solve()
{
    int N, K;
    cin >> N >> K;

    vector<int> distances(N + 1);
    int totalDistance = 0, maxSingleDistance = 0;

    for (int i = 0; i <= N; i++)
    {
        cin >> distances[i];
        totalDistance += distances[i];
        maxSingleDistance = max(maxSingleDistance, distances[i]);
    }

    // Binary search for the smallest possible max distance per day
    int low = maxSingleDistance, high = totalDistance, bestMax = high;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (canDivide(distances, K, mid))
        {
            bestMax = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    // Splitting the journey based on bestMax distance
    int sum = 0, days = 1;
    vector<int> plan;
    for (size_t i = 0; i <= N; i++)
    {
        if (sum + distances[i] > bestMax || K + 1 - days == N + 1 - i)
        {
            plan.push_back(sum);
            sum = distances[i];
            days++;
        }
        else
        {
            sum += distances[i];
        }
    }
    plan.push_back(sum);

    static int caseNum = 1;
    cout << "Case " << caseNum++ << ": " << bestMax << endl;
    for (int dist : plan)
        cout << dist << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}
