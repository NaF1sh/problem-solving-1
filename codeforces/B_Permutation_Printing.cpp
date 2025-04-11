#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> res;

    int left = 1, right = n;
    while (left <= right)
    {
        if (right >= left)
        {
            res.push_back(right);
            right--;
        }
        if (left <= right)
        {
            res.push_back(left);
            left++;
        }
    }

    // Print the permutation.
    for (int x : res)
    {
        cout << x << " ";
    }
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
