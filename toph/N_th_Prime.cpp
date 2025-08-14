#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

bool ifprime(ll n)
{
    if (n <= 1)
        return false;
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void primenumbers(vector<ll> &primes, ll n)
{
    ll num = 2;
    while (primes.size() < n)
    {
        if (ifprime(num))
        {
            primes.push_back(num);
        }
        num++;
    }
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> primes;
    primenumbers(primes, n);

    cout << primes[n - 1] << endl;
}

int main()
{
    fastread();
    solve();
    return 0;
}
