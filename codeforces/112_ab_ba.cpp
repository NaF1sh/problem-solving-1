#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll a, b;
    cin >> a >> b;

    ll result = pow(a, b) - pow(b, a);

    cout << result << endl;

    return 0;
}
