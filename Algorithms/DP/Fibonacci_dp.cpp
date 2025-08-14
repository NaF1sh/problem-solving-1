#include <bits\stdc++.h>
using namespace std;
using ll = long long;
vector<ll> dp;
ll fibo(ll n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = fibo(n - 1) + fibo(n - 2);
}
int main()
{

    ll n;
    cin >> n;
    dp.assign(n + 1, -1);
    cout
        << fibo(n);
}
