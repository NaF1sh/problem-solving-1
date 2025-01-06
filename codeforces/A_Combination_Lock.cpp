#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{

    ll t;
    cin >> t;

    string string1;
    cin >> string1;
    string string2;
    cin >> string2;

    ll sum = 0;

    for (int i = 0; i < t; i++)
    {

        ll o = string1[i] - '0';
        ll t = string2[i] - '0';

        ll difference = abs(o - t);

        sum += min(difference, 10 - difference);
    }
    cout << sum;
}