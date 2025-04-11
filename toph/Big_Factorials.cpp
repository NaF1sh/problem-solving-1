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

void multiply(vector<int> &number, int x)
{
    int carry = 0;
    for (int i = 0; i < number.size(); i++)
    {
        int prod = number[i] * x + carry;
        number[i] = prod % 10;
        carry = prod / 10;
    }
    while (carry)
    {
        number.push_back(carry % 10);
        carry /= 10;
    }
}

void solve()
{
    ll a;
    cin >> a;
    vector<int> result(1, 1);

    for (int i = 2; i <= a; i++)
    {
        multiply(result, i);
    }

    if (result.size() <= 4)
    {
        for (int i = result.size() - 1; i >= 0; i--)
        {
            cout << result[i];
        }
    }
    else
    {
        for (int i = 3; i >= 0; i--)
        {
            cout << result[i];
        }
    }
    cout << endl;
}

int main()
{
    fastread();
    solve();
    return 0;
}
