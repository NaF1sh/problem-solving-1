#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)

int main()
{

    int n;
    cin >> n;

    unordered_map<ll, ll> count;

    for (int i = 0; i < n; i++)
    {
        ll num;
        cin >> num;
        count[num]++;
    }
    int max = 0;
    for (auto &pair : count)
    {
        if (pair.second > max)
            max = pair.second;
    }
    cout << max;
}