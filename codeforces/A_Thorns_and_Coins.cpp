#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;
        int count = 0;
        char cell[n];

        for (int i = 0; i < n; i++)
        {
            cin >> cell[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (cell[i] == '@')
            {
                count++;
            }
            else if (cell[i] == '*' && cell[i + 1] == '*')
            {
                break;
            }
        }
        cout << count << endl;
    }
}