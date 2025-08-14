#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define cases(n)       \
    ll n;              \
    scanf("%lld", &n); \
    while (n--)
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    ll m;
    scanf("%lld", &m);
    ll q = 0;

    ll ans = 0;
    for (size_t i = 0; q < m; i++)
    {
        q += i;
        ans = i;
    }
    if (q != m)
    {
        printf("NAI\n");
        return;
    }
    printf("%lld\n", ans);
}

int main()
{
    cases(n)
    {
        solve();
    }
}