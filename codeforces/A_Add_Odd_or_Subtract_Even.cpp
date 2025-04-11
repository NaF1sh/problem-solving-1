#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << 0 << endl;
            continue;
        }
        if ((a % 2) == 0)
        {
            if ((b % 2) == 0)
            {
                if (a > b)
                    cout << 1;
                else
                    cout << 2;
            }
            else
            {
                if (a < b)
                    cout << 1;
                else
                    cout << 2;
            }
        }
        else
        {
            if ((b % 2) == 0)
            {
                if (a < b)
                    cout << 1;
                else
                    cout << 2;
            }
            else
            {
                if (a > b)
                    cout << 1;
                else
                    cout << 2;
            }
        }
        cout << endl;
    }
    return 0;
}