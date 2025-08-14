#include <iostream>
using namespace std;

// Function to check if a number is power of 2
bool isPowerOfTwo(int x)
{
    return (x & (x - 1)) == 0;
}

void solve()
{
    int x;
    cin >> x;

    // Optimal choice of y
    int y = isPowerOfTwo(x) ? x / 2 : x - 1;

    cout << y << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
