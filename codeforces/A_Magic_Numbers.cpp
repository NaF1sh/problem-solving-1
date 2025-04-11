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

    string a;
    cin >> a;

    bool flag = true;
    for (size_t i = 0; i < a.size(); i++)
    {
        if (a[i] == '1')
        {

            if (a[i + 1] == '4')
            {
                i++;
                if (a[i + 1] == '4')
                    i++;
            }
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
int main()
{
    fastread();
    solve();
}
