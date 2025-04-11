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
    string input;
    string input1;
    cin >> input >> input1;

    if (input.size() > input1.size())
    {
        cout << "NO" << endl;
        return;
    }
    sort(input.begin(), input.end());
    sort(input1.begin(), input1.end());

    ll count = 0;
    for (size_t i = 0; i < input.size(); i++)
    {
        for (size_t j = 0; j < input1.size(); j++)
        {
            if (input[i] == input1[j])
            {
                input1[j] = 0;
                count++;
                break;
            }
        }
    }
    if (count == input.size())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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
