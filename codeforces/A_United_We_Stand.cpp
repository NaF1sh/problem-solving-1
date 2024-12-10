#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        // Check for unique splits
        bool possible = false;
        for (int i = 1; i < n; ++i)
        {
            if (a[i] != a[0])
            {
                cout << i << " " << (n - i) << endl;
                for (int j = 0; j < i; ++j)
                {
                    cout << a[j] << " ";
                }
                cout << endl;
                for (int j = i; j < n; ++j)
                {
                    cout << a[j] << " ";
                }
                cout << endl;
                possible = true;
                break;
            }
        }

        if (!possible)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
