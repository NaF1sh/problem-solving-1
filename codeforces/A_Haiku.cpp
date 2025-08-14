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

ll countc(string l)
{
    ll count1 = 0;

    for (auto a : l)
    {
        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
        {
            count1++;
        }
    }
    return count1;
}
void solve()
{
    string l1, l2, l3;
    getline(cin, l1);
    getline(cin, l2);
    getline(cin, l3);

    ll l1c = countc(l1);
    ll l2c = countc(l2);
    ll l3c = countc(l3);

    if (l1c == 5 && l2c == 7 && l3c == 5)
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
