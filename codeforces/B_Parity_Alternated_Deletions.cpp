#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Separate the elements based on their parity
    vector<ll> even, odd;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even.push_back(a[i]);
        }
        else
        {
            odd.push_back(a[i]);
        }
    }

    // Calculate the sum of all elements
    ll total_sum = accumulate(a.begin(), a.end(), 0LL);

    // If all numbers are even or all are odd, Polycarp can only delete one element
    if (even.size() == 0 || odd.size() == 0)
    {
        cout << total_sum - *min_element(a.begin(), a.end()) << endl;
        return 0;
    }

    // If there are both even and odd numbers
    ll min_even = *min_element(even.begin(), even.end());
    ll min_odd = *min_element(odd.begin(), odd.end());

    // Remaining sum after optimal deletions
    ll remaining_sum = total_sum - min_even - min_odd;

    cout << remaining_sum << endl;

    return 0;
}
