#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)
int main()
{

    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll Misha = max((3 * a) / 10, (a - (a / 250) * c));
    ll Vasya = max((3 * b) / 10, (b - (b / 250) * d));

    if (Vasya > Misha)
    {

        cout << "Vasya";
    }
    else if (Vasya < Misha)
    {

        cout << " Misha";
    }
    if (Vasya == Misha)
    {

        cout << "Tie";
    }
}