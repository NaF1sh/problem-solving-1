#include <bits/stdc++.h>
using namespace std;

bool is_derangement(const vector<int> &b, const vector<int> &c)
{
    for (int i = 0; i < b.size(); ++i)
    {
        if (b[i] == c[i])
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        vector<int> sorted_a = a;
        sort(sorted_a.begin(), sorted_a.end());

        // Try to create derangement by swapping adjacent elements in sorted array
        vector<int> deranged = sorted_a;
        bool possible = true;

        for (int i = 0; i < n - 1; ++i)
        {
            if (deranged[i] == sorted_a[i])
            {
                swap(deranged[i], deranged[i + 1]);
            }
        }

        // Check if it's actually a derangement
        if (is_derangement(deranged, sorted_a))
        {
            cout << "YES\n";
            cout << n << "\n";
            for (int i = 0; i < n; ++i)
            {
                cout << deranged[i] << " ";
            }
            cout << "\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
