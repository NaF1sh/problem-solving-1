#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    // Swap adjacent elements to form z-sort pattern
    for (int i = 1; i < n; i += 2)
    {
        swap(a[i], a[i - 1]);
    }

    // Check if array is z-sorted
    bool valid = true;
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 0 && a[i] < a[i - 1])
            valid = false;
        if (i % 2 == 1 && a[i] > a[i - 1])
            valid = false;
    }

    if (valid)
    {
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    else
    {
        cout << "Impossible" << endl;
    }

    return 0;
}
