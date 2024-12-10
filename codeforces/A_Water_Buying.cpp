#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        ll n;
        ll price_of_1;
        ll price_of_2;
        cin >> n >> price_of_1 >> price_of_2;

        if (n % 2 == 0)
        {
            ll n_of_2 = n / 2;
            cout << min(n * price_of_1, n_of_2 * price_of_2);
        }
        else
        {
            ll n_of_2 = (n - 1) / 2;
            cout << min(n_of_2 * price_of_2 + price_of_1, n * price_of_1);
        }
        cout << endl;
    }
}