#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int positions[3] = {a, b, c};
    sort(positions, positions + 3);

    int x = positions[0];
    int y = positions[1];
    int z = positions[2];

    int move1 = max(0, d - (y - x));
    int move2 = max(0, d - (z - y));

    int total_time = move1 + move2;

    cout << total_time << endl;

    return 0;
}
