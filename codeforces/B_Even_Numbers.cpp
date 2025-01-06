#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)

int main()
{

    ll n;
    cin >> n;
    if (n == 1)
        cout << "-1";
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
                cout << i << endl;
        }
    }
}