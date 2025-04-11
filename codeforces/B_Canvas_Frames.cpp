#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n;
    cin >> n;

    map<ll, ll> m;
    for (ll i = 0; i < n; ++i)
    {
        ll input;
        cin >> input;
        m[input]++;
    }

    ll count = 0;
    for (auto &pair : m)
    {
        count += pair.second / 2;
    }

    cout << count / 2 << endl;
}