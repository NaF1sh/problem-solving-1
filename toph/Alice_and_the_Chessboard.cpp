#include <bits/stdc++.h>
#define Team_blackslash return 0;
using namespace std;

int main()
{

    long long int cases;
    cin >> cases;

    while (cases--)
    {
        long long int r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;

        if (abs(r1 - r2) == abs(c1 - c2))
        {

            cout << "Yes" << endl;
        }

        else
        {
            cout << "No" << endl;
        }
    }
    Team_blackslash;
}