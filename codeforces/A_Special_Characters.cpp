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
    cin >> m;

    if (m == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        string result;

        // Construct a string with exactly m special characters
        int special_count = 0;
        while (special_count < m)
        {
            // Add pairs to increase special character count
            if (special_count + 2 <= m)
            {
                result += "AA";
                special_count += 2;
            }
            else if (special_count + 1 <= m)
            {
                result += "A";
                special_count += 1;
            }

            // Alternate to another character to avoid exceeding the length of 200
            if (result.length() > 200)
                break;
        }

        // If the string is too long, truncate to fit within the length constraint
        if (result.length() > 200)
        {
            result = result.substr(0, 200);
        }

        cout << result << endl;
    }
}

int main()
{
    fastread();

    cases(n)
    {
        solve();
    }

    return 0;
}
