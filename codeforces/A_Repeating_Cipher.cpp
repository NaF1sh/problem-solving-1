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
    int count = 0;
    for (int i = 1; count < n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            count++;
            char c;
            cin >> c;
            if (j == 1)
            {

                cout << c;
            }
        }
    }
}