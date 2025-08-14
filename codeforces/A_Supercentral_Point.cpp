#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define cases \
    ll n;     \
    cin >> n; \
    while (n--)
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    ll m;
    cin >> m;

    vector<pair<ll, ll>> a(m); // Use m instead of hardcoded 8
    for (size_t i = 0; i < m; i++)
    {
        cin >> a[i].first >> a[i].second;
    }

    vector<pair<ll, ll>> ans;
    for (size_t i = 0; i < m; i++)
    {
        bool r = false, l = false, lower = false, upper = false;
        for (size_t j = 0; j < m; j++)
        {
            if (i != j)
            {
                if (a[j].first > a[i].first && a[j].second == a[i].second)
                {
                    r = true;
                }
                else if (a[j].first < a[i].first && a[j].second == a[i].second)
                {
                    l = true;
                }
                else if (a[j].first == a[i].first && a[j].second < a[i].second)
                {
                    lower = true;
                }
                else if (a[j].first == a[i].first && a[j].second > a[i].second)
                {
                    upper = true;
                }
            }
        }
        if (r && l && lower && upper)
            ans.push_back(a[i]);
    }

    cout << ans.size() << endl;

    // Uncomment this if you want to print the supercentral points
    // for (size_t i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i].first << " " << ans[i].second << endl;
    // }
}

int main()
{
    fastread();
    solve();
    return 0;
}