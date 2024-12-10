#include <bits/stdc++.h>
#define Team_blackslash return 0;
#define ll long long

using namespace std;

int main()
{
    ll int a, b;
    cin >> a >> b;

    ll int lower = max(a - b, b - a);

    ll int upper = a + b;

    cout << upper - lower - 1;
}