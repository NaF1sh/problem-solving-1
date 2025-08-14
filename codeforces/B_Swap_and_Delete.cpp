#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define cases(t) \
    ll t;        \
    cin >> t;    \
    while (t--)
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

int main()
{
    fastread();
    cases(t)
    {
        string str;
        cin >> str;
        ll one = 0, zero = 0;

        for (char ch : str)
        {
            if (ch == '1')
                one++;
            else
                zero++;
        }

        for (char ch : str)
        {
            if (ch == '1')
            {
                if (zero > 0)
                    zero--;
                else
                    break;
            }
            else
            {
                if (one > 0)
                    one--;
                else
                    break;
            }
        }

        cout << one + zero << endl;
    }
    return 0;
}