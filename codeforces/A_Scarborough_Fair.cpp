#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n, m;
    cin >> n >> m;

    string input;
    cin >> input;

    while (m--)
    {
        ll l, r;
        char c1, c2;
        cin >> l >> r >> c1 >> c2;

        for (ll i = l - 1; i < r; i++) // Convert 1-indexed to 0-indexed
        {
            if (input[i] == c1)
            {
                input[i] = c2;
            }
        }
    }

    cout << input << endl;

    return 0;
}
