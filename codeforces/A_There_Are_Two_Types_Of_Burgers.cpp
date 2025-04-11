#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)

int main()
{
    cases(n)
    {
        ll b, p, f, h, c;
        cin >> b >> p >> f;
        cin >> h >> c;

        ll sum = 0;
        ll total_bun = b / 2;

        if (h >= c)
        {
            ll total_hamburger = min(total_bun, p);
            sum += total_hamburger * h;
            total_bun -= total_hamburger;

            ll total_chicken_burger = min(total_bun, f);
            sum += total_chicken_burger * c;
        }
        else
        {
            ll total_chicken_burger = min(total_bun, f);
            sum += total_chicken_burger * c;
            total_bun -= total_chicken_burger;

            ll total_hamburger = min(total_bun, p);
            sum += total_hamburger * h;
        }

        cout << sum << endl;
    }
    return 0;
}