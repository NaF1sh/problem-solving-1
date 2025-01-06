#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)

int main()
{
    cases(n)
    {
        ll apartment;
        cin >> apartment;

        ll digit = apartment % 10;

        ll length = to_string(apartment).length();
        ll total_press = 0;

        for (int i = 1; i < digit; i++)
        {
            total_press += 1 + 2 + 3 + 4;
        }
        for (int i = 1; i <= length; i++)
        {
            total_press += i;
        }
        cout << total_press << endl;
    }
}