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
    map<char, ll> a;
    string a_;
    cin >> a_;

    if (m == 1)
    {
        cout << a_ << endl;
        return;
    }

    for (size_t i = 0; i < m; i++)
    {
        a[a_[i]]++;
    }

    ll min1 = LONG_LONG_MAX;
    char minchar;
    ll max1 = LONG_LONG_MIN;
    char maxchar;
    for (const auto &pair : a)
    {
        if (pair.second < min1)
        {
            min1 = pair.second;
            minchar = pair.first;
        }
        if (pair.second > max1 || (pair.second == max1 && pair.first > maxchar))
        {
            max1 = pair.second;
            maxchar = pair.first;
        }
    }

    if (min1 == 1 && max1 == 1)
    {
        a_[0] = a_[1];
    }

    else if (min1 == max1)
    {
        for (size_t i = 0; i < m; i++)
        {
            if (a_[i] != maxchar)
            {
                a_[i] = maxchar;
                break;
            }
        }
    }

    else
    {
        for (size_t i = 0; i < m; i++)
        {
            if (a_[i] == minchar)
            {
                a_[i] = maxchar;
                break;
            }
        }
    }

    cout << a_ << endl;
}

int main()
{
    fastread();
    cases(n)
    {
        solve();
    }
}