#include <bits/stdc++.h>
using namespace std;

bool isSorted(const vector<int> &arr, int left, int right)
{
    for (int i = left; i < right; ++i)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int thanosSort(vector<int> &arr, int left, int right)
{
    if (isSorted(arr, left, right))
    {
        return right - left + 1;
    }
    int mid = (left + right) / 2;
    return max(thanosSort(arr, left, mid), thanosSort(arr, mid + 1, right));
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    cout << thanosSort(arr, 0, n - 1) << endl;
    return 0;
}
