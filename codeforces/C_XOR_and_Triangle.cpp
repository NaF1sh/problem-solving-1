#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

bool isPowerOfTwo(int n)
{
    return (n & (n - 1)) == 0;
}

void solve()
{
    int num;
    cin >> num;

    if (isPowerOfTwo(num) || isPowerOfTwo(num + 1))
    {
        cout << "-1\n";
        return;
    }

    int power = 1;
    while (power * 2 < num)
    {
        power *= 2;
    }

    int result = power - 1;
    cout << result << "\n";
}

int main()
{
    fastread();
    cases(t)
    {
        solve();
    }
    return 0;
}