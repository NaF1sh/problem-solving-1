#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    ll n;
    cin >> n;

    map<ll, ll, greater<ll>> freq; 
    for (ll i = 0; i < n; i++)
    {
        ll r;
        cin >> r;
        freq[r]++;
    }

    vector<tuple<ll, ll, ll>> snowmen; 

    while (freq.size() >= 3)
    {
        
        auto it1 = freq.begin();
        auto it2 = next(it1);
        auto it3 = next(it2);

        ll a1 = it1->first;
        ll a2 = it2->first;
        ll a3 = it3->first;

     
        snowmen.push_back({a1, a2, a3});

        
        if (--freq[a1] == 0)
            freq.erase(a1);
        if (--freq[a2] == 0)
            freq.erase(a2);
        if (--freq[a3] == 0)
            freq.erase(a3);
    }

    cout << snowmen.size() << endl;
    for (auto &[x, y, z] : snowmen)
    {
        cout << x << " " << y << " " << z << endl;
    }
}

int main()
{
    fastread();
    solve();
    return 0;
}