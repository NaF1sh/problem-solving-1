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
    ll m, k;
    cin >> m >> k;

    ll candies_per_person = m / k;
    ll extra_candies = m % k;

    ll max_candies = candies_per_person * k + min(extra_candies, k / 2);

    cout << max_candies << endl;
}

int main()
{
    fastread();

    cases(n)
    {
        solve();
    }
    return 0;
}