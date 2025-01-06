#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)

int main()
{

    ll k;

    cin >> k;

    string input;
    cin >> input;
    ll count1 = 0;
    ll count0;

    for (char c : input)
    {

        if (c == '1')
        {
            count1++;
        }
        else
        {
            count0++;
        }
    }

    ll min01 = min(count0, count1);

    min01 = min01 * 2;

    cout << input.size() - min01;
}