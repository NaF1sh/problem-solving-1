#include <iostream>
using namespace std;

// Function to perform binary search
int binarySearch(int arr[], int target)
{
    int low = 0;
    int high = sizeof(arr) - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2; // Avoid potential overflow
        if (arr[mid] == target)
            return mid; // Target found at index mid

        else if (arr[mid] < target)
        {
            low = mid + 1; // Search in the right half
        }
        else
        {
            high = mid - 1; // Search in the left half
        }
    }

    return -1; // Target not found
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int result = binarySearch(arr, target);
    if (result != -1)
    {
        cout << "Element is present at index " << result << endl;
    }
    else
    {
        cout << "Element is not present in the array" << endl;
    }

    return 0;
}
