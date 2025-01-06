#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n;
    cin >> n;

    ll sum;
    if (n % 2 == 0)
    {
        sum = n / 2;
    }
    else
    {
        sum = -(n / 2 + 1);
    }
    cout << sum;
}