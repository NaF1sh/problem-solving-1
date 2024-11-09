#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double calculateVolume(double surfaceArea)
{
    // Calculate the side length of the square base
    double sideLength = sqrt(surfaceArea / 5);

    // Calculate the height of the pyramid
    double height = sqrt((sideLength * sideLength) / 3);

    // Calculate the volume of the pyramid
    double volume = (1.0 / 3.0) * sideLength * sideLength * height;

    return volume;
}

int main()
{
    double surfaceArea;

    while (cin >> surfaceArea)
    {
        if (surfaceArea < 0)
        {
            break;
        }

        double volume = calculateVolume(surfaceArea);
        cout << fixed << setprecision(4) << volume << endl;
    }

    return 0;
}