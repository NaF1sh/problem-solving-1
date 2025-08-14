#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        bool possible = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == b[i])
            {

                continue;
            }
            else if ((a[i] ^ a[i + 1]) == b[i])
            {

                a[i] = a[i] ^ a[i + 1];
            }
            else
            {
                possible = false;
                break;
            }
        }

        if (possible && a[n - 1] == b[n - 1])
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
