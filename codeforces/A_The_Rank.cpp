#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int q;
    cin >> q;
    vector<pair<ll, int>> table;

    for (int i = 0; i < q; i++)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll sum = a + b + c + d;
        table.push_back(make_pair(sum, i + 1));
    }

    sort(table.begin(), table.end(), [](const pair<ll, int> &p1, const pair<ll, int> &p2)
         {
        if (p1.first == p2.first) {
            return p1.second < p2.second;
        }
        return p1.first > p2.first; });

    for (int i = 0; i < table.size(); i++)
    {
        if (table[i].second == 1)
        {
            cout << (i + 1) << endl;
            break;
        }
    }

    return 0;
}
