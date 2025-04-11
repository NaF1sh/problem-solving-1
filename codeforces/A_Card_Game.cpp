#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

int main()
{
    fastread();
    cases(n)
    {
        ll t, k1, k2;
        cin >> t >> k1 >> k2;

        vector<ll> player1(k1);
        vector<ll> player2(k2);

        for (size_t i = 0; i < k1; i++)
        {
            cin >> player1[i];
        }

        for (size_t i = 0; i < k2; i++)
        {
            cin >> player2[i];
        }

        sort(player1.rbegin(), player1.rend());
        sort(player2.rbegin(), player2.rend());

        while (!player1.empty() && !player2.empty())
        {
            if (player1[0] > player2[0])
            {
                player1.push_back(player2[0]);
                player2.erase(player2.begin());
                sort(player1.rbegin(), player1.rend());
            }
            else if (player1[0] < player2[0])
            {
                player2.push_back(player1[0]);
                player1.erase(player1.begin());
                sort(player2.rbegin(), player2.rend());
            }
        }

        if (player1.empty())
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
        cout << endl;
    }
    return 0;
}
