#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n, k;

    cin >> n >> k;

    ll num_odds = (n + 1) / 2;

    if (k <= num_odds)
    {

        cout << 2 * k - 1 << endl;
    }
    else
    {

        cout << 2 * (k - num_odds) << endl;
    }

    return 0;
}
