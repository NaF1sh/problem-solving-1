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

bool isUniversal(const string &s)
{
    int n = s.size();
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - 1 - i])
            return s[i] < s[n - 1 - i];
    }
    return false;
}

int main()
{
    fastread();
    cases(t)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

                if (n == 1 || all_of(s.begin(), s.end(), [&](char c)
                             { return c == s[0]; }))
        {
            cout << "NO\n";
            continue;
        }

        if (isUniversal(s) || k > 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
