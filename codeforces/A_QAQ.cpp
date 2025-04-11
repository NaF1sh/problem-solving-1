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

int main()
{
    fastread();

    string input;
    cin >> input;

    ll result = 0;
    ll q_before = 0;
    ll q_after = count(input.begin(), input.end(), 'Q');

    for (char c : input)
    {
        if (c == 'Q')
        {
            q_before++;
            q_after--;
        }
        else if (c == 'A')
        {
            result += q_before * q_after;
        }
    }

    cout << result << endl;
    return 0;
}
