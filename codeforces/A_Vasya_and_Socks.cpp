#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll a, b;
    cin >> a >> b;

    ll count1 = 0, count2 = 0;
    while (a--)
    {
        count1++;
        count2++;
        if (count2 == b)
        {
            count2 = 0;
            a++;
        }
    }
    cout << count1;
}