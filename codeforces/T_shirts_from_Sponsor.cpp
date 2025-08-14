#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    vector<pair<string, ll>> a(5);
    a[0].first = "S";
    a[1].first = "M";
    a[2].first = "L";
    a[3].first = "XL";
    a[4].first = "XXL";

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i].second;
    }

    unordered_map<string, ll> a1;
    for (int i = 0; i < 5; i++)
    {
        if (a[i].second > 0)
        {
            a1[a[i].first] = a[i].second;
        }
    }

    map<string, vector<string>> preferences = {
        {"S", {"S", "M", "L", "XL", "XXL"}},
        {"M", {"M", "L", "S", "XL", "XXL"}},
        {"L", {"L", "XL", "M", "XXL", "S"}},
        {"XL", {"XL", "XXL", "L", "M", "S"}},
        {"XXL", {"XXL", "XL", "L", "M", "S"}}};

    ll q;
    cin >> q;

    while (q--)
    {
        string input;
        cin >> input;

        auto it = a1.find(input);
        if (it != a1.end())
        {
            cout << it->first << '\n';
            it->second--;
            if (it->second == 0)
                a1.erase(it);
        }
        else
        {

            for (const string &size : preferences[input])
            {
                auto alt = a1.find(size);
                if (alt != a1.end())
                {
                    cout << alt->first << '\n';
                    alt->second--;
                    if (alt->second == 0)
                        a1.erase(alt);
                    break;
                }
            }
        }
    }
}

int main()
{
    fastread();
    solve();
}