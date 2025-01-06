#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)

int main()
{
    string input;
    cin >> input;
    ll suma = 0;
    ll sumb = 0;
    bool flag = false;

    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == '1')
        {
            if (i + 1 < input.size() && input[i + 1] == '1')
                suma++;
            else
                suma = 0;
            if (suma >= 6)
            {
                flag = true;
                break;
            }
        }
        if (input[i] == '0')
        {
            if (i + 1 < input.size() && input[i + 1] == '0')
                sumb++;
            else
                sumb = 0;
            if (sumb >= 6)
            {
                flag = true;
                break;
            }
        }
    }

    flag == true ? cout << "YES" : cout << "NO";
    cout << endl;

    return 0;
}
