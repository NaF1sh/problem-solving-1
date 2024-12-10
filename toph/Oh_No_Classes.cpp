#include <bits/stdc++.h>
#define Team_blackslash return 0;
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int tC = 1; tC <= t; tC++)
    {
        int a1, b1, a2, b2, a3, b3;
        cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
        int maxM = max(max(b1, b2), b3);
        int minM = min(min(a1, a2), a3);
        int hours = 0;
        for (int i = minM; i <= maxM; i++)
        {
            if (a1 <= i && i <= b1)
                hours++;
            else if (a2 <= i && i <= b2)
                hours++;
            else if (a3 <= i && i <= b3)
                hours++;
        }
        cout << hours << endl;
    }
    Team_blackslash;
}
