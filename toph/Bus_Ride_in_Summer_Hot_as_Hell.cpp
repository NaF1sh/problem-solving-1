#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll int cases;
    cin >> cases;

    for (int i = 1; i <= cases; i++)
    {
        ll int t;
        cin >> t;
        ll int sum = 0;
        int count = 1;
        int max = 0;
        while (t--)

        {
            ll int in;
            ll int out;
            cin >> in >> out;

            sum -= out;

            if (sum > 0)
            {
                count++;
            }
            if (max < count)
            {
                max = count;
            }
            sum += in;
        }
        cout << "Case " << i << ": " << max << endl;
    }
}