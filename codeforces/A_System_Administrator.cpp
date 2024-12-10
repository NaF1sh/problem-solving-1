#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    ll t;
    cin >> t;

    pair<int, int> a;
    pair<int, int> b;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n == 1)
        {
            ll a1;
            cin >> a1;
            a.first += a1;
            ll b1;
            cin >> b1;
            a.second += b1;
        }
        else
        {
            ll a2;
            cin >> a2;
            b.first += a2;
            ll b2;
            cin >> b2;
            b.second += b2;
        }
    }
    ll sumA = a.first + a.second;
    if (sumA / 2 <= a.first)
        cout << "LIVE";
    else
    {
        cout << "DEAD";
    }
    cout << endl;
    ll sumB = b.first + b.second;
    if (sumB / 2 <= b.first)
        cout << "LIVE";
    else
    {
        cout << "DEAD";
    }
}