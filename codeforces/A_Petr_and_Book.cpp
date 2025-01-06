#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)

int main()
{
    int n;
    cin >> n;
    int array[7];

    for (int i = 0; i < 7; i++)
    {
        cin >> array[i];
    }

    ll sum = 0;
    int last_i = 0;
    bool found = false;

    while (sum < n)
    {
        for (int i = 0; i < 7; i++)
        {
            sum += array[i];
            last_i = i;
            if (sum >= n)
            {
                found = true;
                break;
            }
        }
    }

    cout << last_i + 1 << endl;
    return 0;
}
