#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll n;
    cin >> n;

    while (n--)
    {
        ll a;
        cin >> a;

        vector<int> a1(a);

        for (ll i = 0; i < a; i++)
        {
            cin >> a1[i];
        }

        // Find the largest and second-largest elements in one pass
        ll longest_b2 = -1, longest_b3 = -1;
        for (ll i = 0; i < a; i++)
        {
            if (a1[i] > longest_b2)
            {
                longest_b3 = longest_b2;
                longest_b2 = a1[i];
            }
            else if (a1[i] > longest_b3)
            {
                longest_b3 = a1[i];
            }
        }

        // Find the indices of the largest and second-largest elements
        for (ll i = 0; i < a; i++)
        {
            if (a1[i] == longest_b2 || a1[i] == longest_b3)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
}
