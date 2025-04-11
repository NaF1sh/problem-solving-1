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

    ll n;
    cin >> n;

    vector<ll> a(n);

    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll sum1 = 0;
    ll sum2 = 0;

    bool s_turn = true;

    ll left = 0;
    ll right = n - 1;
    while (left <= right)
    {
        if (s_turn)
        {
            if (a[left] >= a[right])
            {
                sum1 += a[left];
                left++;
            }
            else
            {
                sum1 += a[right];
                right--;
            }
        }
        else
        {
            if (a[left] >= a[right])
            {
                sum2 += a[left];
                left++;
            }
            else
            {
                sum2 += a[right];
                right--;
            }
        }
        s_turn = !s_turn;
    }

    cout << sum1 << " " << sum2;
    return 0;
}
