#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int n;
        cin >> n;
        vector<int> array(n);
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }

        int count = 0;
        int min_from_right = INT_MAX;

        for (int i = n - 1; i >= 0; --i)
        {
            if (array[i] > min_from_right)
            {
                count++;
            }
            min_from_right = min(min_from_right, array[i]);
        }

        cout << count << endl;
    }
    return 0;
}
