#include <bits/stdc++.h>
using namespace std;

#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

typedef long long int ll;

#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)

void solve()
{
    int n;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int mn1 = INT_MAX;
    int mn2 = INT_MAX;
    int ind1 = -1, ind2 = -1;
    for (int i = 0; i < n; i += 2)
    {
        if (ar[i] < mn1)
        {
            mn1 = ar[i];
            ind1 = i;
        }
        if (i + 1 < n && ar[i + 1] < mn2)
        {
            mn2 = ar[i + 1];
            ind2 = i + 1;
        }
    }
    if (n % 2 == 1)
    {
        cout << "Mike" << endl;
    }
    else
    {
        if (mn1 == mn2)
        {
            if (ind1 < ind2)
            {
                cout << "Joe" << endl;
            }
            else
            {
                cout << "Mike" << endl;
            }
        }
        else if (mn1 < mn2)
        {
            cout << "Joe" << endl;
        }
        else
        {
            cout << "Mike" << endl;
        }
    }
}

int main()
{
    faster;
    cases(t)
    {
        solve();
    }
    return 0;
}