#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define file_io()                       \
    ifstream fin("input.txt");          \
    ofstream fout("output.txt");        \
    if (!fin || !fout)                  \
    {                                   \
        cerr << "Error opening file\n"; \
        exit(1);                        \
    }                                   \
    istream &in = fin;                  \
    ostream &out = fout;

#define standard_io()  \
    istream &in = cin; \
    ostream &out = cout;

#define cases(t) \
    ll t;        \
    in >> t;     \
    while (t--)

void solve(istream &in, ostream &out)
{
    ll n;
    in >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        in >> a[i];

    vector<ll> pre(n);
    pre[0] = a[0];
    for (ll i = 1; i < n; i++)
        pre[i] = min(pre[i - 1], a[i]);

    vector<ll> suf(n + 1, 0);
    for (ll i = n - 1; i >= 0; i--)
        suf[i] = pre[i] + suf[i + 1];

    ll sum = suf[0];
    vector<bool> ok(n, false);
    for (ll i = 1; i < n; i++)
        ok[i] = (a[i] >= pre[i - 1]);

    vector<bool> has(n, false);
    if (n > 1)
    {
        has[1] = ok[1];
        for (ll i = 2; i < n; i++)
            has[i] = has[i - 1] || ok[i];
    }

    ll ans = sum;
    ll diff = LLONG_MAX;

    for (ll j = 1; j < n; j++)
    {
        ll temp = sum - suf[j];
        if (j >= 2 && has[j - 1])
        {
            ans = min(ans, temp);
        }
        else
        {
            if (j >= 2)
                diff = min(diff, a[j - 2] - a[j - 1]);
            if (j == 1)
                ans = min(ans, temp + a[j]);
            else
                ans = min(ans, temp + min(diff, a[j]));
        }
    }

    out << ans << '\n';
}

int main()
{
    fastread();

#if USE_FILE_IO
    file_io();
#else
    standard_io();
#endif

    cases(t)
    {
        solve(in, out);
    }

    return 0;
}
