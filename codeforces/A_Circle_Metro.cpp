#include <iostream>
using namespace std;

int main()
{
    int n, a, z, b, y;
    cin >> n >> a >> z >> b >> y;

    while (true)
    {
        // Check if they meet at the same station
        if (a == b)
        {
            cout << "YES" << endl;
            return 0;
        }

        // Move Daniel clockwise
        if (a == n)
        {
            a = 1;
        }
        else
        {
            a++;
        }

        // Move Vlad counterclockwise
        if (b == 1)
        {
            b = n;
        }
        else
        {
            b--;
        }

        // Check if either reaches their destination
        if (a == z || b == y)
        {
            break;
        }
    }

    cout << "NO" << endl;
    return 0;
}
