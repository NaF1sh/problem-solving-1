#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    string a;
    cin >> a;

    if (a.empty())
    {
        cout << '\n';
        return;
    }

    map<char, ll> a1;
    for (char c : a)
    {
        a1[c]++;
    }

    char chari = 0;
    ll maxi = 0;
    for (const auto &pair : a1)
    {
        if (pair.first > chari)
        {
            chari = pair.first;
            maxi = pair.second;
        }
    }

    while (maxi--)
    {
        cout << chari;
    }
    cout << '\n';
}

int main()
{
    fastread();
    solve();
}
