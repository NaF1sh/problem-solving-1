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

    cases(n)
    {

        ll m;
        cin >> m;
        vector<int> a(m);
        for (int i = 0; i < m; i++)
            cin >> a[i];

        sort(a.begin(), a.end());
        ll maxc = 0;
        ll count = 0;
        for (int i = 0; i < m - 1; i++)
        {
            if (a[i] > a[i + 1])
            {

                count++;
            }
            else
            {
                maxc = max(maxc, count);
                count = 0;
            }
        }
        cout << maxc << endl;
    }
}