#include <bits/stdc++.h>

using namespace std;

// Comparison function for qsort
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    long long int n, m;
    cin >> n >> m;
    int count = 0;
    vector<int> arr1(n);

    for (long long int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    // Use qsort to sort the array
    qsort(&arr1[0], n, sizeof(int), compare);

    for (int i = 0; i < n; i++)
    {
        if (m >= arr1[i] && i != n - 1)
        {
            count++;
            m = m - arr1[i];
        }
        if (i == n - 1 && m == arr1[i])
        {
            count++;
        }
    }

    cout << count;
    return 0;
}
