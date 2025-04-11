#include <bits/stdc++.h>
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
    ll m;
    cin >> m;

    vector<ll> a1(m - 1);
    vector<ll> a2(m);

    for (size_t i = 0; i < m - 1; i++)
    {
        cin >> a1[i];
    }

    // Initialize a2[0]
    a2[0] = a1[0] + 1;

    // Construct the rest of the array
    for (size_t i = 1; i < m; i++)
    {
        if (a1[i - 1] < a2[i - 1])
        {
            a2[i] = a2[i - 1] + a1[i - 1];
        }
        else
        {
            a2[i] = (a2[i - 1] * 2) + a1[i - 1]; // Ensure it's large enough
        }
    }

    // Output the array
    for (auto p : a2)
    {
        cout << p << " ";
    }
    cout << endl;
}

int main()
{
    fastread();
    cases(n)
    {
        solve();
    }
}
