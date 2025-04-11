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
    fastread();
    cases(t)
    {
        ll m;
        cin >> m;

        ll min1 = LLONG_MAX;
        ll max1 = LLONG_MIN;
        ll mini = 0;
        ll maxi = 0;
        vector<ll> a(m);

        for (size_t i = 0; i < m; i++)
        {
            cin >> a[i];
            if (a[i] < min1)
            {
                min1 = a[i];
                mini = i;
            }
            if (a[i] > max1)
            {
                max1 = a[i];
                maxi = i;
            }
        }

        ll left_most = min(mini, maxi);
        ll right_most = max(mini, maxi);

        ll option1 = right_most + 1;
        ll option2 = m - left_most;
        ll option3 = left_most + 1 + (m - right_most);

        ll result = min({option1, option2, option3});

        cout << result << endl;
    }
    return 0;
}