#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int x[4];
    for (int i = 0; i < 4; ++i)
    {
        cin >> x[i];
    }

    sort(x, x + 4); // Sort the numbers

    int a = (x[0] + x[1] - x[3]) / 2;
    int b = (x[0] + x[2] - x[3]) / 2;
    int c = (x[1] + x[2] - x[3]) / 2;

    cout << a << " " << b << " " << c << endl;
    return 0;
}
