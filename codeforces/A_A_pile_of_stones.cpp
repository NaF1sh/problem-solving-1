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

    string s;
    cin >> s;
    ll count = 0;
    for (char c : s)
    {

        if (c == '+')
        {
            count++;
        }
        else if (c == '-' && count > 0)
        {
            count--;
        }
    }
    cout << count;
}