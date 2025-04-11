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
    multiset<ll> a;
    ll sum = 0;
    for (ll i = 0; i < m; i++)
    {
        ll a1;
        cin >> a1;
        if (a1 == 0)
        {
            if (!a.empty()) // Check if the multiset is not empty
            {
                auto largest = *a.rbegin(); // Get the largest value
                sum += largest;             // Add the largest value to the sum
                a.erase(a.find(largest));   // Remove the largest value from the multiset
            }
        }
        else
        {
            a.insert(a1); // Insert the value into the multiset
        }
    }
    cout << sum << endl; // Output the sum
}
int main()
{
    fastread();
    cases(n)
    {
        solve();
    }
}
