#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cases;
    cin >> cases;

    while (cases--)
    {
        int n, a;
        cin >> n >> a;

        vector<int> gas_s(n + 1);
        gas_s[0] = 0;

        for (int i = 1; i <= n; i++)
        {
            cin >> gas_s[i];
        }

        int min_val = INT_MIN;

        int last_d = 2 * (a - gas_s[n]);

        for (int i = 0; i < n; i++)
        {
            min_val = max(gas_s[i + 1] - gas_s[i], min_val);
        }
        min_val = max(min_val, last_d);

        cout << min_val << endl;
    }

    return 0;
}
