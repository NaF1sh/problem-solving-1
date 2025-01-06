#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    int array[t];
    ll max1 = numeric_limits<long long>::min();
    ll maxi = 0;
    ll mini = 0;
    ll min1 = numeric_limits<long long>::max();

    for (int i = 0; i < t; i++)
    {
        cin >> array[i];
        if (array[i] > max1)
        {
            max1 = array[i];
            maxi = i;
        }
        if (array[i] <= min1)
        {
            min1 = array[i];
            mini = i;
        }
    }

    ll gcount = 0;

    gcount += maxi;

    if (mini > maxi)
    {
        gcount += (t - 1 - mini);
    }
    else
    {
        gcount += (t - 1 - mini - 1);
    }

    cout << gcount << endl;

    return 0;
}
