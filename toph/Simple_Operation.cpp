#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    ll int cases;
    cin >> cases;
    ll i = 0;
    while (cases--)
    {
        i++;
        ll a;
        cin >> a;
        char op;
        cin >> op;
        ll b;
        cin >> b;
        ll int sum = 0;
        if (op == '+')
        {
            sum = a + b;
        }

        else if (op == '-')
        {
            sum = a - b;
        }
        else if (op == '*')
        {
            sum = a * b;
        }
        else
        {
            sum = a / b;
        }
        cout << "Case " << i << ": " << sum << endl;
    }
}
