#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n, m;
    cin >> n >> m;

   
    ll min_val = min(n, m);
    ll gcd_factorial = 1;

    for (ll i = 1; i <= min_val; i++)
    {
        gcd_factorial *= i;
    }

    cout << gcd_factorial << endl;

    return 0;
}
