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
    vector<pair<int, int>> Teams(n);

    for (int i = 0; i < n; i++)
    {
        cin >> Teams[i].first >> Teams[i].second;
    }

    ll count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j != i)
            {
                if (Teams[i].first == Teams[j].second)
                    count++;
            }
        }
    }

    cout << count;
}