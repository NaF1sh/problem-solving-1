#include <bits/stdc++.h>
#define Team_blackslash return 0;
using namespace std;

int main()
{
    long long int cases;
    cin >> cases;

    for (int i = 1; i <= cases; i++)
    {
        long long A, B, C;
        cin >> A >> B >> C;

        long long int max1 = max({A, B, C});

        if ((max1 == A && max1 == B) || (max1 == A && max1 == C) || (max1 == B && max1 == C))
        {
            cout << "Case " << i << ": " << "Confused" << endl;
        }
        else if (max1 == A)
        {
            cout << "Case " << i << ": " << "A" << endl;
        }
        else if (max1 == B)
        {
            cout << "Case " << i << ": " << "B" << endl;
        }
        else if (max1 == C)
        {
            cout << "Case " << i << ": " << "C" << endl;
        }
    }

    Team_blackslash;
}
