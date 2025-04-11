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

bool contains7(ll x)
{
    while (x > 0)
    {
        if (x % 10 == 7)
            return true;
        x /= 10;
    }
    return false;
}

bool possibleWithOps(ll n, int r)
{
    ll A = n - r;
    vector<int> digits;
    while (A > 0)
    {
        digits.push_back(A % 10);
        A /= 10;
    }
    if (digits.empty())
    {
        digits.push_back(0);
    }

    int L = max((int)digits.size(), 12);
    const int maxCarry = 40;
    vector<vector<int>> dp(32, vector<int>(42, 0));
    vector<vector<int>> next_dp(32, vector<int>(42, 0));
    dp[r][0] = 1;

    for (int pos = 0; pos < L; pos++)
    {
        fill(next_dp.begin(), next_dp.end(), vector<int>(42, 0));
        int d = (pos < digits.size() ? digits[pos] : 0);

        for (int rem = 0; rem <= r; rem++)
        {
            for (int carry = 0; carry < maxCarry; carry++)
            {
                int mask = dp[rem][carry];
                if (mask == 0)
                    continue;
                for (int add = 0; add <= rem; add++)
                {
                    int total = d + carry + add;
                    int new_digit = total % 10;
                    int new_carry = total / 10;
                    if (new_carry >= maxCarry)
                        continue;
                    int new_rem = rem - add;
                    int new_mask = mask;
                    if (new_digit == 7)
                        new_mask |= 2;
                    next_dp[new_rem][new_carry] |= new_mask;
                }
            }
        }
        dp.swap(next_dp);
    }
    return (dp[0][0] & 2) != 0;
}

void solve()
{
    ll n;
    cin >> n;
    if (contains7(n))
    {
        cout << 0 << "\n";
        return;
    }
    int ans = -1;
    for (int r = 1; r <= 30; r++)
    {
        if (possibleWithOps(n, r))
        {
            ans = r;
            break;
        }
    }
    cout << ans << "\n";
}

int main()
{
    fastread();

    cases(t)
    {
        solve();
    }
    return 0;
}