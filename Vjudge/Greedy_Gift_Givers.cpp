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

void solve()
{
    ll m;
    bool first = true;
    while (cin >> m)
    {
        if (!first)
            cout << '\n';
        first = false;

        map<string, ll> balances;
        vector<string> names(m);

        for (size_t i = 0; i < m; i++)
        {
            cin >> names[i];
            balances[names[i]] = 0;
        }

        for (size_t i = 0; i < m; i++)
        {
            string giver;
            ll amount, numRecipients;
            cin >> giver >> amount >> numRecipients;

            if (numRecipients > 0)
            {
                ll giftAmount = amount / numRecipients;
                ll remainder = amount % numRecipients;
                balances[giver] -= (amount - remainder);

                for (size_t j = 0; j < numRecipients; j++)
                {
                    string recipient;
                    cin >> recipient;
                    balances[recipient] += giftAmount;
                }
            }
        }

        for (const auto &name : names)
        {
            cout << name << " " << balances[name] << '\n';
        }
    }
}

int main()
{
    fastread();
    solve();
    return 0;
}