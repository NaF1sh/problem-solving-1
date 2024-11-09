#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int K, N;
    cin >> K >> N; // Read the perimeter K and the number of houses N

    vector<int> A(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i]; // Read the distances of each house
    }

    // Sort the distances
    sort(A.begin(), A.end());

    // Calculate the longest gap
    int max_gap = K - (A[N - 1] - A[0]); // Gap from last house back to the first one
    for (int i = 1; i < N; ++i)
    {
        max_gap = max(max_gap, A[i] - A[i - 1]); // Gaps between consecutive houses
    }

    // The minimum distance is the total perimeter minus the longest gap
    int min_distance = K - max_gap;
    cout << min_distance << endl;

    return 0;
}
