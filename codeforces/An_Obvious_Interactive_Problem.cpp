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

    ll low = 0;
    ll high = 1000000;
    ll i = 0;
    while (low <= high && i <= 25)
    {
        i++;
        ll mid = low + (high - low) / 2;
        cout << mid << endl
             << flush;
        string input;
        cin >> input;
        if (input == "Bingo!")
        {
            return;
        }
        else if (input == "Bigger")
        {
            low = mid + 1;
        }
        else if (input == "Smaller")
        {
            high = mid - 1;
        }
    }
}
int main()
{
    fastread();
    solve();
}
