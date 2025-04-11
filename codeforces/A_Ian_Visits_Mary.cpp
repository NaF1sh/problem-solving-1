#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

int main()
{
    Faster;
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;

        if (abs(x - y) == 1)
        {
            cout << 1 << endl;
            cout << x << " " << y << endl;
        }
        else
        {
            cout << 2 << endl;
            if (x + 1LL > (ll)1e9)
            {
                cout << (x - 1LL) << " " << 1 << endl;
                cout << x << " " << y << endl;
            }
            else
            {
                cout << (x + 1LL) << " " << 1 << endl;
                cout << x << " " << y << endl;
            }
        }
    }
    return 0;
}
