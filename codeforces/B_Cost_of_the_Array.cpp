#include <bits/stdc++.h>
using namespace std;

#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    if (n == k)
    {
        int res = -1;
        for (int i = 2; i <= n; i += 2)
        {
            if (arr[i] != i / 2)
            {
                res = i / 2;
                break;
            }
        }

        if (res == -1)
        {
            res = n / 2 + 1;
        }
        cout << res << endl;
    }
    else
    {
        int pos = -1;
        for (int i = 2; i <= n - k + 2; i++)
        {
            if (arr[i] != 1)
            {
                pos = i;
                break;
            }
        }

        if (pos == -1)
        {
            int cnt = 2;
            for (int i = n - k + 1; i <= n; i += 2)
            {
                if (arr[i] != cnt)
                {
                    break;
                }
                cnt++;
            }
            cout << cnt << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
}

int main()
{
    fastread();

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}