#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    vector<pair<int, int>> chapter;
    for (int i = 0; i < n; i++)
    {
        ll p, q;
        cin >> p >> q;
        chapter.emplace_back(p, q);
    }

    ll m;
    cin >> m;
    ll count = 0;

    for (const auto &ch : chapter)
    {
        if (ch.second >= m)
        {
            count++;
        }
    }

    cout << count;
    return 0;
}
