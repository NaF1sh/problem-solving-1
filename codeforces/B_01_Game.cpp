#include <bits/stdc++.h>
using namespace std;

#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    string a;
    cin >> a;

    int count0 = count(a.begin(), a.end(), '0');
    int count1 = count(a.begin(), a.end(), '1');

    int min_count = min(count0, count1);

    if (min_count % 2 == 0)
    {
        cout << "NET" << endl;
    }
    else
    {
        cout << "DA" << endl;
    }
}

int main()
{
    fastread();

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}