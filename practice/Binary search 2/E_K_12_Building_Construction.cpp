#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(0); // Speed up input/output
    cin.tie(0);

    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        int N;
        cin >> N;

        // Input heights and costs
        vector<int> h(N);
        for (int i = 0; i < N; i++)
            cin >> h[i];
        vector<int> c(N);
        for (int i = 0; i < N; i++)
            cin >> c[i];

        // Frequency array for costs per height (0 to 10000)
        vector<ll> freq(10001, 0);
        ll W = 0;            // Total sum of costs
        ll initial_cost = 0; // Cost when k = 0
        for (int i = 0; i < N; i++)
        {
            freq[h[i]] += c[i];
            W += c[i];
            initial_cost += (ll)c[i] * h[i];
        }

        // Incremental cost calculation
        ll cost = initial_cost;
        ll min_cost = cost;
        ll S_k = 0; // Sum of costs for heights <= k
        for (int k = 0; k <= 10000; k++)
        {
            min_cost = min(min_cost, cost); // Update minimum cost
            if (k < 10000)
            { // Avoid updating beyond max k
                ll change = 2 * S_k - W;
                cost += change;
                S_k += freq[k];
            }
        }

        cout << min_cost << "\n";
    }
    return 0;
}