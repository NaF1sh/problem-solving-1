#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)
bool descending(int a, int b) { return a > b; }
int main()
{

    ll k;
    cin >> k;

    vector<int> months(12);

    for (int i = 0; i < 12; i++)
    {
        cin >> months[i];
    }

    sort(months.begin(), months.end(), descending);

    ll sum = 0;
    ll count = 0;
    for (int i = 0; i < 12; i++)
    {
        if (sum < k)
        {
            sum += months[i];
            count++;
        }
        if (sum >= k)
        {
            break;
        }
    }
    if (sum < k)
    {
        count = -1;
    }
    cout << count;
}