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
void solve()
{

    ll m, m1;
    cin >> m >> m1;

    string first_half;
    for (size_t i = 0; i < m / 2; i++)
    {
        first_half += '1';
    }
    for (size_t i = 0; i < m1 / 2; i++)
    {
        first_half += '2';
    }

    string last_half;
    last_half = first_half;
    reverse(last_half.begin(), last_half.end());

    cout << first_half + last_half << endl;
}
int main()
{
    fastread();
    cases(n)
    {
        solve();
    }
}
