#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int m;
    scanf("%d", &m);

    vector<pair<int, int>> a(m);

    for (int i = 0; i < m; ++i)
    {
        scanf("%d %d", &a[i].first, &a[i].second);
    }

    sort(a.begin(), a.end(), [](pair<int, int> a, pair<int, int> b)
         { return (a.first < b.first) || (a.first == b.first && a.second > b.second); });

    for (const auto &pair : a)
    {
        printf("%d %d\n", pair.first, pair.second);
    }
    //
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }
    return 0;
}
