#include <bits/stdc++.h>
using namespace std;

// === CONFIGURATION ===
#define USE_FILE_IO false // Set to true to use input.txt/output.txt
// ======================

#define ll long long int
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
#define GCD(a, b) ((b) == 0 ? (a) : GCD((b), (a) % (b)))
/////////////////////////////////////////////////////////////////////////////////////////

const ll MOD = 1000000007;

ll pw2(ll e)
{
    ll res = 1, base = 2;
    while (e)
    {
        if (e & 1)
            res = (res * base) % MOD;
        base = (base * base) % MOD;
        e >>= 1;
    }
    return res;
}

void solve(istream &in, ostream &out)
{
    ll n;
    in >> n;

    vector<vector<ll>> g(n + 1);
    for (ll i = 0; i < n - 1; i++)
    {
        ll u, v;
        in >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector<ll> parent(n + 1, 0);
    vector<vector<ll>> child(n + 1);
    vector<ll> stack = {1};
    parent[1] = -1;

    while (!stack.empty())
    {
        ll u = stack.back();
        stack.pop_back();
        for (ll v : g[u])
        {
            if (v != parent[u])
            {
                parent[v] = u;
                child[u].push_back(v);
                stack.push_back(v);
            }
        }
    }

    vector<ll> leaves;
    for (ll v = 1; v <= n; v++)
    {
        if (child[v].empty())
            leaves.push_back(v);
    }

    if ((ll)leaves.size() > 2)
    {
        out << 0 << "\n";
        return;
    }

    if ((ll)leaves.size() == 1)
    {
        out << pw2(n) << "\n";
        return;
    }

    ll B = -1;
    for (ll v = 1; v <= n; v++)
    {
        if ((ll)child[v].size() == 2)
        {
            B = v;
            break;
        }
    }

    if (B == -1)
    {
        out << 0 << "\n";
        return;
    }

    ll c1 = child[B][0], c2 = child[B][1];

    auto subtree_size = [&](ll root)
    {
        ll sz = 0;
        vector<ll> s = {root};
        while (!s.empty())
        {
            ll u = s.back();
            s.pop_back();
            sz++;
            for (ll w : child[u])
                s.push_back(w);
        }
        return sz;
    };

    ll sz1 = subtree_size(c1);
    ll sz2 = subtree_size(c2);
    ll d = abs(sz1 - sz2);
    ll t = n - sz1 - sz2;

    ll F = (d == 0) ? 2LL : (3LL * pw2(d - 1)) % MOD;
    ll ans = (pw2(t) * F) % MOD;

    out << ans << "\n";
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
