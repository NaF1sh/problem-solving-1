#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{

    ll t, d;
    cin >> t >> d;

    queue<int> input;
    for (int i = 0; i < t; i++)
    {
        ll a;
        cin >> a;
        input.push(a);
    }
    ll sum = 0;
    ll count = 0;
    ll count1 = 0;
    while (!input.empty())
    {
        sum += input.front();
        input.pop();
        count1++;

        if (!input.empty())
        {
            sum += 5;
            count++;
        }
        if (!input.empty())
        {
            sum += 5;
            count++;
        }
    }
    if (sum > d)
    {
        cout << "-1";
    }

    else
    {
        ll sum2 = d - sum;

        if (sum2 >= 0)
            count += sum2 / 5;

        cout << count << endl;
    }
}