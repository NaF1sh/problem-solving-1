#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n;
    cin >> n;
    string input;
    cin >> input;

    string firstHalf = input.substr(0, n);
    string secondHalf = input.substr(n, n);

    // Sort both halves
    sort(firstHalf.begin(), firstHalf.end());
    sort(secondHalf.begin(), secondHalf.end());

    // Check strictly increasing condition
    bool increasing = true;
    for (int i = 0; i < n; i++)
    {
        if (firstHalf[i] >= secondHalf[i])
        {
            increasing = false;
            break;
        }
    }

    // Check strictly decreasing condition
    bool decreasing = true;
    for (int i = 0; i < n; i++)
    {
        if (firstHalf[i] <= secondHalf[i])
        {
            decreasing = false;
            break;
        }
    }

    if (increasing || decreasing)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
