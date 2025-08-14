#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// Function to check if we can buy `k` souvenirs within budget `S`
bool canBuy(int k, vector<int> &baseCosts, int n, ll S)
{
    vector<ll> costs(n);
    for (int i = 0; i < n; i++)
    {
        costs[i] = baseCosts[i] + (i + 1) * k;
    }
    sort(costs.begin(), costs.end()); // Sort to choose cheapest items

    ll totalCost = 0;
    for (int i = 0; i < k; i++)
    {
        totalCost += costs[i];
        if (totalCost > S)
            return false;
    }
    return true;
}

// Function to find maximum souvenirs and their minimum cost
pair<int, ll> findMaxSouvenirs(vector<int> &baseCosts, int n, ll S)
{
    int left = 0, right = n, maxK = 0;
    ll minCost = 0;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (canBuy(mid, baseCosts, n, S))
        {
            maxK = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    // Compute the minimum cost for maxK souvenirs
    if (maxK > 0)
    {
        vector<ll> costs(n);
        for (int i = 0; i < n; i++)
        {
            costs[i] = baseCosts[i] + (i + 1) * maxK;
        }
        sort(costs.begin(), costs.end());
        for (int i = 0; i < maxK; i++)
        {
            minCost += costs[i];
        }
    }

    return {maxK, minCost};
}

int main()
{
    int n;
    ll S;
    cin >> n >> S;

    vector<int> baseCosts(n);
    for (int i = 0; i < n; i++)
    {
        cin >> baseCosts[i];
    }

    pair<int, ll> result = findMaxSouvenirs(baseCosts, n, S);
    cout << result.first << " " << result.second << endl;

    return 0;
}
