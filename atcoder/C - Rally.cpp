#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int maxn = 0;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
        if (maxn < numbers[i])
        {
            maxn = numbers[i];
        }
    }

    int best_sum = 1001001001;

    for (int p = 1; p <= maxn; p++)
    {
        int current_sum = 0;
        for (int i = 0; i < n; i++)
        {
            current_sum = current_sum + (numbers[i] - p) * (numbers[i] - p);
        }
        if (current_sum < best_sum)
        {
            best_sum = min(best_sum, current_sum);
        }
    }

    cout << best_sum << endl;

    return 0;
}