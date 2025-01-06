#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n;
    cin >> n;
    ll a[n];
    bool flag1 = true;
    bool flag0 = true;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] != 1)
            flag1 = false;
        if (a[i] != 0)
            flag0 = false;
    }
    if (flag1)
    {
        cout << n * 2;
        return 0;
    }
    if (flag0)
    {
        cout << 0;
        return 0;
    }
    ll count = 0;

    if (a[0] == 1 && a[n - 1] == 1)
    {
        ll i = 0;
        while (i < n && a[i] == 1)
        {
            count++;
            i++;
        }
        ll j = n - 1;
        while (j >= 0 && a[j] == 1)
        {
            count++;
            j--;
        }
        ll max_count = 0;
        ll current_count = 0;
        for (int k = i; k <= j; k++)
        {
            if (a[k] == 1)
            {
                current_count++;
            }
            else
            {
                max_count = max(max_count, current_count);
                current_count = 0;
            }
        }
        max_count = max(max_count, current_count);
        cout << max(max_count, count);
        return 0;
    }

    ll max_count = 0;
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            count++;
        }
        else
        {
            max_count = max(max_count, count);
            count = 0;
        }
    }
    max_count = max(max_count, count);
    cout << max_count;
}
