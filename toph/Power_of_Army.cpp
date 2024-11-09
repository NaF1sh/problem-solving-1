#include <bits/stdc++.h>
#define Team_blackslash return 0;
using namespace std;

int main()
{
    long long int cases;
    cin >> cases;

    while (cases--)
    {
        long long int minArmy = LLONG_MAX;
        long long int maxArmy = LLONG_MIN;

        long long int t;
        cin >> t;
        while (t--)
        {
            long long int Army;
            cin >> Army;

            if (Army > maxArmy)
            {
                maxArmy = Army;
            }
            if (Army < minArmy)
            {
                minArmy = Army;
            }
        }
        cout << maxArmy - minArmy << endl;
    }

    Team_blackslash;
}
