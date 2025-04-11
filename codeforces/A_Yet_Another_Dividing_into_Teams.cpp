#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)

int main()
{
    cases(n)
    {
        ll n1;
        cin >> n1;

        vector<int> groups(n1);
        for (ll i = 0; i < n1; i++)
        {
            cin >> groups[i];
        }

        sort(groups.begin(), groups.end());

        bool has_adjacent = false;
        for (int i = 1; i < n1; i++)
        {
            if (groups[i] - groups[i - 1] == 1)
            {
                has_adjacent = true;
                break;
            }
        }

        if (has_adjacent)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    return 0;
}