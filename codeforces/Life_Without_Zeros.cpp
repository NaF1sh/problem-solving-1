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
    ll a, b;
    cin >> a >> b;
    ll c = a + b;

    string a1 = to_string(a);
    string b1 = to_string(b);
    string c1 = to_string(c);
    string a12, b12, c12;
    for (size_t i = 0; i < a1.size(); i++)
    {
        if (a1[i] != '0')
        {
            a12 += a1[i];
        }
    }
    for (size_t i = 0; i < b1.size(); i++)
    {
        if (b1[i] != '0')
        {
            b12 += b1[i];
        }
    }
    for (size_t i = 0; i < c1.size(); i++)
    {
        if (c1[i] != '0')
        {
            c12 += c1[i];
        }
    }

    ll a121 = stoll(a12);
    ll b121 = stoll(b12);
    ll c121 = stoll(c12);

    if (a121 + b121 == c121)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
int main()
{
    fastread();
    solve();
}
