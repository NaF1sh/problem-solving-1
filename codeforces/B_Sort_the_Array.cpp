#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    ll m;
    cin >> m;

    vector<ll> a(m), sorted_a(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> a[i];
        sorted_a[i] = a[i];
    }

    // Sort the array to compare with the original
    sort(sorted_a.begin(), sorted_a.end());

    // Find the first and last mismatched indices
    ll l = 0, r = m - 1;
    while (l < m && a[l] == sorted_a[l])
        l++;
    while (r >= 0 && a[r] == sorted_a[r])
        r--;

    // If the array is already sorted
    if (l >= r)
    {
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
        return;
    }

    // Reverse the subarray and check if it sorts the array
    reverse(a.begin() + l, a.begin() + r + 1);
    if (a == sorted_a)
    {
        cout << "yes" << endl;
        cout << l + 1 << " " << r + 1 << endl; // Output 1-based indices
    }
    else
    {
        cout << "no" << endl;
    }
}

int main()
{
    fastread();
    solve();
    return 0;
}