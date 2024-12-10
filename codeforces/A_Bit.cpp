#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    double count = 0;
    while (t--)
    {
        string input;
        cin >> input;

        for (int i = 0; i < input.size(); i++)
        {
            if (input[i] == '+')
                count += 0.5;
            else if (input[i] == '-')
            {
                count -= 0.5;
            }
        }
    }
    cout << count;
}