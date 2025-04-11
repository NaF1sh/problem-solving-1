#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define cases(t) \
    ll t;        \
    cin >> t;    \
    while (t--)
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

int main()
{
    fastread();
    cases(tc)
    {
        int num;
        cin >> num;

        if (num % 2 == 0)
        {
            cout << -1 << "\n";
            continue;
        }

        vector<int> pr(num);
        for (int i = 1; i <= num; i++)
        {
            pr[i - 1] = ((2 * (i - 1)) % num) + 1;
        }

        for (int i = 0; i < num; i++)
        {
            cout << pr[i] << (i + 1 == num ? "\n" : " ");
        }
    }

    return 0;
}
