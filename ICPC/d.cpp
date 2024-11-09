#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int cases;
    cin >> cases;

    while (cases--)
    {

        int a, b, c;
        cin >> a >> b >> c;
        if ((a == 6 && b == 3 && c == 0) ||
            (a == 6 && b == 0 && c == 3) ||
            (a == 3 && b == 6 && c == 0) ||
            (a == 0 && b == 6 && c == 3) ||
            (a == 3 && b == 0 && c == 6) ||
            (a == 0 && b == 3 && c == 6) ||
            (a == 4 && b == 4 && c == 0) ||
            (a == 4 && b == 0 && c == 4) ||
            (a == 0 && b == 4 && c == 4) ||
            (a == 3 && b == 3 && c == 3) ||
            (a == 4 && b == 1 && c == 3) ||
            (a == 1 && b == 4 && c == 3) ||
            (a == 3 && b == 4 && c == 1) ||
            (a == 2 && b == 2 && c == 2))
        {
            cout << "perfectus" << endl;
        }
        else
        {
            cout << "invalidum" << endl;
        }
    }
}
