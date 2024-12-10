#include <bits/stdc++.h>
#define Team_blackslash return 0;
#define ll long long

using namespace std;

int main()
{

    ll int n;
    cin >> n;
    string cutout;
    cin >> cutout;
    ll int N = 0, S = 0, U = 0;
    for (char c : cutout)
    {
        if (c == 'N')
        {
            N++;
        }
        else if (c == 'S')
        {
            S++;
        }
        else if (c == 'U')
        {
            U++;
        }
    }

    cout << min(N, min(S, U));
}