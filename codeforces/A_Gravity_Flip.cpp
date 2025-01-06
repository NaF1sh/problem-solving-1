#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{

    ll n;
    cin >> n;

    multiset<int> input;

    for (int i = 0; i < n; i++)
    {

        ll a;
        cin >> a;
        input.insert(a);
    }
    for (int a : input)
    {

        cout << a << " ";
    }
}
