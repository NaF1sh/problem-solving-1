#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    ll m;
    cin >> m;

    ll low = -2e9;
    ll high = 2e9;

    while (m--)
    {
        string sign;
        ll x;
        char ans;
        cin >> sign >> x >> ans;

        // Flip condition if answer is 'N'
        if (ans == 'N')
        {
            if (sign == ">=")
                sign = "<";
            else if (sign == ">")
                sign = "<=";
            else if (sign == "<=")
                sign = ">";
            else if (sign == "<")
                sign = ">=";
        }

        // Apply 'Y' condition
        if (sign == ">=")
        {
            low = max(low, x);
        }
        else if (sign == ">")
        {
            low = max(low, x + 1);
        }
        else if (sign == "<=")
        {
            high = min(high, x);
        }
        else if (sign == "<")
        {
            high = min(high, x - 1);
        }
    }

    if (low <= high)
    {
        cout << low << "\n"; // any number in [low, high] is valid
    }
    else
    {
        cout << "Impossible\n";
    }
}

int main()
{
    fastread();
    solve();
}
