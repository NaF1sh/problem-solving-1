#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = n * (n + 1) / 2;

    int m;
    cin >> m;
    int sum1 = 0;
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        sum1 += y;
    }

    cout << sum - sum1;
}
