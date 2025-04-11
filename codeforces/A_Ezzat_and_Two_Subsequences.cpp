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
    cases(n)
    {
        double m;
        cin >> m;
        vector<double> a(m);
        double sum = 0;
        for (ll i = 0; i < m; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        sort(a.begin(), a.end());

        sum -= a[m - 1];

        double sum1 = ((sum) / (m - 1));

        cout << fixed << setprecision(9) << sum1 + a[m - 1] << endl;
    }
}