#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll k;
    ll n;
    ll w;

    cin >> k >> n >> w;
    ll tmn = 0;
    ll i = 1;
    while (w--)
    {
        tmn = tmn + i * k;

        i++;
    }
    if (tmn <= n)
    {
        cout << "0";
    }
    else
        cout << tmn - n;
}