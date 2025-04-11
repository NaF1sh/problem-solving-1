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

int main()
{
    fastread(); // Use fast input/output

    ll n, s;
    cin >> n >> s;

    vector<ll> a(n);

    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (size_t i = 0; i < n - 1; i++)
    {
        s -= a[i];
    }
    if (s >= 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}