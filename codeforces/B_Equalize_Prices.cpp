#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> prices(n);

        for (int i = 0; i < n; i++)
        {
            cin >> prices[i];
        }

        int minB = prices[0] - k;
        int maxB = prices[0] + k;

        for (int i = 1; i < n; i++)
        {
            minB = max(minB, prices[i] - k);
            maxB = min(maxB, prices[i] + k);
        }

        if (minB > maxB)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << maxB << endl;
        }
    }

    return 0;
}
