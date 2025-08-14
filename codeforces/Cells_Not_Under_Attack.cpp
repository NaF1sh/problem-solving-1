#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

int main()
{
    fastread();

    ll n, m;
    cin >> n >> m;

    unordered_set<ll> used_rows, used_cols;

    ll total_cells = n * n;
    ll attacked = 0;

    for (ll i = 0; i < m; i++)
    {
        ll x, y;
        cin >> x >> y;

        bool new_row = !used_rows.count(x);
        bool new_col = !used_cols.count(y);

        if (new_row)
            used_rows.insert(x);
        if (new_col)
            used_cols.insert(y);

        ll r = used_rows.size();
        ll c = used_cols.size();

        attacked = r * n + c * n - r * c;
        cout << (n * n - attacked) << " ";
    }

    cout << '\n';
    return 0;
}
