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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    ll left = 0;
    ll right = n - 1;
    ll count = 0;

    while (left < right)
    {
        ll sum = a[left] + a[right];
        if (sum == k)
        {
            count++;
            left++;
            right--;
        }
        else if (sum < k)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    cout << count << endl;
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
//