#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, t1;
    cin >> t >> t1;
    int ans = 0;
    int count = 0;

    if (t1 == 1)
    {
        cout << 0;
    }
    else
    {
        while (1)
        {

            if (ans + t >= t1)
                ans = ans + t;

            else
            {
                ans = ans + (t - 1);
            }
            count++;
            if (ans >= t1)
            {
                break;
            }
        }

        cout << count;
    }
}
