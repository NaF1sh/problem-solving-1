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
    string s;
    cin >> s;

    bool all_upper = true;
    bool all_except_first_upper = true;

    for (int i = 0; i < s.size(); i++)
    {
        if (!isupper(s[i]))
        {
            all_upper = false;
        }
        if (i == 0 && !islower(s[i]))
        {
            all_except_first_upper = false;
        }
        if (i > 0 && !isupper(s[i]))
        {
            all_except_first_upper = false;
        }
    }

    if (all_upper || all_except_first_upper)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (islower(s[i]))
            {
                s[i] = toupper(s[i]);
            }
            else
            {
                s[i] = tolower(s[i]);
            }
        }
    }

    cout << s << endl;
}

int main()
{
    fastread();

    solve();
}
