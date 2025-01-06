#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{

    ll t;
    cin >> t;

    ll lopen = 0, lclose = 0, ropen = 0, rclose = 0;
    while (t--)
    {
        ll l, r;

        cin >> l >> r;
        if (l == 1)
        {
            lopen++;
        }
        else
        {
            lclose++;
        }
        if (r == 1)
        {
            ropen++;
        }
        else
        {
            rclose++;
        }
    }

    ll minl = min(lopen, lclose);
    ll minr = min(ropen, rclose);

    cout << minl + minr << endl;
}