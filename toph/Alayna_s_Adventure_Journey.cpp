#include <bits/stdc++.h>
#define Team_blackslash return 0;
#define ll long long

using namespace std;

int main()
{
    ll int cases;
    ll int max1 = 0;
    cin >> cases;

    while (cases--)
    {
        ll int g;
        cin >> g;

        if (max1 < g)
            max1 = g;
    }
    cout << max1;
}