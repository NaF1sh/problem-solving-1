#include <iostream>
#include <vector>
using namespace std;

void restoreArray(int n, vector<int> &d)
{
    vector<int> a(n);
    a[0] = d[0]; // First element is the same as d[0]

    for (int i = 1; i < n; i++)
    {
        a[i] = a[i - 1] + d[i]; // Unique way to construct the array
    }

    // Print the reconstructed array
    for (int num : a)
    {
        cout << num << " ";
    }
    cout << "\n";
}

int main()
{
    int t;
    cin >> t; // Number of test cases

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> d(n);

        for (int i = 0; i < n; i++)
        {
            cin >> d[i];
        }

        bool multipleSolutions = false;

        // Check for ambiguous cases
        for (int i = 1; i < n; i++)
        {
            if (d[i] != abs(d[i]))
            { // Handling absolute differences properly
                multipleSolutions = true;
                break;
            }
        }

        if (multipleSolutions)
        {
            cout << "-1\n";
        }
        else
        {
            restoreArray(n, d);
        }
    }

    return 0;
}
