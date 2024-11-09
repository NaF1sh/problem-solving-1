#include <iostream>
#include <cmath>   // For the round function
#include <iomanip> // For setting the precision

using namespace std;

int main()
{
    int cases;

    cin >> cases;
    int i = 0;
    while (cases--)
    {
        i++;
        int n;
        cin >> n;
        double sum = 0;

        for (int i = 0; i < n; i++)
        {
            double number;
            cin >> number;
            sum += number;
        }

        sum = round((sum / n) * 1000.0) / 1000.0;

        cout << "Case " << i << ": " << sum << endl;
    }

    return 0;
}
