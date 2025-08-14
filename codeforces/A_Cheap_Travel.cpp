#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    ll n, m, a, b;
    cin >> n >> m >> a >> b;

    ll oneway = n * a;

    ll twoway = (n / m) * b;

    ll left = n % m;
    twoway += min(left * a, b);

    
    cout << min(oneway, twoway) << endl;
}

int main()
{
    fastread();
    solve();
    return 0;
}