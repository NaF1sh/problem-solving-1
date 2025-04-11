#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n, m;
    cin >> n >> m;

    vector<ll> unit(n);

    for (size_t i = 0; i < n; i++)
    {
        cin >> unit[i];
    }

    ll count = 0;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = i + 1; j < n; j++)
        {
            if (abs(unit[i] - unit[j]) <= m)
            {
                count++;
            }
        }
    }

    cout << count * 2 << endl;
    return 0;
}