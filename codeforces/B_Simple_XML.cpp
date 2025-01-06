#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)
int main()
{

    string a;
    cin >> a;
    ll count = 0;
    for (ll i = 0; i < a.size() - 1;)
    {
        if (a[i] == '<' && a[i + 1] != '/')
        {
            for (ll j = 0; j < count * 2; j++)
            {
                cout << " ";
            }
            cout << a[i] << a[i + 1] << a[i + 2] << endl;
            count++;
            i += 3;
        }
        else if (a[i] == '<' && a[i + 1] == '/')
        {
            count--;
            for (ll j = 0; j < count * 2; j++)
            {
                cout << " ";
            }

            cout << a[i] << a[i + 1] << a[i + 2] << a[i + 3] << endl;

            i += 4;
        }
        else
        {
            i++;
        }
    }
}
