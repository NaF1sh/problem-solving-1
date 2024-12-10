#include <bits/stdc++.h>
#define Team_blackslash return 0;
#define ll long long

using namespace std;

int main()
{

    ll int t;
    cin >> t;

    vector<ll int> l1(t);
    for (int i = 0; i < t; i++)
    {
        cin >> l1[i];
    }

    ll t1;
    cin >> t1;

    for (int i = 0; i < t1; i++)
    {
        ll int l2;
        cin >> l2;
        ll int count = 0;
        for (int j = 0; j < t; j++)
        {

            if (l1[j] == l2)
            {
                count++;
            }
        }

        if (count <= 1)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
}
