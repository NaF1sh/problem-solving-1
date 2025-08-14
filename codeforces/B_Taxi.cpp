#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> count(5, 0);
    for (int i = 0; i < n; i++)
    {
        int s;
        cin >> s;
        count[s]++;
    }

    int taxis = count[4];

    taxis += count[3];
    count[1] = max(0, count[1] - count[3]);

    taxis += count[2] / 2;
    count[2] %= 2;

    if (count[2] == 1)
    {
        taxis++;
        count[1] = max(0, count[1] - 2);
    }

    taxis += (count[1] + 3) / 4;

    cout << taxis << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}
