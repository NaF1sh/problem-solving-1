#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)

int main()
{
    ll n;
    cin >> n;

    ll file;
    cin >> file;

    vector<int> drives(n);

    for (size_t i = 0; i < n; i++)
    {
        cin >> drives[i];
    }
    sort(drives.rbegin(), drives.rend());

    ll count = 0;
    ll sum = 0;
    for (size_t i = 0; i < n; i++)
    {

        sum += drives[i];
        count++;
        if (sum >= file)
            break;
    }
    cout << count;
    return 0;
}