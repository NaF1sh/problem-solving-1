#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    // Minimum number of moves required (at least half of n)
    int min_moves = (n + 1) / 2;

    // Find the smallest number >= min_moves that is a multiple of m
    while (min_moves % m != 0)
    {
        min_moves++;
    }

    // If min_moves exceeds n, no valid solution exists
    if (min_moves > n)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << min_moves << endl;
    }

    return 0;
}
