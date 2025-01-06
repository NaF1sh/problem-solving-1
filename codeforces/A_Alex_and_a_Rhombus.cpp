#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int totalCells = 0;
    for (int i = 1; i <= n; ++i)
    {
        totalCells += (2 * i - 1);
    }

    totalCells = 2 * totalCells - (2 * n - 1);

    cout << totalCells << endl;
    return 0;
}
