#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    long long int c;

    cin >> n >> c;
    long long int countm = 1;
    long long int count = 0;
    for (int i = 0; i < n; i++)
    {
        long long int x;
        cin >> x;

        if (i == 0)
        {
            count = x;
        }
        if (i >= 0 && x - count >= c)

        {
            count = x;
            countm++;
        }
    }
    cout << countm;
}