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
    ll a;
    cin >> a;
    vector<ll> array1(a);
    ll sum = 0;

    for (size_t i = 0; i < a; i++)
    {
        cin >> array1[i];
        sum += array1[i];
    }

    if (sum % 2 == 0)
    {
        cout << sum << endl;
    }
    else
    {
        sort(array1.begin(), array1.end());
        for (size_t i = 0; i < a; i++)
        {
            if (array1[i] % 2 != 0)
            {
                sum -= array1[i];
                break;
            }
        }
        cout << sum << endl;
    }
}

int main()
{
    fastread();

    solve();

    return 0;
}