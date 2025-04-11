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
    ll a, b;
    cin >> a >> b; // a = length of string, b = max operations

    map<char, ll> lowcase;
    map<char, ll> upcase;

    for (ll i = 0; i < a; i++)
    {
        char input;
        cin >> input;

        if (input >= 'a' && input <= 'z')
        {
            lowcase[input]++;
        }
        else
        {
            upcase[input]++;
        }
    }

    ll burles = 0;

    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        char upper = toupper(ch);

        ll min_pair = min(lowcase[ch], upcase[upper]);
        lowcase[ch] -= min_pair;
        upcase[upper] -= min_pair;
        burles += min_pair;

        ll left = lowcase[ch] + upcase[ch];
        ll possible_pair = left / 2;
        ll can_convert = min(possible_pair, b);
        b -= can_convert;
        burles += can_convert;
    }

    cout << burles << "\n";
}

int main()
{
    fastread();
    cases(n)
    {
        solve();
    }
}
