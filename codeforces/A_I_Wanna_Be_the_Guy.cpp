#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)

int main()
{

    ll n;
    cin >> n;
    ll p, q;
    cin >> p;
    set<int> level;
    while (p--)
    {
        ll lv;
        cin >> lv;
        level.insert(lv);
    }

    cin >> q;
    while (q--)
    {
        ll lv;
        cin >> lv;
        level.insert(lv);
    }

    if (level.size() == n)
    {
        cout << "I become the guy. ";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
}
