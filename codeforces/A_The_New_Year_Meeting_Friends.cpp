#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr + 3);

    ll sum = arr[2] - arr[0];
    cout << sum;
}