#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    cin >> num;
    if (num == 1)
    {
        cout << "1";
        return 0;
    }
    int max = LLONG_MIN;
    int n = 0;

    for (int i = 1; i <= num; i++)
    {
        int count = 0;
        if (i % 2 == 0)
        {
            int num1 = i;
            while (num1 % 2 == 0)
            {
                num1 /= 2;
                count++;
            }
            if (count > max)
            {
                max = count;
                n = i;
            }
        }
    }
    cout << n;
    return 0;
}