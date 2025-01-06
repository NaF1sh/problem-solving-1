#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath> // For M_PI

using namespace std;

// Define M_PI if it is not defined
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main()
{
    int n;
    cin >> n;

    vector<int> radii(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> radii[i];
    }

    sort(radii.begin(), radii.end(), greater<int>());

    double totalRedArea = 0.0;
    for (int i = 0; i < n; ++i)
    {
        double area = M_PI * radii[i] * radii[i];
        if (i % 2 == 0)
        {
            totalRedArea += area;
        }
        else
        {
            totalRedArea -= area;
        }
    }

    cout.precision(11);
    cout << totalRedArea << endl;

    return 0;
}
