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

    string input;
    cin >> input;
    ll count = 0;

    for (ll i = 0; i <= input.size() - 3; ++i)
    {
        if (input.substr(i, 3) == "xxx")
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
