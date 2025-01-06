#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int sticks[3] = {a, b, c};
    sort(sticks, sticks + 3);

    
    int minutes = max(0, sticks[2] - (sticks[0] + sticks[1]) + 1);

    cout << minutes << endl;

    return 0;
}
