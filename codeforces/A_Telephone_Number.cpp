#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define cases(t) \
    ll t;        \
    cin >> t;    \
    while (t--)

int main()
{
    cases(t)
    {
        ll n1;
        cin >> n1;
        string number;
        cin >> number;
        bool flag = false;
        for (size_t i = 0; i < number.size(); i++)
        {
            if (number[i] == '8' && number.size() - i >= 11)
            {
                cout << "YES" << endl;
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}