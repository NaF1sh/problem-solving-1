#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, ogm;
    cin >> n >> ogm;

    ll count = 0;
    while (n--)
    {
        ll m = ogm;
        while (m--)
        {
            pair<int, int> windows;
            cin >> windows.first >> windows.second;

            if (windows.first != 0 || windows.second != 0)
                count++;
        }
    }

    cout << count;
}