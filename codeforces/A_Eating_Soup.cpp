#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n, m;
    cin >> n >> m;

    // When there are no remaining cats, there can't be any groups
    if (m >= n)
    {
        cout << n - 1 << endl; // Maximum groups cannot exceed number of cats - 1
        return 0;
    }

    // Remaining cats
    ll remaining = n - m;

    // Maximum number of groups is the smaller of the leaving cats or remaining cats
    cout << min(m, remaining) << endl;

    return 0;
}
