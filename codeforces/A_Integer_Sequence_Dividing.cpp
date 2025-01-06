#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)

int main()
{

    ll n;
    cin >> n;

    
    ll S = n * (n + 1) / 2;

    
    if (S % 2 == 0)
        cout << "0";
    else
        cout << "1";

    return 0;
}
