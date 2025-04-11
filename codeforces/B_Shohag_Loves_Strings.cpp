#include <bits/stdc++.h>
using namespace std;

#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define nl '\n'
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;

// PRIME NUMBER TEST//
bool prime(int n)
{
    if (n < 2)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Graph Grid //
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)

void solve()
{
    string s;
    cin >> s;
    ll f = 0, n;
    n = s.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            cout << s[i] << s[i] << endl;
            f = 1;
            break;
        }
    }
    if (f == 0)
    {
        for (int i = 0; i < n - 2; i++)
        {
            set<char> st;
            st.insert(s[i]);
            st.insert(s[i + 1]);
            st.insert(s[i + 2]);
            if (st.size() == 3)
            {
                cout << s[i] << s[i + 1] << s[i + 2] << endl;
                f = 1;
                break;
            }
        }
    }
    if (f == 0)
    {
        cout << -1 << endl;
    }
}

int main()
{
    faster;
    cases(tt)
    {
        solve();
    }
    return 0;
}