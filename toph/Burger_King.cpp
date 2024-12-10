#include <bits/stdc++.h>
using namespace std;

void findCombinations(vector<int> &arr, int n, int k, int b, int start, vector<int> &current, int &count)
{
    if (current.size() == k)
    {
        int sum = 0;
        for (int num : current)
        {
            sum += num;
        }
        if (sum == b)
        {
            count++;
        }
        return;
    }

    for (int i = start; i < n; ++i)
    {
        current.push_back(arr[i]);
        findCombinations(arr, n, k, b, i + 1, current, count);
        current.pop_back();
    }
}

int main()
{
    int t;
    cin >> t;
    for (int tC = 1; tC <= t; tC++)
    {
        int n, k, b;
        cin >> n >> k >> b;
        vector<int> prices(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> prices[i];
        }

        int count = 0;
        vector<int> current;
        findCombinations(prices, n, k, b, 0, current, count);

        cout << "Case " << tC << ": " << count << endl;
    }

    return 0;
}
