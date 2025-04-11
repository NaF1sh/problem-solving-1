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
    ll m;
    cin >> m;
    ll v;
    cin >> v;

    vector<ll> input1;

    for (ll i = 0; i < m; i++)
    {
        ll a;
        cin >> a;
        bool flag = true;
        for (size_t j = 0; j < a; j++)
        {
            ll v1;
            cin >> v1;
            if (v1 < v && flag)
            {
                input1.push_back(i + 1);
                flag = false;
            }
        }
    }
    if (input1.size() > 0)
    {
        cout << input1.size() << endl;

        sort(input1.begin(), input1.end());

        for (size_t i = 0; i < input1.size(); i++)
        {
            cout << input1[i] << " ";
        }
    }
    else
    {
        cout << 0;
    }
}

int main()
{
    fastread();

    solve();
}
