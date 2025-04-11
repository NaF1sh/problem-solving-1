#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

int main()
{

    fastread();
    cases(n)
    {

        ll m;
        cin >> m;
        string input;
        cin >> input;

        map<char, ll> input1;

        for (char c : input)
        {
            input1[c]++;
        }
        bool flag = true;
        ll count = 0;
        for (ll i = 0; i < m - 1; i++)
        {
            if (input[i] == input[i])
            {
                count++;
            }
            if (input[i] != input[i + 1] && (i + 1 < m))
            {
                if (count != input1[input[i]])
                {
                    flag = false;
                    break;
                }
                count = 0;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}