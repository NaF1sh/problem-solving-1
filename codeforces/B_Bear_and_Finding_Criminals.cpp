#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    ll m, m1;
    cin >> m >> m1;

    vector<ll> a(m);
    for (size_t i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    m1--; // Convert 1-based index to 0-based
    ll count1 = 0;

    // Check the initial position
    if (a[m1] == 1)
    {
        count1++;
    }

    for (size_t i = 1; i < m; i++)
    {
        ll left = m1 - i;
        ll right = m1 + i;

        if (left >= 0 && right < m)
        {
            if (a[left] == 1 && a[right] == 1)
            {
                count1 += 2;
            }
        }
        else if (left >= 0)
        {
            if (a[left] == 1)
            {
                count1++;
            }
        }
        else if (right < m)
        {
            if (a[right] == 1)
            {
                count1++;
            }
        }
    }

    cout << count1 << '\n';
}

int main()
{
    fastread();
    solve();
    return 0;
}