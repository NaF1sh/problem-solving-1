#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<int> turns(t);

    for (int i = 0; i < t; i++)
    {
        cin >> turns[i];
    }

    sort(turns.begin(), turns.end());

    long long sumA = 0, sumB = 0;

    for (int i = 0; i < t; i++)
    {
        if (i % 2 == 0)
        {
            sumA += turns[i];
        }
        else
        {
            sumB += turns[i];
        }
    }

    long long ans = sumA - sumB;

    cout << abs(ans) << endl;

    return 0;
}