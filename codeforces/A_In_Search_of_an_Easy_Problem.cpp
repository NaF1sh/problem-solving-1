#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    ll t;
    cin >> t;
    bool flag = true;
    while (t--)
    {
        ll input;
        cin >> input;
        if (input == 1)
        {
            cout << "HARD";
            flag = !flag;
            break;
        }
    }
    if (flag)
        cout << "EASY";
}