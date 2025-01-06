
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    ll n;
    cin >> n;

    ll sum = 0;
    int count = 0;
    for (int i = 1; n >= 0; i++)
    {
        sum += i;
        n = n - sum;
        count++;
    }
    cout << count - 1;
}