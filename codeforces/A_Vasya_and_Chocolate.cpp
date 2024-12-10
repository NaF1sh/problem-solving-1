
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll t_money, a, free, po1;
        cin >> t_money >> a >> free >> po1;

        ll can_buy = t_money / po1;         // No need for floor as integer division truncates
        ll can_free = (can_buy / a) * free; // Multiply by the number of free chocolates per offer

        cout << can_buy + can_free << endl;
    }

    return 0;
}
