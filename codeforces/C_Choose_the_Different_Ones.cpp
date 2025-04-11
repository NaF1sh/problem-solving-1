#include <iostream>
#include <vector>
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
    ll n, m, k;
    cin >> n >> m >> k;

    vector<ll> a(n), b(m);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll j = 0; j < m; j++)
    {
        cin >> b[j];
    }

    vector<bool> hasA(k + 1, false), hasB(k + 1, false);

    for (ll i = 0; i < n; i++)
    {
        if (a[i] >= 1 && a[i] <= k)
            hasA[a[i]] = true;
    }

    for (ll j = 0; j < m; j++)
    {
        if (b[j] >= 1 && b[j] <= k)
            hasB[b[j]] = true;
    }

    ll forcedA = 0, forcedB = 0, common = 0;

    for (ll i = 1; i <= k; i++)
    {
        bool inA = hasA[i];
        bool inB = hasB[i];
        if (!inA && !inB)
        {

            cout << "NO" << "\n";
            return;
        }
        else if (inA && !inB)
        {
            forcedA++;
        }
        else if (!inA && inB)
        {
            forcedB++;
        }
        else
        {

            common++;
        }
    }

    if (forcedA > k / 2 || forcedB > k / 2)
    {
        cout << "NO" << "\n";
        return;
    }

    cout << "YES" << "\n";
}

int main()
{
    fastread();
    cases(t)
    {
        solve();
    }
    return 0;
}
