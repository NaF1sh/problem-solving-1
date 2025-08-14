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

bool customsort(const pair<string, ll> &a, const pair<string, ll> &b)
{
    return a.second > b.second;
}
void solve()
{

    ll m, m1;
    cin >> m >> m1;

    vector<ll> a(m);

    for (size_t i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    map<string, ll> a1;

    for (size_t i = 0; i < m1; i++)
    {
        string a12;
        cin >> a12;

        a1[a12]++;
    }

    vector<pair<string, ll>> a11(a1.begin(), a1.end());
    sort(a11.begin(), a11.end(), customsort);
    ll min = 0;
    for (size_t i = 0; i < a11.size(); i++)
    {
        min += a11[i].second * a[i];
    }
    cout << min;
    sort(a.rbegin(), a.rend());
    ll max = 0;
    for (size_t i = 0; i < a11.size(); i++)
    {
        max += a11[i].second * a[i];
    }
    cout << " " << max;
}
int main()
{
    fastread();
    solve();
}
