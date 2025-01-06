#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)

int main()
{

    ll n, m;
    cin >> n >> m;
    set<int> count;
    for (int i = 1; i <= m; i++)
    {
        count.insert(i);
    }

    while (n--)
    {
        ll l, r;
        cin >> l >> r;

        for (int i = l; i <= r; i++)
        {
            count.erase(i);
        }
    }

    cout << count.size() << endl;

    for (auto c : count)
        cout << c << " ";
}