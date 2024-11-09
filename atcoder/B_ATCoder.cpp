#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;

    cin >> s;
    int count = 0;
    int max1 = 0;
    for (char a : s)
    {

        if (a == 'A' || a == 'C' || a == 'G' || a == 'T')
        {
            count++;
            max1 = max(count, max1);
        }
        else
        {
            count = 0;
        }
    }
    cout << max1;
}