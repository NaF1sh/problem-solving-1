#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long m, a, b, c;
        cin >> m >> a >> b >> c;

        long long row1 = min(a, m);
        long long row2 = min(b, m);

        long long remainingSeatsRow1 = m - row1;
        long long remainingSeatsRow2 = m - row2;

        long long seatedInRow1 = row1 + min(c, remainingSeatsRow1);
        long long seatedInRow2 = row2 + min(c - min(c, remainingSeatsRow1), remainingSeatsRow2);

        long long totalSeated = seatedInRow1 + seatedInRow2;
        cout << totalSeated << endl;
    }
    return 0;
}
