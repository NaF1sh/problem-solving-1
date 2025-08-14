#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> tasks(m);
    for (int i = 0; i < m; i++)
    {
        cin >> tasks[i];
    }

    ll time = 0;
    ll current = 1;
    for (ll t : tasks)
    {
        if (t >= current)
        {
            time += t - current;
        }
        else
        {
            time += (n - current) + t;
        }
        current = t;
    }
    cout << time << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
