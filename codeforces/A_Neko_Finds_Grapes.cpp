#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, m;
    cin >> n >> m;

    ll odd_chests = 0, even_chests = 0;
    ll odd_keys = 0, even_keys = 0;

    // Count odd and even numbers in chests
    for (int i = 0; i < n; i++)
    {
        ll chest;
        cin >> chest;
        if (chest % 2 == 0)
            even_chests++;
        else
            odd_chests++;
    }

    // Count odd and even numbers in keys
    for (int i = 0; i < m; i++)
    {
        ll key;
        cin >> key;
        if (key % 2 == 0)
            even_keys++;
        else
            odd_keys++;
    }

    // Match odd chests with even keys and even chests with odd keys
    ll max_matches = min(odd_chests, even_keys) + min(even_chests, odd_keys);

    cout << max_matches << endl;

    return 0;
}
