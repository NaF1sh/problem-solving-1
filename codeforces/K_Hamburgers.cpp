#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    string a;
    cin >> a;

    ll b = 0, s = 0, c = 0;
    for (char ch : a)
    {
        if (ch == 'B')
            b++;
        else if (ch == 'S')
            s++;
        else if (ch == 'C')
            c++;
    }

    ll nb, ns, nc;
    cin >> nb >> ns >> nc;

    ll pb, ps, pc;
    cin >> pb >> ps >> pc;

    ll money;
    cin >> money;

    ll low = 0, high = 1e13, count = 0;

    while (low <= high)
    {

        ll mid = (low + high) / 2;

        ll b_needed = max(0LL, mid * b - nb);
        ll s_needed = max(0LL, mid * s - ns);
        ll c_needed = max(0LL, mid * c - nc);

        ll cost = (b_needed * pb) + (s_needed * ps) + (c_needed * pc);

        if (cost <= money)
        {

            low = mid + 1;
            count = mid;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << count;
}

int main()
{
    fastread();
    solve();
}
