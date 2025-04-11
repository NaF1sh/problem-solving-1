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

    ll n;
    cin >> n;
    ll a[n];
    ll min1 = LLONG_MAX;
    ll max1 = LLONG_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < min1)
        {
            min1 = a[i];
        }
        if (a[i] > max1)
        {
            max1 = a[i];
        }
    }
    ll count = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (a[i] > min1 && a[i] < max1)
            count++;
    }
    cout << count;
}

int main()
{
    fastread();
    solve();
}