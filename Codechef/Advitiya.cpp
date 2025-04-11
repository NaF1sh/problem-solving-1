#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)
#define fastread()               \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

typedef long long ll;

void solve()
{
    string main_str = "ADVITIYA";
    string input;
    cin >> input;
    ll count = 0;

    for (ll i = 0; i < input.size(); i++)
    {
        ll diff = main_str[i] - input[i];
        if (diff < 0)
            diff += 26;
        count += diff;
    }
    cout << count << endl;
}

int main()
{
    fastread();
    cases(n)
    {
        solve();
    }
    return 0;
}
