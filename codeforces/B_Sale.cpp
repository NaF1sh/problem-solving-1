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
    ll a, b;
    cin >> a >> b;

    vector<ll> a1(a);

    for (size_t i = 0; i < a; i++)
    {
        cin >> a1[i];
    }
    sort(a1.begin(), a1.end());
    ll sum = 0;
    for (size_t i = 0; i < a; i++)
    {

        if (a1[i] < 0 && b > 0)
        {
            sum += abs(a1[i]);
            b--;
        }
    }
    cout << sum;
}

int main()
{
    fastread();

    solve();
}
