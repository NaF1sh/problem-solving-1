#include <bits/stdc++.h>
#define Team_blackslash return 0;
#define ll long long

using namespace std;

int main()
{

    ll int n, m, count = 0;

    cin >> n >> m;

    while (n--)
    {
        for (int i = 0; i < m; i++)
        {
            ll int s;
            cin >> s;
            if (s == 0)
            {
                count++;
            }
        }
    }

    cout << count;
}
